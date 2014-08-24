package ; 

import flixel.*;
import flixel.FlxSprite;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.util.*;

class UI extends FlxBasic
{
	private var arrows:FlxGroup;
	public var left:FlxSprite;
	public var right:FlxSprite;
	public var up:FlxSprite;
	public var down:FlxSprite;
	private var stepNumberText:FlxText;
	public var parent:PlayState;
	private var minimap:Minimap;
	public var cfo:CameraFollowObject;
	public var lineSurface:FlxSprite;
	
	public function new(parent:PlayState)
	{
		super();
		
		this.parent = parent;
		
		cfo = new CameraFollowObject(this);
		FlxG.camera.follow(cfo);
		
		arrows = new FlxGroup();
		
		up = new FlxSprite(0, 0, "assets/images/up.png");
		down = new FlxSprite(0, 0, "assets/images/down.png");
		left = new FlxSprite(0, 0, "assets/images/left.png");
		right = new FlxSprite(0, 0, "assets/images/right.png");
		
		arrows.add(up);
		arrows.add(down);
		arrows.add(left);
		arrows.add(right);
		
		var wd = FlxG.width * FlxG.camera.zoom;
		var ht = FlxG.height * FlxG.camera.zoom;
		
		up.setPosition(wd / 2 - 16, 5);
		down.setPosition(wd / 2 - 16, ht - 5 - 32);
		left.setPosition(5, ht / 2 - 16);
		right.setPosition(wd - 5 - 32, ht / 2);
		
		up.scrollFactor.set(0, 0);
		down.scrollFactor.set(0, 0);
		left.scrollFactor.set(0, 0);
		right.scrollFactor.set(0, 0);
		
		up.alpha = 0.2;
		down.alpha = 0.2;
		left.alpha = 0.2;
		right.alpha = 0.2;
		
		FlxG.state.add(arrows);
		
		stepNumberText = new FlxText(16, 16, 0, "ffsdsfdsfd", 16);
		stepNumberText.font = "assets/data/dos437.ttf";
		stepNumberText.color = FlxColor.WHITE;
		stepNumberText.scrollFactor.set(0, 0);
		parent.add(stepNumberText);
		
		minimap = new Minimap(this);
		minimap.scrollFactor.set(0, 0);
		minimap.current.scrollFactor.set(0, 0);
		minimap.circlebg.scrollFactor.set(0, 0);
		
		lineSurface = new FlxSprite(0, 0);
		lineSurface.makeGraphic(FlxG.width, FlxG.height, FlxColor.TRANSPARENT);
		lineSurface.scrollFactor.set(0, 0);
		
		parent.add(lineSurface);
		parent.add(this);
		parent.add(minimap);
		parent.add(minimap.current);
		parent.add(minimap.circlebg);
	}
	
	override public function update()
	{
		super.update();
		FlxSpriteUtil.fill(lineSurface, FlxColor.TRANSPARENT);
		stepNumberText.text = "step: " + parent.stepNumber + ", " + parent.starArray.length + " stars";
	}
	
}