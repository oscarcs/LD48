#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_flash_utils_ByteArray
#include <flash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_flash_utils_CompressionAlgorithm
#include <flash/utils/CompressionAlgorithm.h>
#endif
#ifndef INCLUDED_flash_utils_IDataInput
#include <flash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_flash_utils_IDataOutput
#include <flash/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTile
#include <flixel/addons/editors/tiled/TiledTile.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileSet
#include <flixel/addons/editors/tiled/TiledTileSet.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_HasAttribAccess
#include <haxe/xml/_Fast/HasAttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

Void TiledLayer_obj::__construct(::haxe::xml::Fast Source,::flixel::addons::editors::tiled::TiledMap Parent)
{
HX_STACK_FRAME("flixel.addons.editors.tiled.TiledLayer","new",0x018fcf96,"flixel.addons.editors.tiled.TiledLayer.new","flixel/addons/editors/tiled/TiledLayer.hx",31,0x30daee78)
HX_STACK_THIS(this)
HX_STACK_ARG(Source,"Source")
HX_STACK_ARG(Parent,"Parent")
{
	HX_STACK_LINE(32)
	::flixel::addons::editors::tiled::TiledPropertySet _g = ::flixel::addons::editors::tiled::TiledPropertySet_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(32)
	this->properties = _g;
	HX_STACK_LINE(33)
	this->map = Parent;
	HX_STACK_LINE(34)
	::String _g1 = Source->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(34)
	this->name = _g1;
	HX_STACK_LINE(35)
	int _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(35)
	if ((Source->has->resolve(HX_CSTRING("x")))){
		HX_STACK_LINE(35)
		::String _g2 = Source->att->resolve(HX_CSTRING("x"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(35)
		_g3 = ::Std_obj::parseInt(_g2);
	}
	else{
		HX_STACK_LINE(35)
		_g3 = (int)0;
	}
	HX_STACK_LINE(35)
	this->x = _g3;
	HX_STACK_LINE(36)
	int _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(36)
	if ((Source->has->resolve(HX_CSTRING("y")))){
		HX_STACK_LINE(36)
		::String _g4 = Source->att->resolve(HX_CSTRING("y"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(36)
		_g5 = ::Std_obj::parseInt(_g4);
	}
	else{
		HX_STACK_LINE(36)
		_g5 = (int)0;
	}
	HX_STACK_LINE(36)
	this->y = _g5;
	HX_STACK_LINE(37)
	::String _g6 = Source->att->resolve(HX_CSTRING("width"));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(37)
	Dynamic _g7 = ::Std_obj::parseInt(_g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(37)
	this->width = _g7;
	HX_STACK_LINE(38)
	::String _g8 = Source->att->resolve(HX_CSTRING("height"));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(38)
	Dynamic _g9 = ::Std_obj::parseInt(_g8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(38)
	this->height = _g9;
	HX_STACK_LINE(39)
	bool _g11;		HX_STACK_VAR(_g11,"_g11");
	struct _Function_1_1{
		inline static bool Block( ::haxe::xml::Fast &Source){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/editors/tiled/TiledLayer.hx",39,0x30daee78)
			{
				HX_STACK_LINE(39)
				::String _g10 = Source->att->resolve(HX_CSTRING("visible"));		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(39)
				return (_g10 == HX_CSTRING("0"));
			}
			return null();
		}
	};
	HX_STACK_LINE(39)
	if (((  ((Source->has->resolve(HX_CSTRING("visible")))) ? bool(_Function_1_1::Block(Source)) : bool(false) ))){
		HX_STACK_LINE(39)
		_g11 = false;
	}
	else{
		HX_STACK_LINE(39)
		_g11 = true;
	}
	HX_STACK_LINE(39)
	this->visible = _g11;
	HX_STACK_LINE(40)
	Float _g13;		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(40)
	if ((Source->has->resolve(HX_CSTRING("opacity")))){
		HX_STACK_LINE(40)
		::String _g12 = Source->att->resolve(HX_CSTRING("opacity"));		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(40)
		_g13 = ::Std_obj::parseFloat(_g12);
	}
	else{
		HX_STACK_LINE(40)
		_g13 = 1.0;
	}
	HX_STACK_LINE(40)
	this->opacity = _g13;
	HX_STACK_LINE(41)
	Array< ::Dynamic > _g14 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(41)
	this->tiles = _g14;
	HX_STACK_LINE(44)
	::haxe::xml::Fast node;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(46)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(Source->nodes->resolve(HX_CSTRING("properties"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast node1 = __it->next();
		this->properties->extend(node1);
	}
	HX_STACK_LINE(52)
	::haxe::xml::Fast _g15 = Source->node->resolve(HX_CSTRING("data"));		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(52)
	this->_xmlData = _g15;
	HX_STACK_LINE(54)
	if (((this->_xmlData == null()))){
		HX_STACK_LINE(56)
		HX_STACK_DO_THROW(HX_CSTRING("Error loading TiledLayer level data"));
	}
}
;
	return null();
}

//TiledLayer_obj::~TiledLayer_obj() { }

Dynamic TiledLayer_obj::__CreateEmpty() { return  new TiledLayer_obj; }
hx::ObjectPtr< TiledLayer_obj > TiledLayer_obj::__new(::haxe::xml::Fast Source,::flixel::addons::editors::tiled::TiledMap Parent)
{  hx::ObjectPtr< TiledLayer_obj > result = new TiledLayer_obj();
	result->__construct(Source,Parent);
	return result;}

Dynamic TiledLayer_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledLayer_obj > result = new TiledLayer_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::flash::utils::ByteArray TiledLayer_obj::getByteArrayData( ){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledLayer","getByteArrayData",0xed9db0cf,"flixel.addons.editors.tiled.TiledLayer.getByteArrayData","flixel/addons/editors/tiled/TiledLayer.hx",61,0x30daee78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(62)
	::flash::utils::ByteArray result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(64)
	::String _g = this->_xmlData->att->resolve(HX_CSTRING("encoding"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(64)
	if (((_g == HX_CSTRING("base64")))){
		HX_STACK_LINE(66)
		::String chunk = this->_xmlData->get_innerData();		HX_STACK_VAR(chunk,"chunk");
		HX_STACK_LINE(67)
		bool compressed = false;		HX_STACK_VAR(compressed,"compressed");
		HX_STACK_LINE(69)
		::flash::utils::ByteArray _g1 = ::flixel::addons::editors::tiled::TiledLayer_obj::base64ToByteArray(chunk);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(69)
		result = _g1;
		HX_STACK_LINE(70)
		result->set_endian(HX_CSTRING("littleEndian"));
		HX_STACK_LINE(72)
		if ((this->_xmlData->has->resolve(HX_CSTRING("compression")))){
			HX_STACK_LINE(74)
			::String _g2 = this->_xmlData->att->resolve(HX_CSTRING("compression"));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(74)
			::String _switch_1 = (_g2);
			if (  ( _switch_1==HX_CSTRING("zlib"))){
				HX_STACK_LINE(77)
				compressed = true;
			}
			else  {
				HX_STACK_LINE(79)
				HX_STACK_DO_THROW(HX_CSTRING("TiledLayer - data compression type not supported!"));
			}
;
;
		}
		HX_STACK_LINE(83)
		if ((compressed)){
			HX_STACK_LINE(88)
			result->uncompress(null());
		}
	}
	HX_STACK_LINE(93)
	result->set_endian(HX_CSTRING("littleEndian"));
	HX_STACK_LINE(94)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC0(TiledLayer_obj,getByteArrayData,return )

int TiledLayer_obj::resolveTile( int GlobalTileID){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledLayer","resolveTile",0x12f71570,"flixel.addons.editors.tiled.TiledLayer.resolveTile","flixel/addons/editors/tiled/TiledLayer.hx",150,0x30daee78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(GlobalTileID,"GlobalTileID")
	HX_STACK_LINE(151)
	::flixel::addons::editors::tiled::TiledTile tile = ::flixel::addons::editors::tiled::TiledTile_obj::__new(GlobalTileID);		HX_STACK_VAR(tile,"tile");
	HX_STACK_LINE(153)
	int tilesetID = tile->tilesetID;		HX_STACK_VAR(tilesetID,"tilesetID");
	HX_STACK_LINE(154)
	for(::cpp::FastIterator_obj< ::flixel::addons::editors::tiled::TiledTileSet > *__it = ::cpp::CreateFastIterator< ::flixel::addons::editors::tiled::TiledTileSet >(this->map->tilesets->iterator());  __it->hasNext(); ){
		::flixel::addons::editors::tiled::TiledTileSet tileset = __it->next();
		if (((bool((tilesetID >= tileset->firstGID)) && bool((tilesetID < (tileset->firstGID + tileset->numTiles)))))){
			HX_STACK_LINE(158)
			this->tiles->push(tile);
			HX_STACK_LINE(160)
			return tilesetID;
		}
;
	}
	HX_STACK_LINE(163)
	this->tiles->push(null());
	HX_STACK_LINE(164)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledLayer_obj,resolveTile,return )

::String TiledLayer_obj::resolveCsvTiles( ::String csvData){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledLayer","resolveCsvTiles",0x907f0f21,"flixel.addons.editors.tiled.TiledLayer.resolveCsvTiles","flixel/addons/editors/tiled/TiledLayer.hx",174,0x30daee78)
	HX_STACK_THIS(this)
	HX_STACK_ARG(csvData,"csvData")
	HX_STACK_LINE(175)
	::StringBuf buffer = ::StringBuf_obj::__new();		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(176)
	Array< ::String > rows = csvData.split(HX_CSTRING("\n"));		HX_STACK_VAR(rows,"rows");
	HX_STACK_LINE(177)
	Array< ::String > values;		HX_STACK_VAR(values,"values");
	HX_STACK_LINE(178)
	{
		HX_STACK_LINE(178)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(178)
		while((true)){
			HX_STACK_LINE(178)
			if ((!(((_g < rows->length))))){
				HX_STACK_LINE(178)
				break;
			}
			HX_STACK_LINE(178)
			::String row = rows->__get(_g);		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(178)
			++(_g);
			HX_STACK_LINE(179)
			Array< ::String > _g1 = row.split(HX_CSTRING(","));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(179)
			values = _g1;
			HX_STACK_LINE(180)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(181)
			{
				HX_STACK_LINE(181)
				int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(181)
				while((true)){
					HX_STACK_LINE(181)
					if ((!(((_g11 < values->length))))){
						HX_STACK_LINE(181)
						break;
					}
					HX_STACK_LINE(181)
					::String v = values->__get(_g11);		HX_STACK_VAR(v,"v");
					HX_STACK_LINE(181)
					++(_g11);
					HX_STACK_LINE(182)
					if (((v == HX_CSTRING("")))){
						HX_STACK_LINE(183)
						continue;
					}
					HX_STACK_LINE(185)
					Dynamic _g12 = ::Std_obj::parseInt(v);		HX_STACK_VAR(_g12,"_g12");
					HX_STACK_LINE(185)
					i = _g12;
					HX_STACK_LINE(186)
					int _g2 = this->resolveTile(i);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(186)
					::String _g3 = (_g2 + HX_CSTRING(","));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(186)
					buffer->add(_g3);
				}
			}
			HX_STACK_LINE(188)
			buffer->add(HX_CSTRING("\n"));
		}
	}
	HX_STACK_LINE(191)
	::String result = buffer->b->join(HX_CSTRING(""));		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(192)
	buffer = null();
	HX_STACK_LINE(193)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(TiledLayer_obj,resolveCsvTiles,return )

::String TiledLayer_obj::get_csvData( ){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledLayer","get_csvData",0xdf15e65d,"flixel.addons.editors.tiled.TiledLayer.get_csvData","flixel/addons/editors/tiled/TiledLayer.hx",199,0x30daee78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(200)
	if (((this->csvData == null()))){
		HX_STACK_LINE(202)
		::String _g = this->_xmlData->att->resolve(HX_CSTRING("encoding"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(202)
		if (((_g == HX_CSTRING("csv")))){
			HX_STACK_LINE(204)
			::String _g1 = this->_xmlData->get_innerData();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(204)
			this->csvData = _g1;
		}
		else{
			HX_STACK_LINE(208)
			HX_STACK_DO_THROW(HX_CSTRING("Must use CSV encoding in order to get CSV data."));
		}
	}
	HX_STACK_LINE(211)
	return this->csvData;
}


HX_DEFINE_DYNAMIC_FUNC0(TiledLayer_obj,get_csvData,return )

Array< int > TiledLayer_obj::get_tileArray( ){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledLayer","get_tileArray",0x2709fe18,"flixel.addons.editors.tiled.TiledLayer.get_tileArray","flixel/addons/editors/tiled/TiledLayer.hx",217,0x30daee78)
	HX_STACK_THIS(this)
	HX_STACK_LINE(218)
	if (((this->tileArray == null()))){
		HX_STACK_LINE(220)
		::flash::utils::ByteArray mapData = this->getByteArrayData();		HX_STACK_VAR(mapData,"mapData");
		HX_STACK_LINE(222)
		if (((mapData == null()))){
			HX_STACK_LINE(224)
			HX_STACK_DO_THROW(HX_CSTRING("Must use Base64 encoding (with or without zlip compression) in order to get 1D Array."));
		}
		HX_STACK_LINE(227)
		Array< int > _g = Array_obj< int >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(227)
		this->tileArray = _g;
		HX_STACK_LINE(229)
		while((true)){
			HX_STACK_LINE(229)
			if ((!(((mapData->position < mapData->length))))){
				HX_STACK_LINE(229)
				break;
			}
			HX_STACK_LINE(231)
			int _g1 = mapData->readUnsignedInt();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(231)
			int _g2 = this->resolveTile(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(231)
			this->tileArray->push(_g2);
		}
	}
	HX_STACK_LINE(235)
	return this->tileArray;
}


HX_DEFINE_DYNAMIC_FUNC0(TiledLayer_obj,get_tileArray,return )

::String TiledLayer_obj::BASE64_CHARS;

::flash::utils::ByteArray TiledLayer_obj::base64ToByteArray( ::String data){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledLayer","base64ToByteArray",0x12099cdd,"flixel.addons.editors.tiled.TiledLayer.base64ToByteArray","flixel/addons/editors/tiled/TiledLayer.hx",98,0x30daee78)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(99)
	::flash::utils::ByteArray output = ::flash::utils::ByteArray_obj::__new(null());		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(102)
	Array< int > lookup = Array_obj< int >::__new();		HX_STACK_VAR(lookup,"lookup");
	HX_STACK_LINE(103)
	int c;		HX_STACK_VAR(c,"c");
	HX_STACK_LINE(105)
	{
		HX_STACK_LINE(105)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(105)
		int _g = HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=").length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(105)
		while((true)){
			HX_STACK_LINE(105)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(105)
				break;
			}
			HX_STACK_LINE(105)
			int c1 = (_g1)++;		HX_STACK_VAR(c1,"c1");
			HX_STACK_LINE(107)
			Dynamic _g2 = HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=").charCodeAt(c1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(107)
			lookup[_g2] = c1;
		}
	}
	HX_STACK_LINE(110)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(112)
	while((true)){
		HX_STACK_LINE(112)
		if ((!(((i < (data.length - (int)3)))))){
			HX_STACK_LINE(112)
			break;
		}
		HX_STACK_LINE(115)
		::String _g1 = data.charAt(i);		HX_STACK_VAR(_g1,"_g1");
		struct _Function_2_1{
			inline static bool Block( int &i,::String &data){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/editors/tiled/TiledLayer.hx",115,0x30daee78)
				{
					HX_STACK_LINE(115)
					::String _g2 = data.charAt(i);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(115)
					return (_g2 == HX_CSTRING("\n"));
				}
				return null();
			}
		};
		struct _Function_2_2{
			inline static bool Block( int &i,::String &data){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/addons/editors/tiled/TiledLayer.hx",115,0x30daee78)
				{
					HX_STACK_LINE(115)
					::String _g3 = data.charAt(i);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(115)
					return (_g3 == HX_CSTRING("\r"));
				}
				return null();
			}
		};
		HX_STACK_LINE(115)
		if (((  ((!(((  ((!(((_g1 == HX_CSTRING(" ")))))) ? bool(_Function_2_1::Block(i,data)) : bool(true) ))))) ? bool(_Function_2_2::Block(i,data)) : bool(true) ))){
			HX_STACK_LINE(117)
			(i)++;
			HX_STACK_LINE(117)
			continue;
		}
		HX_STACK_LINE(121)
		Dynamic _g4 = data.charCodeAt(i);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(121)
		int a0 = lookup->__get(_g4);		HX_STACK_VAR(a0,"a0");
		HX_STACK_LINE(122)
		Dynamic _g5 = data.charCodeAt((i + (int)1));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(122)
		int a1 = lookup->__get(_g5);		HX_STACK_VAR(a1,"a1");
		HX_STACK_LINE(123)
		Dynamic _g6 = data.charCodeAt((i + (int)2));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(123)
		int a2 = lookup->__get(_g6);		HX_STACK_VAR(a2,"a2");
		HX_STACK_LINE(124)
		Dynamic _g7 = data.charCodeAt((i + (int)3));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(124)
		int a3 = lookup->__get(_g7);		HX_STACK_VAR(a3,"a3");
		HX_STACK_LINE(127)
		if (((a1 < (int)64))){
			HX_STACK_LINE(129)
			output->ensureElem(output->position,true);
			HX_STACK_LINE(129)
			int _g8 = (output->position)++;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(129)
			output->b[_g8] = (((int(a0) << int((int)2))) + ((int(((int(a1) & int((int)48)))) >> int((int)4))));
		}
		HX_STACK_LINE(131)
		if (((a2 < (int)64))){
			HX_STACK_LINE(133)
			output->ensureElem(output->position,true);
			HX_STACK_LINE(133)
			int _g9 = (output->position)++;		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(133)
			output->b[_g9] = (((int(((int(a1) & int((int)15)))) << int((int)4))) + ((int(((int(a2) & int((int)60)))) >> int((int)2))));
		}
		HX_STACK_LINE(135)
		if (((a3 < (int)64))){
			HX_STACK_LINE(137)
			output->ensureElem(output->position,true);
			HX_STACK_LINE(137)
			int _g10 = (output->position)++;		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(137)
			output->b[_g10] = (((int(((int(a2) & int((int)3)))) << int((int)6))) + a3);
		}
		HX_STACK_LINE(140)
		hx::AddEq(i,(int)4);
	}
	HX_STACK_LINE(144)
	output->position = (int)0;
	HX_STACK_LINE(146)
	return output;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(TiledLayer_obj,base64ToByteArray,return )


TiledLayer_obj::TiledLayer_obj()
{
}

void TiledLayer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledLayer);
	HX_MARK_MEMBER_NAME(map,"map");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(opacity,"opacity");
	HX_MARK_MEMBER_NAME(visible,"visible");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(tiles,"tiles");
	HX_MARK_MEMBER_NAME(_xmlData,"_xmlData");
	HX_MARK_MEMBER_NAME(csvData,"csvData");
	HX_MARK_MEMBER_NAME(tileArray,"tileArray");
	HX_MARK_END_CLASS();
}

void TiledLayer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(map,"map");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(opacity,"opacity");
	HX_VISIT_MEMBER_NAME(visible,"visible");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(tiles,"tiles");
	HX_VISIT_MEMBER_NAME(_xmlData,"_xmlData");
	HX_VISIT_MEMBER_NAME(csvData,"csvData");
	HX_VISIT_MEMBER_NAME(tileArray,"tileArray");
}

Dynamic TiledLayer_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { return map; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"tiles") ) { return tiles; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { return opacity; }
		if (HX_FIELD_EQ(inName,"visible") ) { return visible; }
		if (HX_FIELD_EQ(inName,"csvData") ) { return inCallProp ? get_csvData() : csvData; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_xmlData") ) { return _xmlData; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileArray") ) { return inCallProp ? get_tileArray() : tileArray; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"resolveTile") ) { return resolveTile_dyn(); }
		if (HX_FIELD_EQ(inName,"get_csvData") ) { return get_csvData_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_tileArray") ) { return get_tileArray_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"resolveCsvTiles") ) { return resolveCsvTiles_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getByteArrayData") ) { return getByteArrayData_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"base64ToByteArray") ) { return base64ToByteArray_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledLayer_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"map") ) { map=inValue.Cast< ::flixel::addons::editors::tiled::TiledMap >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tiles") ) { tiles=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"opacity") ) { opacity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"visible") ) { visible=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"csvData") ) { csvData=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_xmlData") ) { _xmlData=inValue.Cast< ::haxe::xml::Fast >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileArray") ) { tileArray=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledLayer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("map"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("opacity"));
	outFields->push(HX_CSTRING("visible"));
	outFields->push(HX_CSTRING("properties"));
	outFields->push(HX_CSTRING("tiles"));
	outFields->push(HX_CSTRING("_xmlData"));
	outFields->push(HX_CSTRING("csvData"));
	outFields->push(HX_CSTRING("tileArray"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("BASE64_CHARS"),
	HX_CSTRING("base64ToByteArray"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledMap*/ ,(int)offsetof(TiledLayer_obj,map),HX_CSTRING("map")},
	{hx::fsString,(int)offsetof(TiledLayer_obj,name),HX_CSTRING("name")},
	{hx::fsInt,(int)offsetof(TiledLayer_obj,x),HX_CSTRING("x")},
	{hx::fsInt,(int)offsetof(TiledLayer_obj,y),HX_CSTRING("y")},
	{hx::fsInt,(int)offsetof(TiledLayer_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(TiledLayer_obj,height),HX_CSTRING("height")},
	{hx::fsFloat,(int)offsetof(TiledLayer_obj,opacity),HX_CSTRING("opacity")},
	{hx::fsBool,(int)offsetof(TiledLayer_obj,visible),HX_CSTRING("visible")},
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledPropertySet*/ ,(int)offsetof(TiledLayer_obj,properties),HX_CSTRING("properties")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledLayer_obj,tiles),HX_CSTRING("tiles")},
	{hx::fsObject /*::haxe::xml::Fast*/ ,(int)offsetof(TiledLayer_obj,_xmlData),HX_CSTRING("_xmlData")},
	{hx::fsString,(int)offsetof(TiledLayer_obj,csvData),HX_CSTRING("csvData")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(TiledLayer_obj,tileArray),HX_CSTRING("tileArray")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("map"),
	HX_CSTRING("name"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("opacity"),
	HX_CSTRING("visible"),
	HX_CSTRING("properties"),
	HX_CSTRING("tiles"),
	HX_CSTRING("_xmlData"),
	HX_CSTRING("getByteArrayData"),
	HX_CSTRING("resolveTile"),
	HX_CSTRING("resolveCsvTiles"),
	HX_CSTRING("csvData"),
	HX_CSTRING("get_csvData"),
	HX_CSTRING("tileArray"),
	HX_CSTRING("get_tileArray"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledLayer_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TiledLayer_obj::BASE64_CHARS,"BASE64_CHARS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledLayer_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TiledLayer_obj::BASE64_CHARS,"BASE64_CHARS");
};

#endif

Class TiledLayer_obj::__mClass;

void TiledLayer_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.editors.tiled.TiledLayer"), hx::TCanCast< TiledLayer_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void TiledLayer_obj::__boot()
{
	BASE64_CHARS= HX_CSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=");
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
