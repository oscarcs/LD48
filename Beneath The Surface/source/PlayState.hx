package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.FlxObject;
import flixel.group.FlxGroup;

class PlayState extends FlxState
{
	
	public var testmap:TiledLevel;
	
	//TODO get rid of this shite
	
	public var coins:FlxGroup;
	public var player:Character;
	public var floor:FlxObject;
	public var exit:FlxSprite;	
	
	override public function create():Void
	{
		super.create();
		trace("creating");
		Reg.player = new Character(0, 0, "/images/main.json");
		Reg.player = player;
	
		testmap = new TiledLevel("assets/data/leveltest.tmx");
		add(testmap.backgroundTiles);
		add(testmap.foregroundTiles);
		
		coins = new FlxGroup();
		add(coins);
		
		FlxG.camera.zoom = Reg.zoomLevel;
		
		testmap.loadObjects(this);
		
		
	}

	override public function destroy():Void
	{
		super.destroy();
	}

	override public function update():Void
	{
		super.update();	
	}
}