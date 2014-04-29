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
	
	public function new(x:Float, y:Float) 
	{
		super(x, y, "assets/data/skeleton.json");
		this.controllable = false;
		this.health = 15;
		currentFollowPosition = new FlxPoint(x, y);	
		
		createPath();
		//followPath();
	}
	
	override public function update()
	{
		//FlxVelocity.moveTowardsObject(this, Reg.player, 60);
		
		//moveToPlayer();
		moveFollower();
		
		if (FlxG.collide(this, Reg.player))
		{
			FlxObject.separate(this, Reg.player);
			hurtPlayer();
		}
		
		
		checkBoundsMap();
		doAnimation();
		
		if (this.health <= 0)
		{
			this.kill();
		}
		
		super.update();
	}
	
	public function hurtPlayer():Void
	{
		Reg.player.health -= 1;
	}
	
	private function moveToPlayer()
	{
		path = new FlxPath();
		
		var pathPoints:Array<FlxPoint> = Reg.testmap.enemyCollision.findPath(FlxPoint.get(this.x + this.width / 2, this.y + this.height / 2), FlxPoint.get(Reg.player.x + Reg.player.width / 2, Reg.player.y + Reg.player.height / 2));
		if (pathPoints != null)
		{
			path.start(this, pathPoints);
		}
	}
	
	private function createPath():Void
	{
		path = new FlxPath();
		
		for (i in 1...25) 
		{
	      path.add(Reg.player.x + this.width / 2, (Reg.player.y + this.height / 2) / i);
		}
		
		path.nodes.reverse();
		
		//this.x = Reg.player.x;
		//this.y = Reg.player.y;
	}

	
	private function addPlayerCoordinates() 
	{
		if (path != null) 
		{
			currentFollowPosition.x = (Reg.player.currentPlayerPosition.x + Reg.player.width / 2) ;
			currentFollowPosition.y = (Reg.player.currentPlayerPosition.y + Reg.player.height / 2);
								
			if (path.nodes.length > 0) 
			{	
				if (currentFollowPosition.x != path.nodes[ path.nodes.length - 1].x || currentFollowPosition.y != path.nodes[path.nodes.length - 1].y) 
				{
					path.add(currentFollowPosition.x, currentFollowPosition.y);
				}
			}
			else 
			{
				path.add(currentFollowPosition.x, currentFollowPosition.y);	
			}
		}
	}

	private function moveFollower()
	{
		if (path != null)
		{
			if (this.velocity.y != 0) 
			{
				if (!doingPath) 
				{
					doingPath = true;
				}
			}
			else 
			{
				if (doingPath) 
				{
					doingPath = false;
				}
			}
	
				if (!doingPath) {	//If I am not following a path  
				if (this.velocity.x > 0 || this.velocity.y > 0 || this.velocity.x < 0 || this.velocity.y < 0) 
				{ 
					// If I am still moving...
					this.velocity.x = 0;	// stop moving x
					this.velocity.y = 0;	// stop moving y
					//path.nodes.splice(0); 	// Clean all previous nodes
					path.nodes.splice(0, path.nodes.length);
							
					// Snap followers position to same as the player
					this.x = Reg.player.x;
					this.y = Reg.player.y;
				}
			}
	
				if (Reg.player.currentPlayerPosition.x != Reg.player.pastPlayerPosition.x || Reg.player.currentPlayerPosition.y != Reg.player.pastPlayerPosition.y)
				{ // If hero is moving...
					if (!doingPath) 
					{	// ... and the follower is not following any path
						if (path != null) 
						{  // ... is there a path to follow?
							if (path.nodes.length > 0) 
							{ // ... how many nodes till follower hits destination point?
								path.start(this,path.nodes,120); //... then go on and follow your path
						}
					}
				}
			}
		}
	}
}