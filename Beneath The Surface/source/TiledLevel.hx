package;

import openfl.Assets;
import haxe.io.Path;
import haxe.xml.Parser;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.group.FlxGroup;
import flixel.tile.FlxTilemap;
import flixel.addons.editors.tiled.TiledMap;
import flixel.addons.editors.tiled.TiledObject;
import flixel.addons.editors.tiled.TiledObjectGroup;
import flixel.addons.editors.tiled.TiledTileSet;
import Character;

/**
 * ...
 * @author Samuel Batista
 */
class TiledLevel extends TiledMap
{
	// For each "Tile Layer" in the map, you must define a "tileset" property which contains the name of a tile sheet image 
	// used to draw tiles in that layer (without file extension). The image file must be located in the directory specified below.
	private inline static var c_PATH_LEVEL_TILESHEETS = "assets/data/";

	// Array of tilemaps used for collision
	public var foregroundTiles:FlxGroup;
	public var backgroundTiles:FlxGroup;
	public var collidableTileLayers:Array<FlxTilemap>;

	public function new(tiledLevel:Dynamic)
	{
		super(tiledLevel);

		foregroundTiles = new FlxGroup();
		backgroundTiles = new FlxGroup();

		//Currently this isn't working for whatever reason.
		//FlxG.camera.setBounds(0, 0, fullWidth, fullHeight, true);

		// Load Tile Maps
		for (tileLayer in layers)
		{
			var tileSheetName:String = tileLayer.properties.get("tileset");

			if (tileSheetName == null)
			{
				trace("'tileset' property not defined for the '" + tileLayer.name + "' layer.");
			}

			var tileSet:TiledTileSet = null;
			for (ts in tilesets)
			{
				if (ts.name == tileSheetName)
				{
					tileSet = ts;
					break;
				}
			}

			if (tileSet == null)
			{
				trace("Tileset '" + tileSheetName + " not found. Check " + tileLayer.name);
			}

			var imagePath 		= new Path(tileSet.imageSource);
			var processedPath 	= c_PATH_LEVEL_TILESHEETS + imagePath.file + "." + imagePath.ext;

			var tilemap:FlxTilemap = new FlxTilemap();
			tilemap.widthInTiles = width;
			tilemap.heightInTiles = height;
			tilemap.loadMap(tileLayer.tileArray, processedPath, tileSet.tileWidth, tileSet.tileHeight, 0, 1, 1, 1);

			if (tileLayer.properties.contains("nocollide"))
			{
				backgroundTiles.add(tilemap);
			}
			else
			{
				if (collidableTileLayers == null)
					collidableTileLayers = new Array<FlxTilemap>();

				foregroundTiles.add(tilemap);
				collidableTileLayers.push(tilemap);
			}
		}
		trace("added tilemaps");
	}

	public function loadObjects(state:PlayState)
	{
		for (group in objectGroups)
		{
			for (o in group.objects)
			{
				loadObject(o, group, state);
			}
		}
		trace("loaded objects");
	}

	
	//This is an example implementation, basically.
	//I will be switching this up so it's actually useful
	private function loadObject(o:TiledObject, g:TiledObjectGroup, state:PlayState)
	{
		var x:Int = o.x;
		var y:Int = o.y;

		// objects in tiled are aligned bottom-left (top-left in flixel)
		if (o.gid != -1)
			y -= g.map.getGidOwner(o.gid).tileHeight;

		switch (o.type.toLowerCase())
		{
			case "playerstart":
				var player = new Character(o.x, o.y, "assets/data/testplayer.json");
				Reg.player = player;
				state.add(Reg.player);
				FlxG.camera.follow(Reg.player);
				trace("adding character");
				
			case "floor":
				//not really useful unless it's a platformer.
				var floor = new FlxObject(x, y, o.width, o.height);
				state.floor = floor;

			case "shrine":
				//trace("adding shrine");
				//var tileset = g.map.getGidOwner(o.gid);
				var shrine = new Shrine(x,y);
				shrine.solid = true;
				shrine.immovable = true;
				state.shrines.add(shrine);
				
			case "mound":
				//trace("adding mound");
				//var tileset = g.map.getGidOwner(o.gid);
				var mound = new Mound(x, y);
				mound.solid = false;
				mound.immovable = true;
				state.mounds.add(mound);
				
			case "pillar":
				//trace("adding pillar");
				//var tileset = g.map.getGidOwner(o.gid);
				var pillar = new Pillar(x,y);
				pillar.solid = true;
				pillar.immovable = true;
				state.pillars.add(pillar);
				
			case "shrub":
				//trace("adding shrub");
				//var tileset = g.map.getGidOwner(o.gid);
				var shrub = new Shrub(x,y);
				shrub.solid = false;
				shrub.immovable = true;
				state.shrubs.add(shrub);	

			case "exit":
				// Create the level exit
				var exit = new FlxSprite(x, y);
				exit.makeGraphic(32, 32, 0xff3f3f3f);
				exit.exists = false;
				state.exit = exit;
				state.add(exit);			
		}
	}

	public function collideWithLevel(obj:FlxObject, ?notifyCallback:FlxObject->FlxObject->Void, ?processCallback:FlxObject->FlxObject->Bool):Bool
	{
		if (collidableTileLayers != null)
		{
			for (map in collidableTileLayers)
			{
				//Colliding map with objects to avoid errors. Collision here is only done with tile layers not objects.
				//trace("collidiing");
				return FlxG.overlap(map, obj, notifyCallback, processCallback != null ? processCallback : FlxObject.separate);
			}
		}
		return false;
	}
}