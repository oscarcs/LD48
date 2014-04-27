package shitey weapon stuff ;

import flixel.FlxSprite;
import flixel.FlxObject;
import flixel.FlxG;


/**
 * ...
 * @author NxT
 */
class Arrow extends FlxSprite
{
	
	public function new(x:Float, y:Float, initVelocity:Float, direction:Int) 
	{
		trace("arrow loaded");
		this.loadGraphic("assets/images/arrow.png", true, 16, 16);
		trace("adding animations");
		animation.add("left", [0], 0, true);
		animation.add("right", [1], 0, true);
		animation.add("up", [2], 0, true);
		animation.add("down", [3], 0, true);
		trace("animations arrow added");
		facing = direction;
		
		super(x, y);
		
		if ((facing == FlxObject.LEFT) || (facing == FlxObject.RIGHT))
		{
			trace("horizontal");
			this.velocity.x = initVelocity;
			this.velocity.y = Math.random()*2;
		}
		else
		{
			trace("vertical");
			this.velocity.y = initVelocity;
			this.velocity.x = Math.random()*2;
		}
		
	}
	
	public override function update()
	{
		super.update();
		trace(this.x + this.y);
		switch (facing)
		{
			case FlxObject.LEFT:
				this.animation.play("left");
			
			case FlxObject.RIGHT:
				this.animation.play("right");
				
			case FlxObject.UP:
				this.animation.play("up");
			
			case FlxObject.DOWN:
				this.animation.play("down");
		}
		
	}
	
	public override function destroy()
	{
		
		super.destroy();
	}	
}