package ;

import flixel.FlxSprite;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.util.FlxRect;
import haxe.io.Path;
import haxe.Json;
import openfl.Assets;
import flixel.addons.display.FlxExtendedSprite;
import flixel.util.FlxPoint;

/**
 * ...
 * @author NxT
 */

class Character extends FlxExtendedSprite
{

	private var direction:Int;
	
	//public vars
	public var collisionMap:FlxRect;
	public var maxBounds:FlxRect;
	public var controllable:Bool = false;
	public var anim:String;
	public var rolling:Bool = false;
	public var rollTimer:Float = 0;
	public var faith:Float = 0;
	
	public var pastPlayerPosition:FlxPoint;
	public var currentPlayerPosition:FlxPoint;
	
	//public var message:Message;
	
	public function new(X:Float, Y:Float, ?JsonPath:String, ?SimpleGraphic:Dynamic) 
	{
		super(x, y, SimpleGraphic);
		parseJson(JsonPath);
		//trace("created character");
		
		facing = FlxObject.DOWN;
		health = 10;
		x = X;
		y = Y;
		solid = true;
		drag.x = this.maxVelocity.x * 18;
		drag.y = this.maxVelocity.y * 18;
		pastPlayerPosition = new FlxPoint(0, 0);
		currentPlayerPosition = new FlxPoint(0, 0);
	}
	
	public override function update()
	{
		if (rollTimer > 2.5)
		{
			rolling = false;
			rollTimer = 0;
		}
		
		if (rolling == true)
		{
			//trace("rolling. RollTimer: " + rollTimer);
			rollTimer += FlxG.elapsed;
		}
		
		if (controllable)
		{
			this.acceleration.x = 0;
			this.acceleration.y = 0;
			
			pastPlayerPosition.x = currentPlayerPosition.x;
			pastPlayerPosition.y = pastPlayerPosition.y;
			
			
			if (FlxG.keys.anyPressed(["RIGHT"]))
			{
				this.acceleration.x = this.drag.x;
				this.facing = FlxObject.RIGHT;
				if (FlxG.keys.anyPressed(["X"]) && rolling == false)
				{
					rolling = true;	
				}
			}
			else if (FlxG.keys.anyPressed(["LEFT"]))
			{
				this.acceleration.x = -this.drag.x;
				this.facing = FlxObject.LEFT;
				//trace("left");
				if (FlxG.keys.anyPressed(["X"]) && rolling == false)
				{
					rolling = true;
				}
			}
			
			if (FlxG.keys.anyPressed(["UP"]))
			{
				this.acceleration.y = -this.drag.y;
				this.facing = FlxObject.UP;
				if (FlxG.keys.anyPressed(["X"]) && rolling == false)
				{
					rolling = true;
				}
			}
			else if (FlxG.keys.anyPressed(["DOWN"]))
			{
				this.acceleration.y = this.drag.y;
				this.facing = FlxObject.DOWN;
				if (FlxG.keys.anyPressed(["X"]) && rolling == false)
				{
					rolling = true;
				}
			}
			
			currentPlayerPosition.x = this.x;
			currentPlayerPosition.y = this.y;
			
		}
		checkBoundsMap();
		doAnimation();
		
		if (this.health <= 0)
		{
			FlxG.switchState(new PlayState());
		}
		
		super.update();
	}
	
	public function setBoundsMap(boundsMap:FlxRect) 
	{
		this.maxBounds = boundsMap;
	}

	private function checkBoundsMap():Void
	{
		if (maxBounds == null) {
			return;
		}

		if (x + collisionMap.x < maxBounds.x)
		{
			x = maxBounds.x - collisionMap.x;
			acceleration.x = 0;
		}
		else if ((x + collisionMap.x + collisionMap.width) > (maxBounds.x + maxBounds.width))
		{
			x = (maxBounds.x + maxBounds.width) - collisionMap.width - collisionMap.x;
			acceleration.x = 0;
		}

		if (y + collisionMap.y < maxBounds.y)
		{
			y = maxBounds.y - collisionMap.y;
			acceleration.y = 0;
		}
		else if ((y + collisionMap.y + collisionMap.height) > (maxBounds.y + maxBounds.height))
		{
			y = (maxBounds.y + maxBounds.height) - collisionMap.height - collisionMap.y;
			acceleration.y = 0;
		}
	}

	
	private function doAnimation()
	{
		//TODO add images for the roll		
		anim = "idle_";
		//find the type of motion we're doing and add it to anim
		if (velocity.y != 0 || velocity.x != 0)
		{
			//check if rolling
			if (rolling == true)
			{
				anim = "rolling_";
			}
			{
				anim = "walking_";
			}
			//check the facing
			if (velocity.y > 0)
			{
				facing = FlxObject.DOWN;
			}
			else if (velocity.y < 0)
			{
				facing = FlxObject.UP;
			}
			
			if (velocity.x > 0)
			{
				facing = FlxObject.RIGHT;
			}
			else if (velocity.x > 0)
			{
				facing = FlxObject.LEFT;
			}
		}	
		switch(facing)
		{
			case FlxObject.UP:
				anim += "up";
				
			case FlxObject.DOWN:
				anim += "down";
				
			case FlxObject.RIGHT:
				anim += "right";
			
			case FlxObject.LEFT:
				anim += "left";
				
			default:
				anim += "right";
		}
		
		if (animation.name != anim)
		{
			animation.play(anim);
		}
	}
	
	
	private function parseJson(file:String)
	{
		
		//Based on the HaxeFlixel FlipRotationAnimationTiles example ...
		//.. with more swag
		//Fuck yo code conventions
		
		var filePath:Path = new Path(file);
		var fileString:String = Assets.getText(file);
		if (fileString == null)
		{
			throw 'JSON definition file {$file} not found';
		}

		
		var json = haxe.Json.parse(fileString);
		//trace("JSON parse OK!");
		
		//get and set the texture file
		var texture:String = filePath.dir + "/" + json.sprite.texture;
		var frameWidth:Int = json.sprite.framewidth;
		var frameHeight:Int = json.sprite.frameheight;
		//this.loadGraphic(texture, true, false, frameWidth, frameHeight);
		this.loadGraphic(texture, true, frameWidth, frameHeight);
		//trace("texture OK!");
		
		//get and set the character's velocities
		var xmax:Int = json.velocity.xmax;
		var ymax:Int = json.velocity.ymax;
		this.maxVelocity.x = xmax;
		this.maxVelocity.y = ymax;
		//trace("velocity OK!");
		
		//get and set the character's collision mask
		var col_x:Int = json.collision.x;
		var col_y:Int = json.collision.y;
		var col_width:Int = json.collision.width;
		var col_height:Int = json.collision.height;
		collisionMap = new FlxRect(col_x, col_y, col_width, col_height);
		//trace("collision OK!");

		//add dialog text
		/*
		message = new Message([]);
		var ctr:Int = 0;
		for (dialog in Reflect.fields(json.dialog))
		{
			message.pages[ctr] = new Page(dialog);
			trace(message.pages[ctr].text);
			ctr++;
		}
		*/
		
		
		//add animations
		var vel_default:Int = json.animation.framerate.def;
		var vel_idle:Int = json.animation.framerate.idle;
		var vel_walking:Int = json.animation.framerate.walking;
		var vel_rolling:Int = json.animation.framerate.rolling;
		//trace("animation OK!");
		
		//go through and add all the animations
		//form is type_direction
		
		var tmp:Int;
		for (dir in Reflect.fields(json.animation.frames)) 
		{
			var d = Reflect.field(json.animation.frames, dir);
			for (type in Reflect.fields(d))
			{
				var t = Reflect.field(d, type);
				switch(type)
				{
					case "def":
						tmp = vel_default;

					case "idle":
						tmp = vel_idle;

					case "walking":
						tmp = vel_walking;

					case "rolling":
						tmp = vel_rolling;

					default:
						tmp = vel_default;
				}
				animation.add(type + "_" + dir, t, tmp, true);
				//trace(type + "_" + dir);
			}
		}
	}	
	
	public function getMessage()
	{
		//return message;
	}
	
	
}