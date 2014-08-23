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
		
		star1.connections.push(this);
		star2.connections.push(this);
		
		screenHeight = Math.floor(Math.abs(star1.mid.y - star2.mid.y));
		screenWidth = Math.floor(Math.abs(star1.mid.x - star2.mid.x));
		
		ls.thickness = 2;
		ls.color = FlxColor.WHITE;
		
		//get min x and y
		start = new FlxPoint(Math.min(star1.mid.x, star2.mid.x), Math.min(star1.mid.y, star2.mid.y));
		//get max x and y
		end = new FlxPoint(Math.max(star1.mid.x, star2.mid.x), Math.max(star1.mid.y, star2.mid.y));
		
		connectionGraphic = new FlxSprite(start.x, start.y);
		connectionGraphic.makeGraphic(screenWidth, screenHeight, FlxColor.TRANSPARENT);
		
		//a is the rightmost one
		var a, b;
		if (Math.max(star1.x, star2.x) == star1.x) 
		{
			a = star1;
			b = star2;
		}
		else
		{
			a = star2;
			b = star1;
		}
		
		if (b.y > a.y)
		{
			//	   /	//
			//	  /		//
			//	 /		//
			FlxSpriteUtil.drawLine(connectionGraphic, 0, connectionGraphic.height, connectionGraphic.width, 0, ls);
		}
		else
		{
			//	 \		//
			//	  \		//		
			//	   \	//
			FlxSpriteUtil.drawLine(connectionGraphic, 0, 0, connectionGraphic.width, connectionGraphic.height, ls);
		}
		
		FlxG.state.add(connectionGraphic);
	}
	
	override public function update()
	{
		super.update();
		
		connectionGraphic.color = FlxColor.WHITE;
		
		if (connectionGraphic.pixelsOverlapPoint(FlxG.mouse, FlxColor.WHITE, FlxG.camera))
		{
			connectionGraphic.color = FlxColor.CYAN;
			if (FlxG.mouse.justReleasedRight)
			{
				connectionGraphic.destroy();
				this.destroy();
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