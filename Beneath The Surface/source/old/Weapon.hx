package shitey weapon stuff ;

import flixel.FlxSprite;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.util.FlxPoint;

/**
 * ...
 * @author NxT
 */
class Weapon extends FlxSprite
{

	private var cooldownTimer:Float = 0;
	private var chargeTimer:Float = 0;	
	private var anim:String;
	private var offsetDistance:Float;
	private var isFiring:Bool = false;
	private var isDrawing:Bool = false;
	private var chargeAmount:Float;
	private var parent:FlxObject;
	
	public function new(x:Float, y:Float, followObject:Character, ?offsetDistance:Float) 
	{
		super(x, y);
		trace("creating bow");
		parent = followObject;
		
		//add them like this because I'm lazy
		this.loadGraphic("assets/images/bow.png", true, 16, 16);
		
		//right
		this.animation.add("static_right", [0], 0, true);
		this.animation.add("firing_right", [5,6,7,8,9], 15, false);
		this.animation.add("draw_right", [1,2,3,4], 5, false);
		
		//left
		this.animation.add("static_left", [10], 0, true);
		this.animation.add("firing_left", [15,16,17,18], 15, false);
		this.animation.add("draw_left", [11,12,13,14], 5, false);
		
		//up
		this.animation.add("static_up", [0], 0, true);
		this.animation.add("firing_up", [0], 15, false);
		this.animation.add("draw_up", [0], 5, false);
		
		//down
		this.animation.add("static_down", [0], 0, true);
		this.animation.add("firing_down", [0], 15, false);
		this.animation.add("draw_down", [0], 5, false);
		
		trace("animations added");
	}
	
	override public function update()
	{
		super.update();
	
		cooldownTimer += FlxG.elapsed;
		
		if (isDrawing == true)
		{
			chargeTimer += FlxG.elapsed;
			//trace(chargeTimer);
		}
		
		chargeAmount = chargeTimer * 10;
		
		if (cooldownTimer < 0.5)
		{
			isFiring = false;
		}
		//doAnimation();
		//followParent(parent);
		
	}
	
	public function fire(state:PlayState)
	{
		if (cooldownTimer > 0.6 && isFiring == false && isDrawing == true)
		{
			var arrow = new Arrow(this.x, this.y, chargeAmount, facing);
			trace("arrow created");
			state.arrows.add(arrow);
			cooldownTimer = 0;
			chargeTimer = 0;
			isDrawing = false;
			isFiring = true;
			trace(chargeAmount);
			trace("firing mah lazer");
		}
	}
	
	public function drawWeapon()
	{
		if (cooldownTimer > 0.5 && isFiring == false)
		{
			isDrawing = true;
		}
	}
	
	private function doAnimation(parent)
	{
		if (isFiring == true)
		{
			anim += "firing_";
		}
		else if (isDrawing == true)
		{
			anim += "draw_";
		}
		else
		{
			anim += "static_";
		}
		
		//check facing direction
		
		if (parent.facing == FlxObject.DOWN)
		{
			facing = FlxObject.DOWN;
		}
		else if (parent.facing == FlxObject.UP)
		{
			facing = FlxObject.UP;
		}
			
		if (parent.facing == FlxObject.RIGHT)
		{
			facing = FlxObject.RIGHT;
		}
		else if (parent.facing == FlxObject.LEFT)
		{
			facing = FlxObject.LEFT;
		}
		
		
		switch(facing)
		{
			case FlxObject.UP:
				anim += "up";
				
			case FlxObject.DOWN:
				anim += "down";
				
			case FlxObject.RIGHT:
				anim += "right";
			
			case FlxObject.LEFT:
				anim += "left";
				
			default:
				anim += "right";
		}
		
		
		if (animation.name != anim)
		{
			animation.play(anim);
		}
	}
	/*
	private function followParent(parent:FlxObject)
	{
		var pMid = parent.getMidpoint();
		var cMid = this.getMidpoint();
		
		switch(facing)
		{
			case FlxObject.UP:
				cMid.y += offsetDistance;
				
			case FlxObject.DOWN:
				cMid.y -= offsetDistance;
				
			case FlxObject.RIGHT:
				cMid.x += offsetDistance;
			
			case FlxObject.LEFT:
				cMid.x -= offsetDistance;
				
			default:
				cMid.x += 0;
		}
		
		this.x = cMid.x;
		this.y = cMid.y;
		
		trace("following");
		
	}
	
	*/
	
	
}