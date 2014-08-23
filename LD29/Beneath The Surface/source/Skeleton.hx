package ;

import flixel.util.FlxVelocity;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.util.FlxPath;
import flixel.util.FlxPoint;

/**
 * ...
 * @author NxT
 */
class Skeleton extends Character
{
	private var path:FlxPath;
	private var doingPath:Bool = false;
	private var currentFollowPosition:FlxPoint;
	private var hurtCounter:Float = 0;
	
	public function new(x:Float, y:Float) 
	{
		super(x, y, "assets/data/skeleton.json");
		controllable = false;
		health = 15;
		currentFollowPosition = new FlxPoint(x, y);	
		
		//createPath();
		//followPath();
		//moveToPlayer();
	}
	
	override public function update()
	{
		FlxVelocity.moveTowardsObject(this, Reg.player, 60);	
		
		//moveToPlayer();
		//moveFollower();
		

		
		checkBoundsMap();
		doAnimation();
		
		if (health <= 0)
		{
			kill();
		}
		
		hurtCounter += FlxG.elapsed;
		
		super.update();
	}
	
	public function hurtPlayer():Void
	{
		if (Reg.hurtCounter > 0.75)
		{
			Reg.player.health -= 1;
			hurtCounter = 0;
			FlxG.sound.play("assets/sound/hurt.wav", 0.5, false);
			Reg.score -= 1;
		}
	}
	
	/*
	private function moveToPlayer()
	{
		path = new FlxPath();
		var pathPoints = new Array<FlxPoint>();
		pathPoints.splice(0, pathPoints.length);
		
		var newEnd:FlxPoint= new FlxPoint(Reg.player.x, Reg.player.y);
		
		var pathPoints:Array<FlxPoint> = Reg.testmap.enemyCollision.findPath(FlxPoint.get(this.x + this.width / 2, this.y + this.height / 2), FlxPoint.get(Reg.player.x + Reg.player.width / 2, Reg.player.y + Reg.player.height / 2));
		path.addPointAt(newEnd, pathPoints.length, tru);
		if (pathPoints != null)
		{
			path.start(this, pathPoints);
		}
	}
	*/
}