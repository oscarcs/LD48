package ;

import flixel.FlxSprite;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.util.FlxRect;
import haxe.io.Path;
import haxe.Json;
import openfl.Assets;

/**
 * ...
 * @author NxT
 */

class Character extends FlxSprite
{

	private var direction:Int;
	
	//public vars
	public var collisionMap:FlxRect;
	public var maxBounds:FlxRect;
	public var controllable:Bool = false;
	public var anim:String;
	
	public function new(X:Float, Y:Float, SimpleGraphic:Dynamic, JsonPath:String) 
	{
		super(x, y, SimpleGraphic);
		parseJson(JsonPath);
		this.facing = FlxObject.LEFT;
		
		this.loadGraphic(graphic, true, false, width, height);
		
		//add the dank animation
		//TODO add this into JSON form
		/*
		this.animation.add("standingRight", [1], 15, false);
		this.animation.add("standingLeft", [5], 15, false);
		this.animation.add("right", [0, 1, 2, 3], 15, true);
		this.animation.add("left", [4, 5, 6, 7], 15, true);
		this.animation.add("jumpLeft", [10, 11], 10, false);
		this.animation.add("jumpRight", [8, 9], 10, false);
		this.animation.add("fallLeft", [11], 10, false);
		this.animation.add("fallRight", [9], 10, false);
		this.animation.add("rollRight", [12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23], 20, false);
		this.animation.add("rollLeft", [35, 34, 33, 32, 31, 30, 29, 28, 27, 26, 25, 24], 20, false);
		
		*/
		this.animation.play("rollRight");
	}
	
	public override function update();
	{
		/*
		if (this.direction == 1 && this.isTouching(FlxObject.FLOOR) && this.isBusy == false)
		{
			this.animation.play("standingLeft");
		}
		
		if (this.direction == 0 && this.isTouching(FlxObject.FLOOR) && this.isBusy == false)
		{
			this.animation.play("standingRight");
		}
		
		//set acceleration to zero
		this.acceleration.x = 0;

		if (FlxG.keys.anyPressed(["LEFT", "A"]))
        {
            this.acceleration.x = -this.maxVelocity.x * 4;
			this.direction = 1;
			
			
			if (this.isTouching(FlxObject.FLOOR) && this.isBusy == false )
			{
				this.animation.play("left");
			}
			
        }
        if (FlxG.keys.anyPressed(["RIGHT", "D"]))
        {
			this.direction = 0;
			
			if (this.isTouching(FlxObject.FLOOR) && this.isBusy == false )
			{
				this.animation.play("right");	
			}
			
			this.acceleration.x = this.maxVelocity.x * 4;
			
			
		}
		
		if (FlxG.keys.anyPressed(["Z"]) && this.isBusy == false)
		{
			this.isBusy = true;
			if (this.direction == 0)
			{
				//this.velocity.x += this.maxVelocity.x * 10;
				//this code will do a 'flash', could be useful
				
				this.velocity.x += 10;
				this.animation.play("rollRight");
			}
			
			if (this.direction == 1)
			{
				//this.velocity.x += -this.maxVelocity.x * 10;
				
				this.velocity.x -= 10;
				this.animation.play("rollLeft");
			}
		}
		
		if (this.animation.finished == true)
		{
			this.isBusy = false;
		}
		
        if (FlxG.keys.anyPressed(["X"]) && this.isTouching(FlxObject.FLOOR))
        {
            this.velocity.y = -this.maxVelocity.y / 2.5;
			justJumped = true;
			jumpPlayed = false;
			
			if (this.direction == 0)
			{
				this.animation.play("jumpRight");
			}
			
			if (this.direction == 1)
			{
				this.animation.play("jumpLeft");
			}
        }

	
		if (!this.isTouching(FlxObject.FLOOR) && this.direction == 0 && this.isBusy == false)
		{
			this.animation.play("fallRight");
		}
		
		if (!this.isTouching(FlxObject.FLOOR) && this.direction == 1 && this.isBusy == false)
		{
			this.animation.play("fallLeft");
		}
		
		*/
		
		if (controllable)
		{
			this.acceleration.
		}
		
		
		super.update();
	}
	
	//TODO rewrite doAnimation so it's agnostic for topdown, 2.5D, and side-scrolling
	private function doAnimation()
	{
		anim = "idle_";
		
		//find the type of motion we're doing and add it to anim
		//TODO add the roll animation type
		if (velocity.y != 0 || velocity.y != 0)
		{
			anim = "walking_";
			
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
			throw 'JSON definition file not found';
		}
		
		var json = Json.parse(fileString);
		
		//get and set the texture file
		var texture:String = filePath.dir + "/" + json.sprite.texture;
		var frameWidth:Int = json.sprite.framewidth;
		var frameHeight:Int = json.sprite.frameheight;
		
		//get and set the character's velocities
		var xmax:Int = json.velocity.xmax;
		var ymax:Int = json.velocity.ymax;
		
		//get and set the character's collision mask
		var col_x:Int = json.collision.x;
		var col_y:Int = json.collision.y;
		var col_width:Int = json.collision.width;
		var col_height:Int = json.collision.height;
		collisions = FlxRect.get(col_x, col_y, col_width, col_height);
		
		//add animations
		var vel_default:Int = json.animation.framerate.def;
		var vel_idle:Int = json.animation.framerate.idle;
		var vel_walking:Int = json.animation.framerate.walking;
		var vel_special:Int = json.animation.framerate.special;
		
		//go through and add all the animations
		//form is type_direction
		
		var tmp:Int;
		for (dir in Reflect.fields(json.animations.frames)) 
		{
			var d = Reflect.field(json.animations.frames, dir);
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
						tmp = vel_special;

					default:
						tmp = v_def;
				}
				animation.add(type + "_" + dir, t, tmp, true);
			}
		
		}
	
	
	
	
}