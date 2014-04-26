package ;

import flixel.effects.particles.FlxEmitter;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
	
class PlayState extends FlxState
{
	private var titleText:FlxText;
	private var parts:FlxEmitter;
	private var playButton:FlxButton;
	
	
	override public function create():Void
	{
		titleText = new FlxText();
		titleText.alignment = "center";
		
		//TODO add opening sound
		
		//add some particles
		parts = new FlxEmitter(FlxG.width / 2 - 50, FlxG.height / 2 - 10);
		parts.setSize(100, 30);
		parts.setYSpeed( -200, -20);
		parts.setRotation( -720, 720);
		parts.gravity = 100;
		parts.makeParticles(Reg.titleParts, 650, 32, true, 0);
		add(parts);
		
		playButtion = new FlxButton(1,1, "Begin", onPlay);
		playButton.label.
		
		
		super.create();
	}

	override public function destroy():Void
	{
		super.destroy();
		parts = null;
		titleText = null;
		playButton = null;
	}

	override public function update():Void
	{
		super.update();
	}
	
	private function onPlay():Void
	{
		fadeOut();
		//play sounds
	}
	
	private function fadeOut():Void
	{
		FlxG.camera.fade(FlxColor.BLACK, 1, false);
		FlxG.switchState(new PlayState());
	}
}