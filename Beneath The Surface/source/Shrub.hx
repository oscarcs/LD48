package ;
import flixel.addons.display.FlxExtendedSprite;

/**
 * ...
 * @author NxT
 */
class Shrub extends FlxExtendedSprite
{

	public function new(x:Float, y:Float) 
	{
		super(x, y);
		this.loadGraphic("assets/images/shrub.png", true, 16, 16);
		animation.add("wave", [0, 1, 2], 1, true);
		animation.play("wave",false,Std.random(3));
	}
	
	override public function update()
	{
		super.update();
	}
	
}