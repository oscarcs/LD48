package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;

class Rotational extends FlxSprite
{
	public var focus:FlxPoint;
	public var radius:Float;
	public var theta:Float = 0;
	public var rotateSprite:Bool = true;
	public var deltaRadius:Float = 0;
	public var deltaTheta:Float = 0;
	
	override public function new(Radius:Float, Focus:FlxPoint, ?SimpleGraphic:Dynamic)
	{
		radius = Radius;
		focus = Focus;
		super(0, 0, SimpleGraphic);
	}
	
	override public function update():Void
	{
		super.update();
		//theta = Math.atan2(FlxG.mouse.y - focus.y, FlxG.mouse.x - focus.x);
		this.x = focus.x + (radius * Math.cos(theta));
		this.y = focus.y + (radius * Math.sin(theta));
		if (rotateSprite) angle = (theta * 180) / Math.PI;
		theta += deltaTheta * FlxG.timeScale;
		radius += deltaRadius * FlxG.timeScale;
		
		if (theta > (2 * Math.PI)) theta = 0; 
		if (radius >= 300 && deltaRadius > 0) deltaRadius *= -1;
		if (radius <= 40 && deltaRadius < 0) deltaRadius *= -1;
	}
	
}