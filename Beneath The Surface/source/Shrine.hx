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
class Shrine extends FlxExtendedSprite
{
	
	private var isActivated:Bool = false;
	

	public function new(x:Float, y:Float) 
	{
		super(x, y);
		
		this.loadGraphic("assets/images/shrine.png", true, 16, 32);
		this.animation.add("static", [0], 0, true);
		this.animation.add("activate", [0, 1, 2, 3, 4, 5, 6], 15, false);
		animation.play("static");
	}
	
	override public function update()
	{
		super.update();
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
				activate();
			}
			
		}
		
		
		
		
	}
	
	private function activate()
	{
		isActivated = true;
		animation.play("activate");
		
	}
}