package ;

import flixel.FlxSprite;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.util.FlxSpriteUtil;

class Minimap extends FlxSprite
{
	private var parent:UI;
	public var current:FlxSprite;
	public var circlebg:FlxSprite;
	
	public function new(parent:UI)
	{
		super(FlxG.width - 110, FlxG.height - 110);
		this.parent = parent;
		makeGraphic(100, 100, 0x14FFFFFF);
		
		circlebg = new FlxSprite(x - 20, y - 20);
		circlebg.makeGraphic(140, 140, FlxColor.TRANSPARENT);
		FlxSpriteUtil.drawCircle(circlebg, -1, -1, -1, 0x14FFFFFF);
		
		for (i in 0...parent.parent.clusters.length)
		{
			var cur:Cluster = parent.parent.clusters[i];
			var marker = new FlxSprite(0, 0);
			
			var markerW = 100 * (cur.width / FlxG.worldBounds.width);
			var markerH = 100 * (cur.height / FlxG.worldBounds.height);
			var markerX = 100 * (cur.x / FlxG.worldBounds.width);
			var markerY = 100 * (cur.y / FlxG.worldBounds.height);
			
			//trace(markerW + "-w " + markerH + "-h " + markerX + "-x " + markerY + "-y ");
			//trace(cur.width + "-w " + cur.height + "-h ");
			
			marker.makeGraphic(Math.ceil(markerW), Math.ceil(markerH), Std.parseInt("0x14" + cur.clusterColor.toHex()));
			
			stamp(marker, Std.int(markerX), Std.int(markerY));
		}
		current = new FlxSprite(0, 0);
		current.makeGraphic(6, 6, FlxColor.WHITE);
		FlxSpriteUtil.flicker(current, 0, 0.08);
	}
	
	override public function update()
	{
		super.update();
		
		current.x = x + (width * (parent.cfo.x / FlxG.worldBounds.width));
		current.y = y + (height * (parent.cfo.y / FlxG.worldBounds.height));
		
		
		if (overlapsPoint(FlxG.mouse, true) && FlxG.mouse.justReleased)
		{
			//trace(" -");
			parent.cfo.x = (FlxG.worldBounds.width * ((FlxG.mouse.x - parent.cfo.x) - FlxG.width / 2 + width + 10) / width);
			parent.cfo.y = (FlxG.worldBounds.height * ((FlxG.mouse.y - parent.cfo.y) - FlxG.height / 2 + height + 10) / height);
			//trace(" -");
			//trace(parent.cfo.x + " " + parent.cfo.y + "\n"); 
			//trace(x + " " + y + " " + FlxG.mouse.x + " " + FlxG.mouse.y);
		}
	}
}