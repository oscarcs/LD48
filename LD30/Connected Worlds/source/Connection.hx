package ;

import flixel.FlxBasic;
import flixel.FlxSprite;
import flixel.util.*;
import flixel.util.FlxSpriteUtil;
import flixel.FlxG;

class Connection extends FlxBasic
{
	public var star1:Star;
	public var star2:Star;
	
	public var connectionGraphic:FlxSprite;
	private var screenWidth = 0;
	private var screenHeight = 0;
	private var ls:LineStyle = { };
	public var updated:Bool;
	
	private var start:FlxPoint;
	private var end:FlxPoint;
	
	public function new(star1:Star, star2:Star)
	{
		super();
		this.star1 = star1;
		this.star2 = star2;
		ls.thickness = 2;
		ls.color = FlxColor.WHITE;
		star1.connections.push(this);
		star2.connections.push(this);
		
		
		
		//a is the leftmost one
		var a, b;
		if (Math.min(star1.x, star2.x) == star1.x) 
		{
			a = star1.mid;
			b = star2.mid;
		}
		else
		{
			a = star2.mid;
			b = star1.mid;
		}
		
		//put a gap between star and line
		
		
		//calc angle
		var theta2 = Math.atan2(a.y - b.y, a.x - b.x);
		var theta1 = Math.atan2(b.y - a.y, b.x - a.x);
		//trace(theta1 + " t " + theta2);
		
		//correct theta
		if (theta1 < 0) theta1 += (Math.PI * 2);
		if (theta2 < 0) theta2 += (Math.PI * 2);
		//trace(theta1 + " t " + theta2);
		
		//var ref1 = new FlxPoint(a.x + (10 * Math.cos(theta1)), a.y + (10 * Math.sin(theta1)));
		//var ref2 = new FlxPoint(b.x + (10 * Math.cos(theta1)), b.y + (10 * Math.sin(theta1)));
		
		var d1 = new FlxPoint(10 * Math.cos(theta1), 10 * Math.sin(theta1));
		var d2 = new FlxPoint(10 * Math.cos(theta2), 10 * Math.sin(theta2));
		//trace(d1 + "  " + d2);
		
		//connectionGraphic = new FlxSprite(start.x, start.y);
		connectionGraphic = new FlxSprite(a.x - 10, Math.min(a.y, b.y) - 10);
		connectionGraphic.makeGraphic(Math.ceil(b.x - a.x + 20), Math.ceil(Math.abs(b.y-a.y) + 20), FlxColor.TRANSPARENT);
		
		//if rightmost one is below the left one
		if (b.y > a.y)
		{
			//	   /	//
			//	  /		//
			//	 /		//
			//FlxSpriteUtil.drawLine(connectionGraphic, 0, connectionGraphic.height, connectionGraphic.width, 0, ls);
			//trace(a + "  ||  " + b);
			//trace(FlxG.mouse);
			FlxSpriteUtil.drawLine(connectionGraphic, (b.x + d2.x) -connectionGraphic.x, (b.y + d2.y) - connectionGraphic.y, (a.x + d1.x) - connectionGraphic.x,  (a.y + d1.y) - connectionGraphic.y, ls);
		}
		else
		{
			//	 \		//
			//	  \		//		
			//	   \	//
			//FlxSpriteUtil.drawLine(connectionGraphic, 0, 0, connectionGraphic.width, connectionGraphic.height, ls);
			//FlxSpriteUtil.drawLine(connectionGraphic, b.x + ref1.x, b.y + ref1.y, a.x + ref2.x, a.y + ref2.y, ls);
			//trace(a + "  ||  " + b);
			//trace(FlxG.mouse);
			FlxSpriteUtil.drawLine(connectionGraphic, (b.x + d2.x) -connectionGraphic.x, (b.y + d2.y) - connectionGraphic.y, (a.x + d1.x) - connectionGraphic.x,  (a.y + d1.y) - connectionGraphic.y, ls);
		}
		
		FlxG.state.add(connectionGraphic);
	}
	
	override public function update()
	{
		super.update();
		
		//WOW
		//this is lazy!
		for (i in 0...star1.goodsOutput.length)
		{
			for (j in 0...star2.goodsInput.length)
			{
				if (star1.goodsOutput[i].type == star2.goodsInput[j].type)
				{
					star1.goodsOutput[i].value -= star1.loadRate;
					star2.goodsInput[j].value += star1.loadRate;
				}
			}
		}
		
		for (k in 0...star2.goodsOutput.length)
		{
			for (l in 0...star1.goodsInput.length)
			{
				if (star2.goodsOutput[k].type == star1.goodsInput[l].type)
				{
					star1.goodsOutput[k].value -= star1.loadRate;
					star2.goodsInput[l].value += star1.loadRate;
				}
			}
		}
		
		if (connectionGraphic.isOnScreen())
		{
			connectionGraphic.color = FlxColor.WHITE;
			
			if (connectionGraphic.pixelsOverlapPoint(FlxG.mouse, FlxColor.TRANSPARENT, FlxG.camera))
			{
				connectionGraphic.color = FlxColor.CYAN;
				if (FlxG.mouse.justReleasedRight)
				{
					//connectionGraphic.destroy();
					//this.destroy();
					
					//create a dialog box here with 'destroy'
				}
			}
		}
		
		
		if (updated)
		{
			screenHeight = Math.floor(Math.abs(star1.y - star2.y));
			screenWidth = Math.floor(Math.abs(star1.x - star2.x));
			start = new FlxPoint(Math.min(star1.mid.x, star2.mid.x), Math.min(star1.mid.y, star2.mid.y));
			end = new FlxPoint(Math.max(star1.mid.x, star2.mid.x), Math.max(star1.mid.y, star2.mid.y));	
			
			connectionGraphic = new FlxSprite(start.x, start.y);
			connectionGraphic.makeGraphic(screenWidth, screenHeight, FlxColor.TRANSPARENT);
			
			FlxSpriteUtil.fill(connectionGraphic, FlxColor.TRANSPARENT);
			FlxSpriteUtil.drawLine(connectionGraphic, 0, 0, connectionGraphic.width, connectionGraphic.height, ls);
			updated = false;
		}
		
	}
}