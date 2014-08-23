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
			path.set ("assets/images/images-go-here.txt", "assets/images/images-go-here.txt");
			type.set ("assets/images/images-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/sounds-go-here.txt", "assets/sounds/sounds-go-here.txt");
			type.set ("assets/sounds/sounds-go-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/beep.ogg", "assets/sounds/beep.ogg");
			type.set ("assets/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/flixel.ogg", "assets/sounds/flixel.ogg");
			type.set ("assets/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
