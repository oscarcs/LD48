package ;

import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.util.FlxColor;
import nxColor.CIELch;
import flixel.addons.util.FlxAsyncLoop;

class Cluster extends FlxObject
{
	private var parent:PlayState;
	public var clusterColor:CIELch;
	private var loadLoop:FlxAsyncLoop;
	private var clusterArray:Array<Star> = [];
	private var rflag:Bool = false;
	private var flag:Bool = false;
	private var bg:FlxSprite = new FlxSprite(0,0);
	
	public function new(x:Float, y:Float, width:Float, height:Float, parent:PlayState, ?id:Int, ?gN:Int)
	{
		super(x, y, width, height);
		this.x = x;
		this.y = y;
		this.width = width;
		this.height = height;
		this.parent = parent;
		this.ID = id;
		
		//var genNum = Std.int(Math.min(Std.int((width * height) / (((Std.random(300) + 175) ^ 2) * 12)), 999));
		var genNum;
		if (gN == null)
		{
			genNum = 30;
		}
		else
		{
			genNum = gN;
		}
		//trace(genNum);
		//var clusterArray:Array<Star> = [];
		clusterColor = new CIELch(Std.random(30) + 60, Std.random(40) + 50, Std.random(361));
		//for (i in 0...genNum)
		//{
		//
		//}
		
		//var test = new FlxSprite(x, y);
		//test.makeGraphic(Std.int(width), Std.int(height), Std.parseInt("0x14" + clusterColor.toHex()));
		//parent.add(test);
				
		
		loadLoop = new FlxAsyncLoop(genNum, generateStar, 10);
		parent.add(loadLoop);
	}
	
	private function generateStar():Void
	{
		var cur = new Star(Std.random(Std.int(width)) + Std.int(x), Std.random(Std.int(height)) + Std.int(y), Std.random(4) + 2, Std.parseInt("" + ID + "" + 1), parent, clusterColor.toNumber());
		clusterArray.push(cur);

	}
	
	override public function update()
	{
		super.update();
		
		
		if (this.isOnScreen() && !flag)
		{
			bg = new FlxSprite(x, y);
			bg.makeGraphic(Std.int(width), Std.int(height), Std.parseInt("0x14" + clusterColor.toHex()));
			parent.add(bg);
			flag = true;
		}
		else  if (!isOnScreen())
		{
			flag = false;
			bg.destroy();
			bg = new FlxSprite(0, 0);
		}
		
		
		
		
		if (!loadLoop.started)
		{
			loadLoop.start();
		}
		else
		{
			if (loadLoop.finished && !rflag)
			{
				parent.starArray = parent.starArray.concat(clusterArray);
				loadLoop.kill();
				loadLoop.destroy();
				rflag = true;
			}
		}
	}
}