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
		
		className.set ("assets/data/charactertest.json", __ASSET__assets_data_charactertest_json);
		type.set ("assets/data/charactertest.json", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/data/leveltest.tmx", __ASSET__assets_data_leveltest_tmx);
		type.set ("assets/data/leveltest.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/data/mainplayer.png", __ASSET__assets_data_mainplayer_png);
		type.set ("assets/data/mainplayer.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/data/newlevel.tmx", __ASSET__assets_data_newlevel_tmx);
		type.set ("assets/data/newlevel.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/data/skeleton.json", __ASSET__assets_data_skeleton_json);
		type.set ("assets/data/skeleton.json", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/data/testplayer.json", __ASSET__assets_data_testplayer_json);
		type.set ("assets/data/testplayer.json", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/data/testplayer.png", __ASSET__assets_data_testplayer_png);
		type.set ("assets/data/testplayer.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/data/tileset.png", __ASSET__assets_data_tileset_png);
		type.set ("assets/data/tileset.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/images/arrow.png", __ASSET__assets_images_arrow_png);
		type.set ("assets/images/arrow.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/images/arrowDown.png", __ASSET__assets_images_arrowdown_png);
		type.set ("assets/images/arrowDown.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/images/arrowLeft.png", __ASSET__assets_images_arrowleft_png);
		type.set ("assets/images/arrowLeft.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/images/arrowRight.png", __ASSET__assets_images_arrowright_png);
		type.set ("assets/images/arrowRight.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/images/arrowUp.png", __ASSET__assets_images_arrowup_png);
		type.set ("assets/images/arrowUp.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/images/bow.png", __ASSET__assets_images_bow_png);
		type.set ("assets/images/bow.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/images/exit.png", __ASSET__assets_images_exit_png);
		type.set ("assets/images/exit.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/images/faithbg.png", __ASSET__assets_images_faithbg_png);
		type.set ("assets/images/faithbg.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/images/heart.png", __ASSET__assets_images_heart_png);
		type.set ("assets/images/heart.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/images/main.json", __ASSET__assets_images_main_json);
		type.set ("assets/images/main.json", Reflect.field (AssetType, "text".toUpperCase ()));
		className.set ("assets/images/mound.png", __ASSET__assets_images_mound_png);
		type.set ("assets/images/mound.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/images/newArrow.png", __ASSET__assets_images_newarrow_png);
		type.set ("assets/images/newArrow.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/images/pillar.png", __ASSET__assets_images_pillar_png);
		type.set ("assets/images/pillar.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/images/play.png", __ASSET__assets_images_play_png);
		type.set ("assets/images/play.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/images/shrine.png", __ASSET__assets_images_shrine_png);
		type.set ("assets/images/shrine.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/images/shrub.png", __ASSET__assets_images_shrub_png);
		type.set ("assets/images/shrub.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/images/splash.png", __ASSET__assets_images_splash_png);
		type.set ("assets/images/splash.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/images/sprPlayer.png", __ASSET__assets_images_sprplayer_png);
		type.set ("assets/images/sprPlayer.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/images/tileset.pdn", __ASSET__assets_images_tileset_pdn);
		type.set ("assets/images/tileset.pdn", Reflect.field (AssetType, "binary".toUpperCase ()));
		className.set ("assets/images/tileset.png", __ASSET__assets_images_tileset_png);
		type.set ("assets/images/tileset.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/images/titleParts.png", __ASSET__assets_images_titleparts_png);
		type.set ("assets/images/titleParts.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/images/twitter.png", __ASSET__assets_images_twitter_png);
		type.set ("assets/images/twitter.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/images/weapon.png", __ASSET__assets_images_weapon_png);
		type.set ("assets/images/weapon.png", Reflect.field (AssetType, "image".toUpperCase ()));
		className.set ("assets/sound/fire.wav", __ASSET__assets_sound_fire_wav);
		type.set ("assets/sound/fire.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sound/hurt.wav", __ASSET__assets_sound_hurt_wav);
		type.set ("assets/sound/hurt.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
		className.set ("assets/sounds/beep.mp3", __ASSET__assets_sounds_beep_mp3);
		type.set ("assets/sounds/beep.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
		className.set ("assets/sounds/flixel.mp3", __ASSET__assets_sounds_flixel_mp3);
		type.set ("assets/sounds/flixel.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
		
		
		#elseif html5
		
		addExternal("assets/data/charactertest.json", "text", "assets/data/charactertest.json");
		addExternal("assets/data/leveltest.tmx", "text", "assets/data/leveltest.tmx");
		addExternal("assets/data/mainplayer.png", "image", "assets/data/mainplayer.png");
		addExternal("assets/data/newlevel.tmx", "text", "assets/data/newlevel.tmx");
		addExternal("assets/data/skeleton.json", "text", "assets/data/skeleton.json");
		addExternal("assets/data/testplayer.json", "text", "assets/data/testplayer.json");
		addExternal("assets/data/testplayer.png", "image", "assets/data/testplayer.png");
		addExternal("assets/data/tileset.png", "image", "assets/data/tileset.png");
		addExternal("assets/images/arrow.png", "image", "assets/images/arrow.png");
		addExternal("assets/images/arrowDown.png", "image", "assets/images/arrowDown.png");
		addExternal("assets/images/arrowLeft.png", "image", "assets/images/arrowLeft.png");
		addExternal("assets/images/arrowRight.png", "image", "assets/images/arrowRight.png");
		addExternal("assets/images/arrowUp.png", "image", "assets/images/arrowUp.png");
		addExternal("assets/images/bow.png", "image", "assets/images/bow.png");
		addExternal("assets/images/exit.png", "image", "assets/images/exit.png");
		addExternal("assets/images/faithbg.png", "image", "assets/images/faithbg.png");
		addExternal("assets/images/heart.png", "image", "assets/images/heart.png");
		addExternal("assets/images/main.json", "text", "assets/images/main.json");
		addExternal("assets/images/mound.png", "image", "assets/images/mound.png");
		addExternal("assets/images/newArrow.png", "image", "assets/images/newArrow.png");
		addExternal("assets/images/pillar.png", "image", "assets/images/pillar.png");
		addExternal("assets/images/play.png", "image", "assets/images/play.png");
		addExternal("assets/images/shrine.png", "image", "assets/images/shrine.png");
		addExternal("assets/images/shrub.png", "image", "assets/images/shrub.png");
		addExternal("assets/images/splash.png", "image", "assets/images/splash.png");
		addExternal("assets/images/sprPlayer.png", "image", "assets/images/sprPlayer.png");
		addExternal("assets/images/tileset.pdn", "binary", "assets/images/tileset.pdn");
		addExternal("assets/images/tileset.png", "image", "assets/images/tileset.png");
		addExternal("assets/images/titleParts.png", "image", "assets/images/titleParts.png");
		addExternal("assets/images/twitter.png", "image", "assets/images/twitter.png");
		addExternal("assets/images/weapon.png", "image", "assets/images/weapon.png");
		addExternal("assets/sound/fire.wav", "sound", "assets/sound/fire.wav");
		addExternal("assets/sound/hurt.wav", "sound", "assets/sound/hurt.wav");
		addExternal("assets/sounds/beep.mp3", "music", "assets/sounds/beep.mp3");
		addExternal("assets/sounds/flixel.mp3", "music", "assets/sounds/flixel.mp3");
		
		
		#else
		
		#if (windows || mac || linux)
		
		var loadManifest = false;
		
		className.set ("assets/data/charactertest.json", __ASSET__assets_data_charactertest_json);
		type.set ("assets/data/charactertest.json", Reflect.field (AssetType, "text".toUpperCase ()));
		
		className.set ("assets/data/leveltest.tmx", __ASSET__assets_data_leveltest_tmx);
		type.set ("assets/data/leveltest.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		
		className.set ("assets/data/mainplayer.png", __ASSET__assets_data_mainplayer_png);
		type.set ("assets/data/mainplayer.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/data/newlevel.tmx", __ASSET__assets_data_newlevel_tmx);
		type.set ("assets/data/newlevel.tmx", Reflect.field (AssetType, "text".toUpperCase ()));
		
		className.set ("assets/data/skeleton.json", __ASSET__assets_data_skeleton_json);
		type.set ("assets/data/skeleton.json", Reflect.field (AssetType, "text".toUpperCase ()));
		
		className.set ("assets/data/testplayer.json", __ASSET__assets_data_testplayer_json);
		type.set ("assets/data/testplayer.json", Reflect.field (AssetType, "text".toUpperCase ()));
		
		className.set ("assets/data/testplayer.png", __ASSET__assets_data_testplayer_png);
		type.set ("assets/data/testplayer.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/data/tileset.png", __ASSET__assets_data_tileset_png);
		type.set ("assets/data/tileset.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/images/arrow.png", __ASSET__assets_images_arrow_png);
		type.set ("assets/images/arrow.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/images/arrowDown.png", __ASSET__assets_images_arrowdown_png);
		type.set ("assets/images/arrowDown.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/images/arrowLeft.png", __ASSET__assets_images_arrowleft_png);
		type.set ("assets/images/arrowLeft.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/images/arrowRight.png", __ASSET__assets_images_arrowright_png);
		type.set ("assets/images/arrowRight.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/images/arrowUp.png", __ASSET__assets_images_arrowup_png);
		type.set ("assets/images/arrowUp.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/images/bow.png", __ASSET__assets_images_bow_png);
		type.set ("assets/images/bow.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/images/exit.png", __ASSET__assets_images_exit_png);
		type.set ("assets/images/exit.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/images/faithbg.png", __ASSET__assets_images_faithbg_png);
		type.set ("assets/images/faithbg.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/images/heart.png", __ASSET__assets_images_heart_png);
		type.set ("assets/images/heart.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/images/main.json", __ASSET__assets_images_main_json);
		type.set ("assets/images/main.json", Reflect.field (AssetType, "text".toUpperCase ()));
		
		className.set ("assets/images/mound.png", __ASSET__assets_images_mound_png);
		type.set ("assets/images/mound.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/images/newArrow.png", __ASSET__assets_images_newarrow_png);
		type.set ("assets/images/newArrow.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/images/pillar.png", __ASSET__assets_images_pillar_png);
		type.set ("assets/images/pillar.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/images/play.png", __ASSET__assets_images_play_png);
		type.set ("assets/images/play.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/images/shrine.png", __ASSET__assets_images_shrine_png);
		type.set ("assets/images/shrine.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/images/shrub.png", __ASSET__assets_images_shrub_png);
		type.set ("assets/images/shrub.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/images/splash.png", __ASSET__assets_images_splash_png);
		type.set ("assets/images/splash.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/images/sprPlayer.png", __ASSET__assets_images_sprplayer_png);
		type.set ("assets/images/sprPlayer.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/images/tileset.pdn", __ASSET__assets_images_tileset_pdn);
		type.set ("assets/images/tileset.pdn", Reflect.field (AssetType, "binary".toUpperCase ()));
		
		className.set ("assets/images/tileset.png", __ASSET__assets_images_tileset_png);
		type.set ("assets/images/tileset.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/images/titleParts.png", __ASSET__assets_images_titleparts_png);
		type.set ("assets/images/titleParts.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/images/twitter.png", __ASSET__assets_images_twitter_png);
		type.set ("assets/images/twitter.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/images/weapon.png", __ASSET__assets_images_weapon_png);
		type.set ("assets/images/weapon.png", Reflect.field (AssetType, "image".toUpperCase ()));
		
		className.set ("assets/sound/fire.wav", __ASSET__assets_sound_fire_wav);
		type.set ("assets/sound/fire.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
		
		className.set ("assets/sound/hurt.wav", __ASSET__assets_sound_hurt_wav);
		type.set ("assets/sound/hurt.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
		
		className.set ("assets/sounds/beep.mp3", __ASSET__assets_sounds_beep_mp3);
		type.set ("assets/sounds/beep.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
		
		className.set ("assets/sounds/flixel.mp3", __ASSET__assets_sounds_flixel_mp3);
		type.set ("assets/sounds/flixel.mp3", Reflect.field (AssetType, "music".toUpperCase ()));
		
		
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

@:keep class __ASSET__assets_data_charactertest_json extends flash.utils.ByteArray { }
@:keep class __ASSET__assets_data_leveltest_tmx extends flash.utils.ByteArray { }
@:keep class __ASSET__assets_data_mainplayer_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_data_newlevel_tmx extends flash.utils.ByteArray { }
@:keep class __ASSET__assets_data_skeleton_json extends flash.utils.ByteArray { }
@:keep class __ASSET__assets_data_testplayer_json extends flash.utils.ByteArray { }
@:keep class __ASSET__assets_data_testplayer_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_data_tileset_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_arrow_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_arrowdown_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_arrowleft_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_arrowright_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_arrowup_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_bow_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_exit_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_faithbg_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_heart_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_main_json extends flash.utils.ByteArray { }
@:keep class __ASSET__assets_images_mound_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_newarrow_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_pillar_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_play_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_shrine_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_shrub_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_splash_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_sprplayer_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_tileset_pdn extends flash.utils.ByteArray { }
@:keep class __ASSET__assets_images_tileset_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_titleparts_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_twitter_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_images_weapon_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_sound_fire_wav extends flash.media.Sound { }
@:keep class __ASSET__assets_sound_hurt_wav extends flash.media.Sound { }
@:keep class __ASSET__assets_sounds_beep_mp3 extends flash.media.Sound { }
@:keep class __ASSET__assets_sounds_flixel_mp3 extends flash.media.Sound { }


#elseif html5






































#elseif (windows || mac || linux)


@:file("assets/data/charactertest.json") class __ASSET__assets_data_charactertest_json extends flash.utils.ByteArray {}
@:file("assets/data/leveltest.tmx") class __ASSET__assets_data_leveltest_tmx extends flash.utils.ByteArray {}
@:bitmap("assets/data/mainplayer.png") class __ASSET__assets_data_mainplayer_png extends flash.display.BitmapData {}
@:file("assets/data/newlevel.tmx") class __ASSET__assets_data_newlevel_tmx extends flash.utils.ByteArray {}
@:file("assets/data/skeleton.json") class __ASSET__assets_data_skeleton_json extends flash.utils.ByteArray {}
@:file("assets/data/testplayer.json") class __ASSET__assets_data_testplayer_json extends flash.utils.ByteArray {}
@:bitmap("assets/data/testplayer.png") class __ASSET__assets_data_testplayer_png extends flash.display.BitmapData {}
@:bitmap("assets/data/tileset.png") class __ASSET__assets_data_tileset_png extends flash.display.BitmapData {}
@:bitmap("assets/images/arrow.png") class __ASSET__assets_images_arrow_png extends flash.display.BitmapData {}
@:bitmap("assets/images/arrowDown.png") class __ASSET__assets_images_arrowdown_png extends flash.display.BitmapData {}
@:bitmap("assets/images/arrowLeft.png") class __ASSET__assets_images_arrowleft_png extends flash.display.BitmapData {}
@:bitmap("assets/images/arrowRight.png") class __ASSET__assets_images_arrowright_png extends flash.display.BitmapData {}
@:bitmap("assets/images/arrowUp.png") class __ASSET__assets_images_arrowup_png extends flash.display.BitmapData {}
@:bitmap("assets/images/bow.png") class __ASSET__assets_images_bow_png extends flash.display.BitmapData {}
@:bitmap("assets/images/exit.png") class __ASSET__assets_images_exit_png extends flash.display.BitmapData {}
@:bitmap("assets/images/faithbg.png") class __ASSET__assets_images_faithbg_png extends flash.display.BitmapData {}
@:bitmap("assets/images/heart.png") class __ASSET__assets_images_heart_png extends flash.display.BitmapData {}
@:file("assets/images/main.json") class __ASSET__assets_images_main_json extends flash.utils.ByteArray {}
@:bitmap("assets/images/mound.png") class __ASSET__assets_images_mound_png extends flash.display.BitmapData {}
@:bitmap("assets/images/newArrow.png") class __ASSET__assets_images_newarrow_png extends flash.display.BitmapData {}
@:bitmap("assets/images/pillar.png") class __ASSET__assets_images_pillar_png extends flash.display.BitmapData {}
@:bitmap("assets/images/play.png") class __ASSET__assets_images_play_png extends flash.display.BitmapData {}
@:bitmap("assets/images/shrine.png") class __ASSET__assets_images_shrine_png extends flash.display.BitmapData {}
@:bitmap("assets/images/shrub.png") class __ASSET__assets_images_shrub_png extends flash.display.BitmapData {}
@:bitmap("assets/images/splash.png") class __ASSET__assets_images_splash_png extends flash.display.BitmapData {}
@:bitmap("assets/images/sprPlayer.png") class __ASSET__assets_images_sprplayer_png extends flash.display.BitmapData {}
@:file("assets/images/tileset.pdn") class __ASSET__assets_images_tileset_pdn extends flash.utils.ByteArray {}
@:bitmap("assets/images/tileset.png") class __ASSET__assets_images_tileset_png extends flash.display.BitmapData {}
@:bitmap("assets/images/titleParts.png") class __ASSET__assets_images_titleparts_png extends flash.display.BitmapData {}
@:bitmap("assets/images/twitter.png") class __ASSET__assets_images_twitter_png extends flash.display.BitmapData {}
@:bitmap("assets/images/weapon.png") class __ASSET__assets_images_weapon_png extends flash.display.BitmapData {}
@:sound("assets/sound/fire.wav") class __ASSET__assets_sound_fire_wav extends flash.media.Sound {}
@:sound("assets/sound/hurt.wav") class __ASSET__assets_sound_hurt_wav extends flash.media.Sound {}
@:sound("E:/Haxe/haxe/lib/flixel/3,3,1/assets/sounds/beep.mp3") class __ASSET__assets_sounds_beep_mp3 extends flash.media.Sound {}
@:sound("E:/Haxe/haxe/lib/flixel/3,3,1/assets/sounds/flixel.mp3") class __ASSET__assets_sounds_flixel_mp3 extends flash.media.Sound {}


#end
