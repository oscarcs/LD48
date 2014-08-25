package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.util.FlxColor;
import nxColor.CIELch;
import flixel.util.FlxSpriteUtil;
import flixel.util.FlxPoint;

class MenuState extends FlxState
{
	private var enterText:FlxText;
	private var regenText:FlxText;
	private var titleText:FlxText;
	private var oscarButton:FlxButton;
	private var lineTex:FlxSprite;
	private var lineArray:Array<FlxSprite> = [];
	private var ls:LineStyle = { };
	
	override public function create():Void
	{
		super.create();
		
		ls.thickness = 2;
		ls.color = FlxColor.WHITE;
		
		FlxG.camera.fade(FlxColor.BLACK, 2, true);
		
		for (i in 0...4)
		{
			var clusterColor = new CIELch(Std.random(30) + 60, Std.random(40) + 50, Std.random(361));
			
			lineTex = new FlxSprite(0, 0);
			lineTex.makeGraphic(FlxG.width, FlxG.height, FlxColor.TRANSPARENT);
			
			for (i in 0...30)
			{
				var s = new FlxSprite(Std.random(FlxG.width), Std.random(FlxG.height));
				var size = (Std.random(4) + 2);
				s.makeGraphic(size, size, Std.parseInt("0xFF" + clusterColor.toHex()));
				add(s);
				if (Math.random() > 0.9) lineArray.push(s);
			}
			var c = new FlxSprite(Std.random(FlxG.width) - 200, Std.random(FlxG.height)- 200);
			c.makeGraphic(400, 400, Std.parseInt("0x14" + clusterColor.toHex()));
			add(c);
			
			for (i in 0...Std.int((lineArray.length-1)/2))
			{
				drawBetween(lineArray[i*2], lineArray[i*2 + 1]);
			}
		}
		add(lineTex);
		
		enterText = new FlxText(0, 0, 0, "ENTER TO BEGIN", 32);
		enterText.color = FlxColor.WHITE;
		enterText.alignment = "center";
		enterText.font = "assets/data/dos437.ttf";
		enterText.setPosition((FlxG.width / 2) - (enterText.width / 2) + 32, (FlxG.height / 2) - (enterText.height / 2) + 80);
		//enterText.alignment =
		add(enterText);
		
		regenText = new FlxText(0, 0, 0, "R TO REGEN TITLESCREEN", 16);
		regenText.color = FlxColor.WHITE;
		regenText.alignment = "center";
		regenText.font = "assets/data/dos437.ttf";
		regenText.setPosition((FlxG.width / 2) - (regenText.width / 2) + 24, (FlxG.height / 2) - (regenText.height / 2) + 80 + 36);
		//enterText.alignment =
		add(regenText);
		
		titleText = new FlxText(0, 0, 0, "CONSTELLATION", 64, false);
		titleText.color = FlxColor.WHITE;
		titleText.alignment = "left";
		titleText.font = "assets/data/dos437.ttf";
		titleText.setPosition((FlxG.width / 2) - (titleText.width / 2) + 32, (FlxG.height / 2) - (titleText.height / 2) - 80);
		add(titleText);
		
		
		oscarButton = new FlxButton(FlxG.width - 100, FlxG.height - 75, "", goTo);
		oscarButton.loadGraphic("assets/images/twitter.png", true, 100, 50);
		add(oscarButton);
	}

	override public function destroy():Void
	{
		super.destroy();
	}

	override public function update():Void
	{
		super.update();
		
		if (FlxG.keys.anyJustPressed(["ENTER", "SPACE"]))
		{
			FlxG.camera.fade(FlxColor.BLACK, 2, false, startGame);
		}
		
		if (FlxG.keys.anyJustPressed(["R"]))
		{
			FlxG.switchState(new MenuState());
		}
	}
	
	private function startGame()
	{
		FlxG.switchState(new PlayState());
	}
	
	private function goTo()
	{
		FlxG.openURL("http://twitter.com/nxTOS");
	}
	
	private function drawBetween(star1:FlxSprite, star2:FlxSprite)
	{
		var length = Math.sqrt(Math.abs(Math.pow(Math.abs(star2.x - star1.x), 2) - Math.pow(Math.abs(star2.y - star1.y), 2)));
		length = Math.abs(length);
		
		if (length < 100)
		{
			var a, b;
			if (Math.min(star1.x, star2.x) == star1.x) 
			{
				a = star1.getMidpoint();
				b = star2.getMidpoint();
			}
			else
			{
				a = star2.getMidpoint();
				b = star1.getMidpoint();
			}
			
			//put a gap between star and line
			
			
			//calc angle
			var theta2 = Math.atan2(a.y - b.y, a.x - b.x);
			var theta1 = Math.atan2(b.y - a.y, b.x - a.x);
			//trace(theta1 + " t " + theta2);
			
			//correct theta
			if (theta1 < 0) theta1 += (Math.PI * 2);
			if (theta2 < 0) theta2 += (Math.PI * 2);
			
			var d1 = new FlxPoint(10 * Math.cos(theta1), 10 * Math.sin(theta1));
			var d2 = new FlxPoint(10 * Math.cos(theta2), 10 * Math.sin(theta2));
			
			FlxSpriteUtil.drawLine(lineTex, (b.x + d2.x), (b.y + d2.y), (a.x + d1.x),  (a.y + d1.y), ls);
		}
	}
}