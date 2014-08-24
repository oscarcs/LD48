package ;

import flixel.FlxObject;
import flixel.util.FlxColor;
import nxColor.CIELch;

class Cluster extends FlxObject
{
	private var parent:PlayState;
	public var clusterColor:CIELch;
	
	public function new(x:Float, y:Float, width:Float, height:Float, parent:PlayState, ?id:Int)
	{
		super(x, y, width, height);
		this.x = x;
		this.y = y;
		this.width = width;
		this.height = height;
		this.parent = parent;
		this.ID = id;
		
		var genNum = Std.int(Math.min(Std.int((width * height) / (((Std.random(300)+175)^2) * 12)), 999));
		//trace(genNum);
		var clusterArray:Array<Star> = [];
		clusterColor = new CIELch(Std.random(30) + 60, Std.random(40) + 50, Std.random(361));
		for (i in 0...genNum)
		{
			var cur = new Star(Std.random(Std.int(width) + Std.int(x)), Std.random(Std.int(height) + Std.int(y)), Std.random(4) + 2, Std.parseInt("" + id + "" + i), parent, clusterColor.toNumber());
			clusterArray.push(cur);
		}
		parent.starArray = parent.starArray.concat(clusterArray);
	}
}