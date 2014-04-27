package ;

import flixel.util.FlxVelocity;
import flixel.FlxG;

/**
 * ...
 * @author NxT
 */
class Skeleton extends Character
{

	public function new(x:Float, y:Float) 
	{
		super(x, y, "assets/data/skeleton.json");
		this.controllable = false;
		this.health = 15;
	}
	
	override public function update()
	{
		FlxVelocity.moveTowardsObject(this, Reg.player, 60);
		
		FlxG.collide(this, Reg.player);
		
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
	
}