package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.FlxObject;
import flixel.group.FlxGroup;
import flixel.util.FlxCollision;

class PlayState extends FlxState
{
	
	public var testmap:TiledLevel;
	
	//TODO get rid of this shite
	
	//TODO Add weapons
	//TODO Add enemies
	//TODO Expand overworld tileset
	//TODO Animate main character
	//TODO Fix roll animation handle
	//TODO Fix Titlescreen
	//TODO Add sound
	//TODO Add music
	
	public var shrines:FlxGroup;
	public var player:Character;
	public var floor:FlxObject;
	public var exit:FlxSprite;	
	private var lol:Weapon;
	
	override public function create():Void
	{
		super.create();
		trace("creating");
		//Reg.player
	
		testmap = new TiledLevel("assets/data/leveltest.tmx");
		add(testmap.backgroundTiles);
		add(testmap.foregroundTiles);
		shrines = new FlxGroup();
		add(shrines);
		testmap.loadObjects(this);

		//add(Reg.player);

		FlxG.camera.zoom = Reg.zoomLevel;
		FlxG.camera.width = Std.int(FlxG.camera.width / Reg.zoomLevel);
		FlxG.camera.height = Std.int(FlxG.camera.height / Reg.zoomLevel);
		FlxG.camera.follow(player);
		
		lol = new Weapon(player.x, player.x, player, 16);
		add(lol);
		
		player.controllable = true;
		
		
		//THIS IS IMPORTANT
		//FIX IT LATER
		//OR YOU WILL DIE
		//A SLOW, PAINFUL, DEATH
		FlxG.worldBounds.set(0, 0, 1000, 1000);
		
	}

	override public function destroy():Void
	{
		super.destroy();
	}

	override public function update():Void
	{
		testmap.collideWithLevel(player);
		shrines.callAll("checkActivation", [player, this], true);
		//FlxG.collide(player, shrines);
		
		if (FlxG.keys.anyPressed(["C"]))
		{
			lol.drawWeapon();
		}
		if (FlxG.keys.anyJustReleased(["C"]))
		{
			lol.fire();
		}
		
		lol.x = player.x;
		lol.y = player.y;
		//trace("gun: X: " + lol.x + " Y: " + lol.y);
		//trace("player: X: " + player.x + " Y: " + player.y);
		
		super.update();	
	}
}