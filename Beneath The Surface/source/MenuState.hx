package ;

import flixel.effects.particles.FlxEmitter;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import openfl.Assets;
import flixel.util.FlxColor;
	
class MenuState extends FlxState
{
	private var titleText:FlxText;
	private var parts:FlxEmitter;
	private var playButton:FlxButton;
	private var playText:FlxText;
	
	override public function create():Void
	{
		var alignX:Int = Std.int(FlxG.width / 2);
		
		trace("created");
		//TODO add opening sound
		
		//add the title
		titleText = new FlxText(alignX, 50, 0, "Beneath The Surface", 30);
		titleText.x = alignX - (titleText.width / 2);
		titleText.alignment = "center";
		titleText.color = 0x729954;
		add(titleText);
		
		//add some particles
		parts = new FlxEmitter(alignX, FlxG.height / 2 - 10);
		parts.x = alignX - (parts.width / 2);
		parts.setSize(100, 30);
		parts.setYSpeed( -200, -20);
		parts.setRotation( -720, 720);
		parts.gravity = 100;
		//parts.makeParticles(Reg.titleParts, 650, 32, true, 0);
		add(parts);
		
		//add the 'play'
		playText = new FlxText(1, titleText.x + 30, 0, "Play Game", 15);
		playText.x = alignX - (playText.width / 2);
		playText.color = FlxColor.WHITE;
		playText.alignment = "centre";
		add(playText);
		
		//add the button
		playButton = new FlxButton(1, titleText.x + 3, "Begin", onPlay);
		playButton.width = 100;
		playButton.height = 50;
		playButton.x = alignX - (playButton.width / 2);
		playButton.color = 0x729954;
		playButton.label.color = 0x009954;
		//playButton.visible = false;
		add(playButton);
		
		super.create();
	}

	override public function destroy():Void
	{
		super.destroy();
		parts = null;
		titleText = null;
		playButton = null;
		playText = null;
	}

	override public function update():Void
	{
		super.update();
		//parts.start(true, 5);
		//TODO Put in attract mode or something if I've got time
	}
	
	private function onPlay():Void
	{
		fadeOut();
		//play sounds
	}
	
	private function fadeOut():Void
	{
		FlxG.camera.fade(FlxColor.BLACK, 1, false);
		trace("fading out");
		FlxG.switchState(new PlayState());
		
	}
}