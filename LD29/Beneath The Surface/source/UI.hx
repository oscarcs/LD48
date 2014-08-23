package ;

import flixel.addons.display.FlxSpriteAniRot;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.FlxG;
import flixel.FlxSprite;

/**
 * ...
 * @author NxT
 */
class UI extends FlxGroup
{

	public var XText:FlxText;
	public var ZText:FlxText;
	public var CText:FlxText;
	
	public function new() 
	{
		var spacing:Int = 15;
		var lead:Int = FlxG.camera.height -60;
		/*
		ZText = new FlxText(60 + start.x, lead + start.y, 0, "Z", 20);
		XText = new FlxText(ZText.x + spacing, lead + start.y, 0, "X", 20);
		CText = new FlxText(XText.x + spacing, lead + start.y, 0, "C", 20);
		*/
		ZText = new FlxText(spacing, 23, 0, "Z", 16);
		XText = new FlxText(ZText.x + spacing, 23, 0, "X", 16);
		CText = new FlxText(XText.x + spacing, 23, 0, "C", 16);
		
		ZText.scrollFactor.x = 0;
		XText.scrollFactor.x = 0;
		CText.scrollFactor.x = 0;
		
		ZText.scrollFactor.y = 0;
		XText.scrollFactor.y = 0;
		CText.scrollFactor.y = 0;	
		
		//trace("ZTEXT: " + ZText.x +"  " + ZText.y);
		super();
	}
	
}