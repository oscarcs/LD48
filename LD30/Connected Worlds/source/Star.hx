package ;

import flixel.*;
import flixel.text.FlxText;
import flixel.util.*;
import flixel.util.FlxSpriteUtil;

class Star extends FlxObject
{
	public var mid:FlxPoint;
	public var size:Int;
	private var parent:PlayState;
	public var connectedTo:Array<Star> = [];
	public var connections:Array<Connection> = [];
	
	public var starGraphic:FlxSprite;
	public var starText:FlxText;
	
	public function new(x:Float, y:Float, size:Int, ?id:Int, ?parent:PlayState)
	{
		//super(x, y);
		super(x, y);
		
		this.ID = id;
		this.size = size;
		this.parent = parent;
		
		starGraphic = new FlxSprite(x, y);
		starGraphic.makeGraphic(size, size, FlxColor.MAGENTA);
		FlxSpriteUtil.drawCircle(starGraphic, -1, -1, -1, FlxColor.WHITE);
		//this.makeGraphic(size, size, FlxColor.WHITE);
		mid = starGraphic.getGraphicMidpoint();
		
		starText = new FlxText(x - 16, y - 16, 0, "0", 16);
		starText.font = "assets/data/dos437.ttf";
		FlxG.state.add(starText);
		starText.visible = false;
		
		//flicker
		if (Math.random() > 0.9 && size < 4) FlxSpriteUtil.flicker(starGraphic, 0, 0.5, true);
		FlxG.state.add(starGraphic);
	}
	
	override public function update()
	{
		super.update();
		starGraphic.color = FlxColor.WHITE;
		starText.visible = false;
		starText.text = connections.length + "";
		
		var xx = FlxG.mouse.x;
		var yy = FlxG.mouse.y;
		//naive 'quadtree' distance checking.
		if (optimizedCheckDist(FlxG.mouse.x, FlxG.mouse.y) )//&& parent.drawingLine == false)
		{
			starGraphic.color = FlxColor.BLUE;	
			parent.highlighted = this;
			starText.visible = true;
			
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
		if (checkDistance(xx, yy, 400))
		{
			if (checkDistance(xx, yy, 100))
			{
				if (checkDistance(xx, yy, 10))
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
		return false;
	}
	
}