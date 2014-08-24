package ;

import flixel.*;
import flixel.addons.util.FlxAsyncLoop;
import flixel.util.*;
import flixel.util.FlxSpriteUtil;
import flixel.FlxSprite;
import nxColor.CIELch;

class PlayState extends FlxState
{
	private var connection:LineStyle = { };
	
	private var skySurface:FlxSprite;
	public var lineSurface:FlxSprite;
	
	
	public var connectionSurface:FlxSprite;
	public var connections:Array<FlxSprite> = [];
	
	
	public var loadLoop:FlxAsyncLoop;
	
	
	public var starArray:Array<Star> = [];
	public var clusters:Array<Cluster> = [];
	
	public var drawingLine:Bool = false;
	public var connectionsUpdated:Bool = false;
	//public var justStartedDrawing:Bool = false;
	//public var drawTimer:Float = 0;
	public var drawingFrom:Star = null;
	public var highlighted:Star;
	
	public var timeStepCounter:Float = 0;
	public var stepNumber:Int = 0;
	
	private var ui:UI;
	
	public var money:Float;
	
	override public function create():Void
	{
		super.create();
		
		#if mobile
		FlxG.camera.zoom = 2;
		#end
		
		FlxG.worldBounds.set( 0, 0, 10000, 10000);
		FlxG.camera.setBounds( 0, 0, 10000, 10000);
		
		FlxG.camera.bgColor = FlxColor.BLACK;
		
		skySurface = new FlxSprite(0, 0);
		skySurface.makeGraphic(FlxG.width, FlxG.height, FlxColor.TRANSPARENT);
		
		lineSurface = new FlxSprite(0, 0);
		lineSurface.makeGraphic(FlxG.width, FlxG.height, FlxColor.TRANSPARENT);
		add(lineSurface);
		
		connectionSurface = new FlxSprite(0, 0);
		connectionSurface.makeGraphic(FlxG.width, FlxG.height, FlxColor.TRANSPARENT);
		//connectionSurface.makeGraphic(FlxG.width, FlxG.height, 0xDDDDDDDD);
		add(connectionSurface);
		
		var star = new FlxSprite(0, 0);
		star.makeGraphic(3, 3, FlxColor.TRANSPARENT);
		FlxSpriteUtil.drawCircle(star, -1, -1, -1, FlxColor.WHITE);
		
		connection.color = FlxColor.WHITE;
		connection.thickness = 2;
		
		add(skySurface);
		
		for (i in 0...50)
		{
			generateCluster();
		}
		
		for (i in 0...500)
		{
			var st = new Star(Std.random(Std.int(FlxG.worldBounds.width)), Std.random(Std.int(FlxG.worldBounds.height)), Std.random(4) + 3, 0, this); 
			starArray.push(st);
		}
		
		//add the ui last
		ui = new UI(this);

	}

	private function generateCluster()
	{
		var clusterTest = new Cluster(Std.random(Math.ceil(FlxG.worldBounds.width)) - 1000, Std.random(Math.ceil(FlxG.worldBounds.height)) - 1000, Std.random(1000) + 500, Std.random(1000) + 500, this, 6);
		add(clusterTest);
		clusters.push(clusterTest);
		//super.update();
	}
	
	override public function destroy():Void
	{
		super.destroy();
	}

	override public function update():Void
	{
		super.update();
		
		
		/*
		if (!doneLoading)
		{
			for (i in 0...clusters.length)
			{
				if (clusters[i].loadLoop.finished)
				
				
			}
		}
		*/
		
		timeStepCounter += FlxG.elapsed;
		if (timeStepCounter >= 1)
		{
			timeStepCounter = 0;
			++stepNumber;
		}
		
		FlxSpriteUtil.fill(lineSurface, FlxColor.TRANSPARENT);
		
		if (drawingLine)
		{
			//FlxSpriteUtil.drawLine(lineSurface, drawingFrom.x, drawingFrom.y, FlxG.mouse.x, FlxG.mouse.y, connection);
			FlxSpriteUtil.drawLine(ui.lineSurface, drawingFrom.x - ui.cfo.x +(FlxG.width / 2), drawingFrom.y - ui.cfo.y +(FlxG.height / 2), FlxG.mouse.x - ui.cfo.x +(FlxG.width / 2), FlxG.mouse.y - ui.cfo.y +(FlxG.height / 2), connection);
		}
		
		if (FlxG.keys.anyPressed(['R']))
		{
			FlxG.switchState(new PlayState());
		}
	}
}