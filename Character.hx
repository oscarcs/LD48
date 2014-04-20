package ;

import flixel.FlxSprite;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.util.FlxRect;
import haxe.io.Path;
import haxe.Json;
import openfl.Assets;
import flixel.addons.display.FlxExtendedSprite;

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
	
	public function new(X:Float, Y:Float, ?JsonPath:String, ?SimpleGraphic:Dynamic) 
	{
		super(x, y, SimpleGraphic);
		parseJson(JsonPath);
		trace("created character");
		this.facing = FlxObject.DOWN;
		
		this.maxVelocity.x = 20;
		this.maxVelocity.y = 20;
		
		this.drag.x = this.maxVelocity.x * 4;
		this.drag.y = this.maxVelocity.y * 4;
	}
	
	public override function update()
	{
		if (controllable)
		{
			this.acceleration.x = 0;
			this.acceleration.y = 0;
			
			if (FlxG.keys.anyPressed(["RIGHT"]))
			{
				this.acceleration.x = this.drag.x;
				this.facing = FlxObject.RIGHT;
				if (FlxG.keys.anyPressed(["X"]))
				{
					rolling = true;	
				}
			}
			else if (FlxG.keys.anyPressed(["LEFT"]))
			{
				this.acceleration.x = -this.drag.x;
				this.facing = FlxObject.LEFT;
				if (FlxG.keys.anyPressed(["X"]))
				{
					rolling = true;
				}
			}
			
			if (FlxG.keys.anyPressed(["UP"]))
			{
				this.acceleration.y = -this.drag.y;
				this.facing = FlxObject.UP;
			}
			else if (FlxG.keys.anyPressed(["DOWN"]))
			{
				this.acceleration.y = this.drag.y;
				this.facing = FlxObject.DOWN;
			}	
		}
		//TODO add checkBoundsMap function in
		//checkBoundsMap();
		doAnimation();
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

	//TODO rewrite doAnimation so it's agnostic for topdown, 2.5D, and side-scrolling
	private function doAnimation()
	{
		anim = "idle_";
		//trace("doing animation");
		//find the type of motion we're doing and add it to anim
		//TODO add the roll animation type
		
		if (velocity.y != 0 || velocity.x != 0)
		{
			//check if rolling
			if (rolling == true)
			{
				anim = "rolling_";
			}
			else
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
		trace("JSON parse OK!");
		
		//get and set the texture file
		var texture:String = filePath.dir + "/" + json.sprite.texture;
		var frameWidth:Int = json.sprite.framewidth;
		var frameHeight:Int = json.sprite.frameheight;
		this.loadGraphic(texture, true, false, frameWidth, frameHeight);
		trace("texture OK!");
		
		
		//get and set the character's velocities
		var xmax:Int = json.velocity.xmax;
		var ymax:Int = json.velocity.ymax;
		trace("velocity OK!");
		
		//get and set the character's collision mask
		var col_x:Int = json.collision.x;
		var col_y:Int = json.collision.y;
		var col_width:Int = json.collision.width;
		var col_height:Int = json.collision.height;
		collisionMap = new FlxRect(col_x, col_y, col_width, col_height);
		trace("collision OK!");
		
		//add animations
		var vel_default:Int = json.animation.framerate.def;
		var vel_idle:Int = json.animation.framerate.idle;
		var vel_walking:Int = json.animation.framerate.walking;
		var vel_rolling:Int = json.animation.framerate.rolling;
		trace("animation OK!");
		
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

					case "special":
						tmp = vel_rolling;

					default:
						tmp = vel_default;
				}
				animation.add(type + "_" + dir, t, tmp, true);
				trace(type + "_" + dir);
			}
		}
	}	
}