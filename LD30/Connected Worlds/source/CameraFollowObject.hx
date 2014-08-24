package ; 

import flixel.FlxObject;
import flixel.FlxG;
import flixel.util.FlxMath;

class CameraFollowObject extends FlxObject
{
	private var speed = 6;
	private var parent:UI;
	
	var upZone:FlxObject;
	var downZone:FlxObject;
	var leftZone:FlxObject;
	var rightZone:FlxObject;
	
	public function new(parent:UI)
	{
		super(FlxG.width / 2, FlxG.height / 2, 1, 1);
		FlxG.state.add(this);
		
		this.parent = parent;
		
		#if android
		upZone = new FlxObject(FlxG.width / 4, 0, FlxG.width - FlxG.width / 2, FlxG.height / 4);
		downZone = new FlxObject(FlxG.width * 0.25, FlxG.height * 0.75, FlxG.width - FlxG.width / 2, FlxG.height / 4);
		leftZone = new FlxObject(0, 0, FlxG.width / 4, FlxG.height);
		rightZone = new FlxObject(FlxG.width * 0.75, 0, FlxG.width / 4, FlxG.height);
		#end
	}
	
	override function update()
	{
		super.update();
		
		//trace(x + " " + y);
		
		/*
		if (x > FlxG.camera.bounds.x - FlxG.width / 2)
		{
			x = FlxG.camera.bounds.x - (FlxG.width / 2);
		}
		
		if (y > FlxG.camera.bounds.y - FlxG.height / 2)
		{
			y = FlxG.camera.bounds.y - (FlxG.height / 2);
		}
		*/
		
		parent.left.visible = false;
		parent.right.visible = false;
		parent.up.visible = false;
		parent.down.visible = false;
		
		
		#if !android
		if (FlxG.keys.anyPressed(["LEFT"]))
		{
			x -= speed;
			parent.left.visible = true;
			
		}
		
		if (FlxG.keys.anyPressed(["RIGHT"]))
		{
			x += speed;
			parent.right.visible = true;
		}
		
		if (FlxG.keys.anyPressed(["UP"]))
		{
			y -= speed;
			parent.up.visible = true;
		}
		
		if (FlxG.keys.anyPressed(["DOWN"]))
		{
			y += speed;
			parent.down.visible = true;
		}
		#end
		
		#if android
		var didLeft:Bool = false;
		var didRight:Bool = false;
		var didUp:Bool = false;
		var didDown:Bool = false;
		
		for (touch in FlxG.touches.list)
		{
			if (touch.overlaps(leftZone) && !didLeft)
			{
				didLeft = true;
				x -= speed;
			}
			else if (touch.overlaps(rightZone) && !didRight)
			{
				didRight = true;
				x += speed;
			}
			else if (touch.overlaps(upZone) && !didUp)
			{
				didUp = true;
				y -= speed;
			}
			else if (touch.overlaps(downZone) && !didDown)
			{
				didDown = true;
				y += speed;
			}	
		}
		#end
		
		//limit values
		x = FlxMath.bound(x, 0 + FlxG.width / 2, FlxG.worldBounds.width - FlxG.width / 2);
		y = FlxMath.bound(y, 0 + FlxG.height / 2, FlxG.worldBounds.height - FlxG.height / 2);
	}
}