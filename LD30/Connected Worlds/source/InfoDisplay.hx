package ;

import flixel.FlxSprite;
import flixel.group.FlxGroup;
import flixel.text.FlxText;

class InfoDisplay extends FlxGroup
{
	public var bg:FlxSprite;
	public var goodsDisplay:FlxText;
	
	public function new(parent:Star)
	{
		super();
		
		bg = new FlxSprite(parent.x + 10, parent.y + 10);
		bg.makeGraphic(40, 90, 0x14FFFFFF);
		//bg.visible = false;
		add(bg);
		
		//nameDisplay = new FlxText(parent.x + 15, parent.y + 15, 
		
		
		//inputDisplay = new FlxText(parent.x + 15, parent.y + 15, 0, parent.name, 16);
		//add(inputDisplay);
	}
}