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

	private var XText:FlxText;
	private var ZText:FlxText;
	private var CText:FlxText;
	
	public function new(start:FlxSprite) 
	{
		var spacing:Int = 30;
		var lead:Int = FlxG.camera.height -60;
		/*
		ZText = new FlxText(60 + start.x, lead + start.y, 0, "Z", 20);
		XText = new FlxText(ZText.x + spacing, lead + start.y, 0, "X", 20);
		CText = new FlxText(XText.x + spacing, lead + start.y, 0, "C", 20);
		*/
		ZText = new FlxText(start.x, start.y, 0, "Z", 20);
		XText = new FlxText(ZText.x, start.y, 0, "X", 20);
		CText = new FlxText(XText.x, start.y, 0, "C", 20);
		
		ZText.scrollFactor.x = 0;
		XText.scrollFactor.x = 0;
		CText.scrollFactor.x = 0;
		ZText.scrollFactor.y = 0;
		XText.scrollFactor.y = 0;
		CText.scrollFactor.y = 0;	
		
		trace("ZTEXT: " + ZText.x +"  " + ZText.y);
		trace("START: " + start.x +"  " + start.y);

		this.add(ZText);
		this.add(XText);
		this.add(CText);
		
		super();
	}
	
}