package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/data/dos437.ttf", "assets/data/dos437.ttf");
			type.set ("assets/data/dos437.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/data/perfect_dos_vga_437/dos437.txt", "assets/data/perfect_dos_vga_437/dos437.txt");
			type.set ("assets/data/perfect_dos_vga_437/dos437.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/perfect_dos_vga_437/Perfect DOS VGA 437.ttf", "assets/data/perfect_dos_vga_437/Perfect DOS VGA 437.ttf");
			type.set ("assets/data/perfect_dos_vga_437/Perfect DOS VGA 437.ttf", Reflect.field (AssetType, "font".toUpperCase ()));
			path.set ("assets/data/perfect_dos_vga_437.zip", "assets/data/perfect_dos_vga_437.zip");
			type.set ("assets/data/perfect_dos_vga_437.zip", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/data/prefixes.txt", "assets/data/prefixes.txt");
			type.set ("assets/data/prefixes.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/stars.txt", "assets/data/stars.txt");
			type.set ("assets/data/stars.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/data/suffixes.txt", "assets/data/suffixes.txt");
			type.set ("assets/data/suffixes.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/images/arrows.png", "assets/images/arrows.png");
			type.set ("assets/images/arrows.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/down.png", "assets/images/down.png");
			type.set ("assets/images/down.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/left.png", "assets/images/left.png");
			type.set ("assets/images/left.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/right.png", "assets/images/right.png");
			type.set ("assets/images/right.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/up.png", "assets/images/up.png");
			type.set ("assets/images/up.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/sounds/beep.ogg", "assets/sounds/beep.ogg");
			type.set ("assets/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/flixel.ogg", "assets/sounds/flixel.ogg");
			type.set ("assets/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
