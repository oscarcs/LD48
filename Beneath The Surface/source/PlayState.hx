package ;

import flixel.addons.weapon.FlxBullet;
import flixel.addons.weapon.FlxWeapon;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.FlxObject;
import flixel.group.FlxGroup;
import flixel.util.FlxCollision;
import flixel.util.FlxRect;

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
	public var arrows:FlxGroup;
	public var player:Character;
	public var floor:FlxObject;
	public var exit:FlxSprite;	
	//private var lol:Weapon;
	private var world = new FlxRect(0, 0, 1600, 1600);
	
	private var bow:FlxWeapon;
	private var lazer:FlxWeapon;
	private var bulletType:FlxBullet;
	
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
		
		//lol = new Weapon(player.x, player.x, player, 16);
		//add(lol);
		
		//add(arrows);
		
		player.controllable = true;
		
		
		
		//bow = new NewBow(this, player);
		//add(bow.testBow.group);
		
		//testBow = new FlxWeapon("bow", player);
		//testBow.makeImageBullet(50, "assets/images/bow.png", 0, 0, false, 4, 0, false);
		//testBow.setBulletDirection(
		
		//TODO Rename the weapon
		lazer= new FlxWeapon("lazer", player);
		//lazer.makePixelBullet(50, 5, 5);
		lazer.makeImageBullet(500, "assets/images/newArrow.png", 0, 0, true, 360);
		lazer.setBulletDirection(FlxWeapon.BULLET_UP, 200);
		lazer.setBulletRandomFactor(10, 20);
		lazer.setBulletSpeed(200);
		add(lazer.group);
		lazer.setBulletBounds(world);
		lazer.setFireRate(10);
		
		
		
		
		
		
		//THIS IS IMPORTANT
		//FIX IT LATER
		//OR YOU WILL DIE
		//A SLOW, PAINFUL, DEATH
		FlxG.worldBounds.set(0,0,1600,1600);
		
	}

	override public function destroy():Void
	{
		super.destroy();
	}

	override public function update():Void
	{
		testmap.collideWithLevel(player);
		//lazer.bulletsOverlap(shrines, destroyBullet())
		shrines.callAll("checkActivation", [player, this], true);
		//FlxG.collide(player, shrines);
		
		//if (FlxG.keys.anyPressed(["C"]))
		//{
		//	lol.drawWeapon();
		//}
		if (FlxG.keys.anyPressed(["C"]))
		{
			
			switch(player.facing)
			{
				case FlxObject.LEFT:
					lazer.fireFromAngle(180);
					//lazer.setBulletDirection(FlxWeapon.BULLET_LEFT, 400);

				
				case FlxObject.RIGHT:	
					lazer.fireFromAngle(0);
					//lazer.setBulletDirection(FlxWeapon.BULLET_RIGHT, 400);

					
				case FlxObject.UP:
					lazer.fireFromAngle( -90);
					//lazer.setBulletDirection(FlxWeapon.BULLET_UP, 400);
					
				case FlxObject.DOWN:
					lazer.fireFromAngle(90);
					//lazer.setBulletDirection(FlxWeapon.BULLET_DOWN, 400);
			}
			
			
			//lazer.fireFromParentAngle();
			trace("firing");
		}
		
		//lol.x = player.x;
		//lol.y = player.y;
		//trace("gun: X: " + lol.x + " Y: " + lol.y);
		//trace("player: X: " + player.x + " Y: " + player.y);
		
		super.update();	
	}
}