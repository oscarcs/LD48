package;


import flash.display.Bitmap;
import flash.display.BitmapData;
import flash.display.MovieClip;
import flash.text.Font;
import flash.media.Sound;
import flash.net.URLRequest;
import flash.utils.ByteArray;
import haxe.Unserializer;
import openfl.Assets;

#if (flash || js)
import flash.display.Loader;
import flash.events.Event;
import flash.net.URLLoader;
#end

#if ios
import openfl.utils.SystemPath;
#end


@:access(flash.media.Sound)
class DefaultAssetLibrary extends AssetLibrary {
	
	
	public static var className (default, null) = new Map <String, Dynamic> ();
	public static var path (default, null) = new Map <String, String> ();
	public static var type (default, null) = new Map <String, AssetType> ();
	
	public function new () {
		
		super ();
		
		#if flash
		
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
		
		
		#elseif html5
		
		
		
		#else
		
		#if (windows || mac || linux)
		
		var loadManifest = false;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		loadManifest = true;
		
		
		#else
		
		var loadManifest = true;
		
		#end
		
		if (loadManifest) {
			try {
				
				#if blackberry
				var bytes = ByteArray.readFile ("app/native/manifest");
				#elseif tizen
				var bytes = ByteArray.readFile ("../res/manifest");
				#elseif emscripten
				var bytes = ByteArray.readFile ("assets/manifest");
				#else
				var bytes = ByteArray.readFile ("manifest");
				#end
				
				if (bytes != null) {
					
					bytes.position = 0;
					
					if (bytes.length > 0) {
						
						var data = bytes.readUTFBytes (bytes.length);
						
						if (data != null && data.length > 0) {
							
							var manifest:Array<AssetData> = Unserializer.run (data);
							
							for (asset in manifest) {
								
								if (!className.exists(asset.id)) {
									
									path.set (asset.id, asset.path);
									type.set (asset.id, asset.type);
									
								}
							}
						
						}
					
					}
				
				} else {
				
					trace ("Warning: Could not load asset manifest");
				
				}
			
			} catch (e:Dynamic) {
			
				trace ("Warning: Could not load asset manifest");
			
			}
		
		}
		
		#end
		
	}
	
	
	#if html5
	private function addEmbed(id:String, kind:String, value:Dynamic):Void {
		className.set(id, value);
		type.set(id, Reflect.field(AssetType, kind.toUpperCase()));
	}
	
	
	private function addExternal(id:String, kind:String, value:String):Void {
		path.set(id, value);
		type.set(id, Reflect.field(AssetType, kind.toUpperCase()));
	}
	#end
	
	
	public override function exists (id:String, type:AssetType):Bool {
		
		var assetType = DefaultAssetLibrary.type.get (id);
		
		#if pixi
		
		if (assetType == IMAGE) {
			
			return true;
			
		} else {
			
			return false;
			
		}
		
		#end
		
		if (assetType != null) {
			
			if (assetType == type || ((type == SOUND || type == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if ((assetType == BINARY || assetType == TEXT) && type == BINARY) {
				
				return true;
				
			} else if (path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (type == BINARY || type == null) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getBitmapData (id:String):BitmapData {
		
		#if pixi
		
		return BitmapData.fromImage (path.get (id));
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), BitmapData);
		
		#elseif openfl_html5
		
		return BitmapData.fromImage (ApplicationMain.images.get (path.get (id)));
		
		#elseif js
		
		return cast (ApplicationMain.loaders.get (path.get (id)).contentLoaderInfo.content, Bitmap).bitmapData;
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), BitmapData);
		else return BitmapData.load (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if pixi
		
		return null;
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);
		
		#elseif openfl_html5
		
		return null;
		
		#elseif js
		
		var bytes:ByteArray = null;
		var data = ApplicationMain.urlLoaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}

		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if pixi
		
		return null;
		
		#elseif (flash || js)
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists(id)) {
			var fontClass = className.get(id);
			Font.registerFont(fontClass);
			return cast (Type.createInstance (fontClass, []), Font);
		} else return new Font (path.get (id));
		
		#end
		
	}
	
	
	public override function getMusic (id:String):Sound {
		
		#if pixi
		
		return null;
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		var sound = new Sound ();
		sound.__buffer = true;
		sound.load (new URLRequest (path.get (id)));
		return sound; 
		
		#elseif js
		
		return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}
	
	
	public override function getPath (id:String):String {
		
		#if ios
		
		return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		#else
		
		return path.get (id);
		
		#end
		
	}
	
	
	public override function getSound (id:String):Sound {
		
		#if pixi
		
		return null;
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif js
		
		return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		else return new Sound (new URLRequest (path.get (id)), null, type.get (id) == MUSIC);
		
		#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if js
		
		var bytes:ByteArray = null;
		var data = ApplicationMain.urlLoaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:AssetType):Bool {
		
		#if flash
		
		if (type != AssetType.MUSIC && type != AssetType.SOUND) {
			
			return className.exists (id);
			
		}
		
		#end
		
		return true;
		
	}
	
	
	public override function loadBitmapData (id:String, handler:BitmapData -> Void):Void {
		
		#if pixi
		
		handler (getBitmapData (id));
		
		#elseif (flash || js)
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBitmapData (id));
			
		}
		
		#else
		
		handler (getBitmapData (id));
		
		#end
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		#if pixi
		
		handler (getBytes (id));
		
		#elseif (flash || js)
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				handler (bytes);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBytes (id));
			
		}
		
		#else
		
		handler (getBytes (id));
		
		#end
		
	}
	
	
	public override function loadFont (id:String, handler:Font -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getFont (id));
			
		//}
		
		#else
		
		handler (getFont (id));
		
		#end
		
	}
	
	
	public override function loadMusic (id:String, handler:Sound -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getMusic (id));
			
		//}
		
		#else
		
		handler (getMusic (id));
		
		#end
		
	}
	
	
	public override function loadSound (id:String, handler:Sound -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getSound (id));
			
		//}
		
		#else
		
		handler (getSound (id));
		
		#end
		
	}
	
	
	public override function loadText (id:String, handler:String -> Void):Void {
		
		#if js
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (event.currentTarget.data);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getText (id));
			
		}
		
		#else
		
		var callback = function (bytes:ByteArray):Void {
			
			if (bytes == null) {
				
				handler (null);
				
			} else {
				
				handler (bytes.readUTFBytes (bytes.length));
				
			}
			
		}
		
		loadBytes (id, callback);
		
		#end
		
	}
	
	
}


#if pixi
#elseif flash






































#elseif html5






































#elseif (windows || mac || linux)




#end
