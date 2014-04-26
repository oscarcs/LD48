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
	
	public var shrines:FlxGroup;
	public var player:Character;
	public var floor:FlxObject;
	public var exit:FlxSprite;	
	private var lol:Shrine;
	
	override public function create():Void
	{
		super.create();
		trace("creating");
		//Reg.player
	
		testmap = new TiledLevel("assets/data/leveltest.tmx");
		add(testmap.backgroundTiles);
		add(testmap.foregroundTiles);
		testmap.loadObjects(this);
		
		shrines = new FlxGroup();
		add(shrines);

		//add(Reg.player);

		FlxG.camera.zoom = Reg.zoomLevel;
		FlxG.camera.width = Std.int(FlxG.camera.width / Reg.zoomLevel);
		FlxG.camera.height = Std.int(FlxG.camera.height / Reg.zoomLevel);
		FlxG.camera.follow(player);
			
		
		lol = new Shrine(player.x, player.y);
		add(lol);
		
		player.controllable = true;
		
	}

	override public function destroy():Void
	{
		super.destroy();
	}

	override public function update():Void
	{
		testmap.collideWithLevel(player);
		shrines.callAll("checkActivation", [player, this], true);	
		lol.checkActivation(player, this);
		super.update();	
	}
}