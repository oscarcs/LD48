package ;

import flixel.util.FlxSave;

//We're using a Singleton class, because we're shitty programmers

class Reg
{

	public static inline var titleParts:String = "assets/images/titleParts.png";
	
	
	
	public static var levels:Array<Dynamic> = [];
	public static var level:Int = 0;
	public static var scores:Array<Dynamic> = [];
	public static var score:Int = 0;
	public static var saves:Array<FlxSave> = [];
}