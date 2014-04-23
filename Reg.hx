package ;

import flixel.util.FlxSave;

class Reg
{
	
	//set what type of game this is. Currently useless.
	//TODO make this do something
	static public var gameStyle:String;
	
	static public var zoomLevel:Int = 2;
	
	//set the dialog stuff
	static public var dialog:Dialog;
	static public var inDialog:Bool = false;

	//level array
	static public var levels:Array<Dynamic> = [];

	//current level
	static public var level:Int = 0;

	//score array
	static public var scores:Array<Dynamic> = [];

	//current score
	static public var score:Int = 0;

	//save array
	static public var saves:Array<FlxSave> = [];
}