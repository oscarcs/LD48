package ;

import flixel.addons.display.FlxExtendedSprite;
import flixel.FlxObject;
import flixel.util.FlxMath;
import flixel.util.FlxPoint;
import flixel.FlxG;

/**
 * ...
 * @author NxT
 */
class Pillar extends FlxExtendedSprite
{

	private var isActivated:Bool = false;
	private var deactivateCounter:Float = 0;
	
	public function new(x:Float, y:Float) 
	{
		super(x, y);
		
		this.loadGraphic("assets/images/pillar.png", true, 16, 48);
		this.animation.add("static", [0], 0, true);
		this.animation.add("activate", [0, 1, 2, 3, 4, 5, 6], 15, false);
		this.animation.add("deactivate", [6, 5, 4, 3, 2, 1, 0], 15, false);
		animation.play("static");
	}
	
	override public function update()
	{
		super.update();
		
		if (isActivated == true)
		{
			deactivateCounter += FlxG.elapsed;
		}
		if (deactivateCounter > 10)
		{
			deactivate();
		}
	}
	
	
	public function checkActivation(object:FlxObject, state:PlayState)
	{
		if (FlxG.keys.anyPressed(["Z"]))
		{
			var p1:FlxPoint = new FlxPoint(this.x + (this.width / 2), this.y + (this.height / 2));
			var p2:FlxPoint = new FlxPoint(object.x + (object.width / 2), object.y + (object.height / 2));
			
			var distance = FlxMath.getDistance(p1, p2);
			if (distance < 50 && isActivated == false)
			{
				Reg.player.faith += 15;
				activate();
			}
		}

	}
	
	private function activate()
	{
		isActivated = true;
		animation.play("activate");
		
	}
	
	private function deactivate()
	{
		isActivated = false;
		animation.play("deactivate");
		deactivateCounter = 0;
	}
	
	
	
}