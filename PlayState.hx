package ;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.util.FlxPoint;
import Dialog;
import Reg;

class PlayState extends FlxState
{
	public var testmap:TiledLevel;
	public var coins:FlxGroup;
	public var player:Character;
	public var floor:FlxObject;
	public var exit:FlxSprite;	
	private var message:Message;
	
	override public function create():Void
	{
		super.create();
		bgColor = 0xffaaaaaa;
		
		//load the level.
		//TODO make Level it's own class
		testmap = new TiledLevel("assets/data/testlevel.tmx");
		add(testmap.backgroundTiles);
		add(testmap.foregroundTiles);
		coins = new FlxGroup();
		add(coins);
		testmap.loadObjects(this);
		
		FlxG.camera.zoom = Reg.zoomLevel;
		player.controllable = true;
		FlxG.camera.follow(player);
		
		//assign and add the dialog object.
		Reg.dialog = new Dialog();
		add(Reg.dialog);
		
		message = new Message([ new Page("This is page 1 of the test message"),
								new Page("This is page 2 of the test message")]);
		
		
	}

	override public function destroy():Void
	{
		super.destroy();
	}

	override public function update():Void
	{
		testmap.collideWithLevel(player);
		super.update();
			
		FlxG.camera.zoom = Reg.zoomLevel;
		
		if (FlxG.keys.anyJustPressed(["X"])) 
		{
			if (Reg.inDialog == false) 
			{
				Reg.dialog.showDialog(getMessage());
				trace("not in dialog, starting");
			}
			else 
			{
				trace("in dialog, advancing");
				Reg.dialog.advanceMessage();
			}
		}
		
		if (FlxG.keys.anyJustReleased(["Z"]))
		{
			if (Reg.zoomLevel == 3)
			{
				Reg.zoomLevel = 2;
			}
			else if (Reg.zoomLevel == 2)
			{
				Reg.zoomLevel = 1;
			}
			else if (Reg.zoomLevel == 1)
			{
				Reg.zoomLevel = 3;
			}
		}
		
	}
	
	private function getMessage()
	{
		return message;
	}
	
	
}