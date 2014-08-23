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
import flixel.util.FlxColor;
import flixel.util.FlxPoint;

class PlayState extends FlxState
{
	
	//public var Reg.testmap:TiledLevel;
	
	//TODO Animate main character
	//TODO Fix roll animation handle
	//TODO Add sound
	//TODO Add music
	//TODO polish
	
	public var shrines:FlxGroup;
	public var shrubs:FlxGroup;
	public var pillars:FlxGroup;
	public var mounds:FlxGroup;
	
	public var arrows:FlxGroup;
	
	public var faithBar:FlxGroup;
	private var faithMeter:FlxSprite;
	public var overlay:UI;
	public var healthMeter:FlxSprite;
	public var scoreText:FlxText;
	
	//public var heartGroup:FlxGroup;
	
	public var player:Character;
	public var floor:FlxObject;
	public var exit:FlxSprite;	


	//private var lol:Weapon;
	private var world = new FlxRect(0, 0, 1600, 1600);
	//private var testSkelly:Skeleton;
	
	//private var bow:FlxWeapon;
	private var bow:FlxWeapon;
	private var bulletType:FlxBullet;
	
	override public function create():Void
	{
		super.create();
		//trace("creating");
		//Reg.player
		
		fadeIn();
		
		Reg.testmap = ne	w TiledLevel("assets/data/newlevel.tmx");
		add(Reg.testmap.backgroundTiles);
		add(Reg.testmap.foregroundTiles);
		
		shrines = new FlxGroup();
		add(shrines);
		
		shrubs = new FlxGroup();
		add(shrubs);
		
		pillars = new FlxGroup();
		add(pillars);
		
		mounds = new FlxGroup();
		add(mounds);
		
		Reg.testmap.loadObjects(this);

		//add(Reg.player);

		Reg.enemyGroup = new FlxGroup();
		
		FlxG.camera.zoom = Reg.zoomLevel;
		FlxG.camera.width = Std.int(FlxG.camera.width / Reg.zoomLevel);
		FlxG.camera.height = Std.int(FlxG.camera.height / Reg.zoomLevel);
		FlxG.camera.follow(Reg.player);
		
		//lol = new Weapon(player.x, player.x, player, 16);
		//add(lol);
		
		//add(arrows);
		
		Reg.player.controllable = true;
		
		
		
		//bow = new NewBow(this, player);
		//add(bow.testBow.group);
		
		//testBow = new FlxWeapon("bow", player);
		//testBow.makeImageBullet(50, "assets/images/bow.png", 0, 0, false, 4, 0, false);
		//testBow.setBulletDirection(
		
		bow = new FlxWeapon("lazer", Reg.player);
		//lazer.makePixelBullet(50, 5, 5);
		bow.makeImageBullet(500, "assets/images/newArrow.png", 0, 0, true, 360);
		bow.setBulletDirection(FlxWeapon.BULLET_UP, 200);
		bow.setBulletRandomFactor(10, 20);
		bow.setBulletSpeed(200);
		add(bow.group);
		bow.setBulletBounds(world);
		bow.setFireRate(10);
		
		//testSkelly = new Skeleton(Reg.player.x, Reg.player.y);
		Reg.enemyGroup.maxSize = 30;
		//Reg.enemyGroup.add(testSkelly);
		add(Reg.enemyGroup);
		
		overlay = new UI();
		overlay.add(overlay.CText);
		overlay.add(overlay.XText);
		overlay.add(overlay.ZText);
		//add(overlay);
		
		//adding some good ol' faith
		faithBar = new FlxGroup();
		
		var faithBG = new FlxSprite(70, 30);
		faithBG.scrollFactor.x = 0;
		faithBG.scrollFactor.y = 0;
		faithBG.loadGraphic("assets/images/faithbg.png", false);
		//var midBG:FlxPoint
		faithBar.add(faithBG);
		
		//trace(faithBG.x + faithBG.y);
		
		faithMeter = new FlxSprite(155, 30);
		faithMeter.scrollFactor.x = 0;
		faithMeter.scrollFactor.y = 0;
		faithMeter.makeGraphic(1, 10, FlxColor.WHITE);
		//faithMeter.origin.x = faithMeter.origin.y = 0;
		faithMeter.scale.x = 180;
		
		healthMeter = new FlxSprite(160, 40);
		healthMeter.scrollFactor.x = 0;
		healthMeter.scrollFactor.y = 0;
		healthMeter.makeGraphic(1, 10, FlxColor.RED);
		//faithMeter.origin.x = faithMeter.origin.y = 0;
		healthMeter.scale.x = 180;

		scoreText = new FlxText(130, 10, 50, Std.string(Reg.score), 16);
		scoreText.alignment = "center";
		scoreText.scrollFactor.x = 0;
		scoreText.scrollFactor.y = 0;
		
		faithBar.add(scoreText);
		faithBar.add(faithMeter);
		faithBar.add(healthMeter);
		add(faithBar);

		
		
		
		//THIS IS IMPORTANT
		//DON'T FORGET IT
		//OR YOU WILL DIE
		//A SLOW, PAINFUL, DEATH
		FlxG.worldBounds.set(0, 0, 1600, 1600);
		
	}

	override public function destroy():Void
	{
		super.destroy();
	}

	override public function update():Void
	{
		FlxG.timeScale = 1;
		if (Reg.player.faith > 0)
		{
			Reg.player.faith -= 0.02;
			Reg.player.health += 0.02 / 18;
		}

		scoreText.text = Std.string(Reg.score);
		
		Reg.hurtCounter += FlxG.elapsed;
		
		faithMeter.scale.x = Reg.player.faith;
		healthMeter.scale.x = Reg.player.health * 18;
		
		//testmap.collideWithLevel(Reg.player);
		//testmap.collideWithLevel(Reg.enemyGroup);
		
		collideStuff();
		
		//lazer.bulletsOverlap(shrines, destroyBullet())
		
		shrines.callAll("checkActivation", [Reg.player, this], true);
		pillars.callAll("checkActivation", [Reg.player, this], true);

		mounds.callAll("revealMound", [Reg.player, this], true);
		//FlxG.collide(player, shrines);
		
		if (FlxG.keys.anyJustReleased(["A"]))
		{
			trace(Reg.player.health);
		}
		
		if (FlxG.keys.anyPressed(["C"]) && Reg.player.faith > 1 )
		{
			//FlxG.timeScale = 0.3;
			//FlxG.camera.zoom = Reg.zoomLevel;
			Reg.player.faith -= 0.2;
			FlxG.sound.play("assets/sound/fire.wav", 0.2, false);
			
			switch(Reg.player.facing)
			{
				case FlxObject.LEFT:
					bow.fireFromAngle(180);
				
				case FlxObject.RIGHT:	
					bow.fireFromAngle(0);

				case FlxObject.UP:
					bow.fireFromAngle( -90);
					
				case FlxObject.DOWN:
					bow.fireFromAngle(90);
			}
			FlxG.camera.shake(0.005, 0.05);
		}
		//trace("gun: X: " + lol.x + " Y: " + lol.y);
		//trace("player: X: " + Reg.player.x + " Y: " + Reg.player.y);
		super.update();	
	}
	
	private function collideStuff()
	{
		FlxG.collide(Reg.enemyGroup, Reg.enemyGroup, FlxObject.separate);
		FlxG.overlap(Reg.enemyGroup, bow.group, collideBullet);
		FlxG.overlap(Reg.player, Reg.exit, fadeOut);
		if (Reg.hurtCounter > 0.75)
		{
			FlxG.collide(Reg.player, Reg.enemyGroup, hurtPlayer);
		}
		FlxG.collide(Reg.player, Reg.enemyGroup, FlxObject.separate);
		
		if (Reg.testmap.collidableTileLayers != null)
		{
			for (map in Reg.testmap.collidableTileLayers)
			{
				FlxG.overlap(map, Reg.player, FlxObject.separate);
				FlxG.overlap(map, Reg.enemyGroup, FlxObject.separate);
				FlxG.collide(map, bow.group, bulletWall);
			}
		}
	}	
	
	private function collideBullet(enemy:Skeleton, bullet:FlxBullet)
	{
		bullet.kill();
		enemy.health -= 1;
		if (enemy.health <= 0)
		{
			enemy.kill();
			Reg.score += 5;
		}
	}
	
	private function bulletWall(map:Dynamic, bullet:FlxBullet)
	{
		bullet.kill();
	}
	
	public function hurtPlayer(player:Character, enemy:Skeleton):Void
	{
		Reg.player.health -= 1;
		Reg.hurtCounter = 0;
		FlxG.sound.play("assets/sound/hurt.wav", 0.5, false);
		Reg.score -= 1;
	}
	
	private function fadeOut(p:Character, e:FlxSprite)
	{
		FlxG.camera.fade(FlxColor.BLACK, 3, false, goToMenu);
	}
	
	private function fadeIn()
	{
		FlxG.camera.fade(FlxColor.BLACK, 3, true);
	}
	
	private function goToMenu()
	{
		FlxG.switchState(new MenuState());
	}
	
}