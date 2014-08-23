package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/data/charactertest.json", "assets/data/charactertest.json");
			type.set ("assets/data/charactertest.json", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/leveltest.tmx", "assets/data/leveltest.tmx");
			type.set ("assets/data/leveltest.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/mainplayer.png", "assets/data/mainplayer.png");
			type.set ("assets/data/mainplayer.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/newlevel.tmx", "assets/data/newlevel.tmx");
			type.set ("assets/data/newlevel.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/skeleton.json", "assets/data/skeleton.json");
			type.set ("assets/data/skeleton.json", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/testplayer.json", "assets/data/testplayer.json");
			type.set ("assets/data/testplayer.json", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/testplayer.png", "assets/data/testplayer.png");
			type.set ("assets/data/testplayer.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/data/tileset.png", "assets/data/tileset.png");
			type.set ("assets/data/tileset.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/arrow.png", "assets/images/arrow.png");
			type.set ("assets/images/arrow.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/arrowDown.png", "assets/images/arrowDown.png");
			type.set ("assets/images/arrowDown.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/arrowLeft.png", "assets/images/arrowLeft.png");
			type.set ("assets/images/arrowLeft.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/arrowRight.png", "assets/images/arrowRight.png");
			type.set ("assets/images/arrowRight.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/arrowUp.png", "assets/images/arrowUp.png");
			type.set ("assets/images/arrowUp.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/bow.png", "assets/images/bow.png");
			type.set ("assets/images/bow.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/exit.png", "assets/images/exit.png");
			type.set ("assets/images/exit.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/faithbg.png", "assets/images/faithbg.png");
			type.set ("assets/images/faithbg.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/heart.png", "assets/images/heart.png");
			type.set ("assets/images/heart.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/main.json", "assets/images/main.json");
			type.set ("assets/images/main.json", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/mound.png", "assets/images/mound.png");
			type.set ("assets/images/mound.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/newArrow.png", "assets/images/newArrow.png");
			type.set ("assets/images/newArrow.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/pillar.png", "assets/images/pillar.png");
			type.set ("assets/images/pillar.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/play.png", "assets/images/play.png");
			type.set ("assets/images/play.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/shrine.png", "assets/images/shrine.png");
			type.set ("assets/images/shrine.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/shrub.png", "assets/images/shrub.png");
			type.set ("assets/images/shrub.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/splash.png", "assets/images/splash.png");
			type.set ("assets/images/splash.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/sprPlayer.png", "assets/images/sprPlayer.png");
			type.set ("assets/images/sprPlayer.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/tileset.pdn", "assets/images/tileset.pdn");
			type.set ("assets/images/tileset.pdn", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/tileset.png", "assets/images/tileset.png");
			type.set ("assets/images/tileset.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/titleParts.png", "assets/images/titleParts.png");
			type.set ("assets/images/titleParts.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/twitter.png", "assets/images/twitter.png");
			type.set ("assets/images/twitter.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/weapon.png", "assets/images/weapon.png");
			type.set ("assets/images/weapon.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/sound/fire.wav", "assets/sound/fire.wav");
			type.set ("assets/sound/fire.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sound/hurt.wav", "assets/sound/hurt.wav");
			type.set ("assets/sound/hurt.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/beep.ogg", "assets/sounds/beep.ogg");
			type.set ("assets/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/flixel.ogg", "assets/sounds/flixel.ogg");
			type.set ("assets/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
