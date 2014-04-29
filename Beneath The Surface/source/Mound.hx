package ;

import flixel.addons.display.FlxExtendedSprite;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.util.FlxPoint;
import flixel.util.FlxMath;

/**
 * ...
 * @author NxT
 */
class Mound extends FlxExtendedSprite
{

	private var moundType:Character;
	private var protoSkeleton:FlxSprite;
	private var isActivated:Bool = false;
	
	public function new(x:Float, y:Float) 
	{
		super(x, y);
		//trace("adding mound");
		this.loadGraphic("assets/images/mound.png", true, 16, 32);
		//trace("loaded graphic");
		this.animation.add("static", [0], 0, true);
		this.animation.add("reveal", [0, 1, 2, 3, 4], 10, false);
		this.animation.add("poststatic", [5], 0, true);
		animation.play("static");
	}
	
	public function revealMound(object:FlxObject, state:PlayState)
	{
		var p1:FlxPoint = new FlxPoint(this.x + (this.width / 2), this.y + (this.height / 2));
		var p2:FlxPoint = new FlxPoint(object.x + (object.width / 2), object.y + (object.height / 2));
			
		var distance = FlxMath.getDistance(p1, p2);
		if (distance < 100 && isActivated == false)
		{
			animation.play("reveal");
			isActivated = true;
		}
		if (this.animation.finished)
		{
			spawnMonster();
		}
	}
	
	public function spawnMonster()
	{
		//var spawn = new Skeleton(this.x, this.y);
		//Reg.enemyGroup.add(spawn);

			Reg.enemyGroup.recycle(Skeleton, [this.x, this.y]);
			//FlxG.camera.shake(0.005, 0.05);
			this.animation.play("poststatic");
	}
}