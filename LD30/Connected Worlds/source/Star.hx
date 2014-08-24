package ;

import flixel.*;
import flixel.text.FlxText;
import flixel.util.*;
import flixel.util.FlxSpriteUtil;
import nxColor.CIELch;
import openfl.Assets;

class Star extends FlxObject
{
	public var mid:FlxPoint;
	public var size:Int;
	public var newColor:Int;
	public var name:String;
	private var parent:PlayState;
	public var connectedTo:Array<Star> = [];	
	public var starGraphic:FlxSprite;
	public var starText:FlxText;
	public var connections:Array<Connection> = [];
	
	public var loadRate:Float = 0;
	public var goodsProduced:Float = 0;
	public var info:InfoDisplay;
	
	//resource management
	public var goodsOutput:Array<Resource> = [];
	public var goodsInput:Array<Resource> = [];
	public var goodStored:Array<Resource> = [];
	
	//star names
	public var s = Assets.getText("assets/data/stars.txt").split("\n");
	
	public function new(x:Float, y:Float, size:Int, ?id:Int, ?parent:PlayState, ?newColor:Int = FlxColor.WHITE)
	{
		//super(x, y);
		super(x, y);
		
		this.ID = id;
		this.size = size;
		this.parent = parent;
		this.newColor = newColor;
		this.name = generateName();
		
		loadRate = size * (1 / 80);
		
		starGraphic = new FlxSprite(x, y);
		starGraphic.makeGraphic(size, size, newColor);
		FlxSpriteUtil.drawCircle(starGraphic, -1, -1, -1, newColor);
		//this.makeGraphic(size, size, FlxColor.WHITE);
		mid = starGraphic.getGraphicMidpoint();
		
		starText = new FlxText(x + 16, y + 16, 0, "0", 16);
		starText.font = "assets/data/dos437.ttf";
		FlxG.state.add(starText);
		starText.visible = false;
		
		//create resources
		var possibleRes:Array<String> = ["Ore", "Weapons", "Boosters", "Video Games", "Chips"];	
		for (i in 0...possibleRes.length)
		{
			if (Math.random() > 0.3)
			{
				if (Math.random() > 0.5) goodsOutput.push(new Resource(possibleRes[i], 0));
				else goodsInput.push(new Resource(possibleRes[i], 0));
			}
		}
	
		//flicker
		if (Math.random() > 0.9 && size < 4) FlxSpriteUtil.flicker(starGraphic, 0, 0.5, true);
		if (Math.random() > 0.9 && size >= 4) 
		{
			var planet = new Rotational(Std.random(5) + 4, this.getMidpoint());
			planet.makeGraphic(2, 2, new CIELch(Std.random(20) + 80, 80 + Std.random(20), Std.random(361)).toNumber());
			planet.deltaTheta = (Math.random() - 0.5) / 2;
			planet.deltaTheta += planet.deltaTheta > 0 ? 0.1 : -0.1;
			FlxG.state.add(planet);
		}
		parent.add(this);
		FlxG.state.add(starGraphic);
	}
	
	override public function update()
	{
		super.update();
		starGraphic.color = FlxColor.WHITE;
		starText.visible = false;
		
		if (parent.timeStepCounter >= 0.5 && connections.length > 0)
		{
			goodsProduced += loadRate;
		}

		if (isOnScreen())
		{
			var xx = FlxG.mouse.x;
			var yy = FlxG.mouse.y;
			//naive 'quadtree' distance checking.
			if (optimizedCheckDist(FlxG.mouse.x, FlxG.mouse.y) )//&& parent.drawingLine == false)
			//if (checkDistance(FlxG.mouse.x, FlxG.mouse.y, 10))
			{
				starGraphic.color = FlxColor.BLUE;	
				parent.highlighted = this;
				//" id: " + StringTools.lpad(Std.string(ID), "0", 6)
				
				//set the text
				var reslist = "";
				if (goodsInput.length > 0) reslist += "Requires:\n";
				for (i in 0...goodsInput.length) { reslist += " - " + goodsInput[i].type + " " + Std.int(goodsInput[i].value) + "\n"; };
				if(goodsOutput.length > 0) reslist += "Outputs: ("+ roundTo(loadRate*60, 4) +"/t)\n";
				for (i in 0...goodsOutput.length) { reslist += " - " + goodsOutput[i].type + " " + Std.int(goodsOutput[i].value) + "\n"; };
				starText.text = "Goods: " + Std.int(goodsProduced) + " \nName: " + name + "\n" + reslist;
				starText.visible = true;
				
				if (FlxG.mouse.justReleasedRight)
				{
					if (info == null)
					{
						info = new InfoDisplay(this);
					}
					
					info.visible = !info.visible;
				}				
				
				if (FlxG.mouse.justReleased && !parent.drawingLine)
				{
					parent.drawingLine = true;
					parent.drawingFrom = this;
					//parent.justStartedDrawing = true;
					//parent.drawTimer = 0;
				}
				else if (FlxG.mouse.justReleased && parent.drawingLine)//&& !parent.justStartedDrawing)
				{
					parent.drawingLine = false;
					var x = new Connection(this, parent.drawingFrom);
					FlxG.state.add(x);
					parent.connectionsUpdated = true;
				}
			}
		}
	}
	
	override public function destroy()
	{
		starGraphic.destroy();
		super.destroy();
	}
	
	private function checkDistance(chkX:Float, chkY:Float, dist:Float):Bool
	{

		if ((mid.x - dist) < chkX && (mid.x + dist) > chkX)
		{
			if ((mid.y - dist) < chkY && (mid.y + dist) > chkY)
			{
				return true;
			}
		}
		return false;
	}
	
	private function optimizedCheckDist(xx:Float, yy:Float)
	{
		if (checkDistance(xx, yy, 512))
		{
			if (checkDistance(xx, yy, 128))
			{
				if (checkDistance(xx, yy, 6))
				{
					//trace("Star " + ID + ": Mouse is in range 10");
					//this.color = FlxColor.BLUE;
					return true;
				}
				else 
				{ 
					//trace("Mouse is in range 100"); 
					return false;
				}
			}
			else
			{
				//trace("Mouse is in range 400");
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	
	private function generateName():String
	{
		var n:Array<String> = ["I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X"];
		//var s = readLine("assets/data/starNames.txt", Std.random(372));
		
		var q = Std.random(372);
		var x:String = s[q].substr(0, s[q].length - 1);
		
		if (Math.random() > 0.6) x += " " + n[Std.random(n.length)];
		return x;
	}
	
	private function roundTo(x:Float, places:Int):Float
	{
		x = x * Math.pow(10, places);
		x = Math.round(x) / Math.pow(10, places);
		return x;
	}
	
}