package shitey weapon stuff ;

import flixel.addons.weapon.FlxWeapon;
import flixel.addons.weapon.FlxBullet;
import flixel.FlxBasic;
import flixel.FlxObject;
import flixel.FlxSprite;


/**
 * ...
 * @author NxT
 */
class NewBow extends FlxBasic
{
	
	public var testBow:FlxWeapon;
	private var facing:Int;

	public function new(state:PlayState, parent:FlxSprite) 
	{
		testBow = new FlxWeapon("bow", parent);
		testBow.makeImageBullet(50, "assets/images/bow.png", 0, 0, false, 4, 0, false);
		super();
	}
	
	override public function update()
	{
		super.update();
	}
	
	public function fire(direction:Int)
	{
		switch (facing)
		{
			case FlxObject.RIGHT:
				testBow.setBulletDirection(FlxWeapon.BULLET_RIGHT, 50);
				
			case FlxObject.LEFT:
				testBow.setBulletDirection(FlxWeapon.BULLET_LEFT, 50);
				
			case FlxObject.UP:
				testBow.setBulletDirection(FlxWeapon.BULLET_UP, 50);
				
			case FlxObject.DOWN:
				testBow.setBulletDirection(FlxWeapon.BULLET_DOWN, 50);
		}
		
		testBow.fire();
	}
	
}