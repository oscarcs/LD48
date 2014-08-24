package ;

import flixel.FlxSprite;
import flixel.FlxG;
import flixel.util.FlxColor;

class Minimap extends FlxSprite
{
	private var parent:UI;
	public var current:FlxSprite;
	
	public function new(parent:UI)
	{
		super(FlxG.width - 110, FlxG.height - 110);
		this.parent = parent;
		makeGraphic(100, 100, 0x14FFFFFF);
		
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
			
			marker.makeGraphic(Math.ceil(markerW), Math.ceil(markerH), cur.clusterColor.toNumber());
			stamp(marker, Std.int(markerX), Std.int(markerY));
		}
		current = new FlxSprite(0, 0);
		current.makeGraphic(5, 5, FlxColor.GREEN);
	}
	
	override public function update()
	{
		super.update();
		
		current.x = x + (width * (parent.cfo.x / FlxG.worldBounds.width));
		current.y = y + (height * (parent.cfo.y / FlxG.worldBounds.height));
		
		
		if (overlapsPoint(FlxG.mouse, true))
		{
			
		}
	}
}