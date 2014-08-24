package ;

import flixel.*;
import flixel.util.*;
import flixel.util.FlxSpriteUtil;
import flixel.FlxSprite;

class PlayState extends FlxState
{
	private var connection:LineStyle = { };
	
	private var skySurface:FlxSprite;
	public var lineSurface:FlxSprite;
	
	
	public var connectionSurface:FlxSprite;
	public var connections:Array<FlxSprite> = [];
	
	
	
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
		
		/*
		var x = 0;
		var y = 0;
		var lastx = 0;
		var lasty = 0;
		
		for (i in 0...60)
		{
			var r = Std.random(5) + 1;
			star.makeGraphic(r, r, FlxColor.TRANSPARENT);
			FlxSpriteUtil.drawCircle(star, -1, -1, -1, FlxColor.WHITE);
			
			
			x = Std.random(FlxG.width);
			y = Std.random(FlxG.height);
			
			//star.scale = Math.random();
			skySurface.stamp(star, x, y);
			if (Math.random() > 0.9) FlxSpriteUtil.drawLine(skySurface, x, y, lastx, lasty, connection);
			
			lastx = x;
			lasty = y;
		}
		
		*/
		
		add(skySurface);
		
		for (i in 0...60)
		{
			//var stTest:Star = new Star(Std.random(FlxG.width), Std.random(FlxG.height), Std.random(4) + 2, i, this);
			//FlxSpriteUtil.drawCircle(stTest, stTest.mid.x, stTest.mid.y, stTest.size, FlxColor.WHITE);
			//add(stTest);
			//starArray.push(stTest);
		}
		
		//var clusterTest = new Cluster(30, 30, 1000, 1000, this, 1);
		
		for (i in 0...30)
		{
			var clusterTest = new Cluster(Std.random(Math.ceil(FlxG.worldBounds.width)) - 500, Std.random(Math.ceil(FlxG.worldBounds.height)) - 500, Std.random(1000), Std.random(1000), this, i);
			clusters.push(clusterTest);
		}
		
		//var connTest = new Connection(starArray[20], starArray[22]);
		//add(connTest);
		
		//add the ui last
		ui = new UI(this);

	}

	override public function destroy():Void
	{
		super.destroy();
	}

	override public function update():Void
	{
		super.update();
		
		
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