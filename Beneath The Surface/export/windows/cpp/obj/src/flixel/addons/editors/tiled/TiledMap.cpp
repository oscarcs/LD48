#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledLayer
#include <flixel/addons/editors/tiled/TiledLayer.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledMap
#include <flixel/addons/editors/tiled/TiledMap.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledObjectGroup
#include <flixel/addons/editors/tiled/TiledObjectGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileSet
#include <flixel/addons/editors/tiled/TiledTileSet.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_AttribAccess
#include <haxe/xml/_Fast/AttribAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeAccess
#include <haxe/xml/_Fast/NodeAccess.h>
#endif
#ifndef INCLUDED_haxe_xml__Fast_NodeListAccess
#include <haxe/xml/_Fast/NodeListAccess.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

Void TiledMap_obj::__construct(Dynamic Data)
{
HX_STACK_FRAME("flixel.addons.editors.tiled.TiledMap","new",0xde9b4f21,"flixel.addons.editors.tiled.TiledMap.new","flixel/addons/editors/tiled/TiledMap.hx",43,0xfb5e15cd)
HX_STACK_THIS(this)
HX_STACK_ARG(Data,"Data")
{
	HX_STACK_LINE(44)
	::flixel::addons::editors::tiled::TiledPropertySet _g = ::flixel::addons::editors::tiled::TiledPropertySet_obj::__new();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(44)
	this->properties = _g;
	HX_STACK_LINE(45)
	::haxe::xml::Fast source = null();		HX_STACK_VAR(source,"source");
	HX_STACK_LINE(46)
	::haxe::xml::Fast node = null();		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(48)
	if ((::Std_obj::is(Data,hx::ClassOf< ::String >()))){
		HX_STACK_LINE(50)
		::String _g1 = ::openfl::Assets_obj::getText(Data);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(50)
		::Xml _g2 = ::Xml_obj::parse(_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(50)
		::haxe::xml::Fast _g3 = ::haxe::xml::Fast_obj::__new(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(50)
		source = _g3;
	}
	else{
		HX_STACK_LINE(52)
		if ((::Std_obj::is(Data,hx::ClassOf< ::Xml >()))){
			HX_STACK_LINE(54)
			::haxe::xml::Fast _g4 = ::haxe::xml::Fast_obj::__new(Data);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(54)
			source = _g4;
		}
		else{
			HX_STACK_LINE(58)
			HX_STACK_DO_THROW(HX_CSTRING("Unknown TMX map format"));
		}
	}
	HX_STACK_LINE(61)
	::haxe::xml::Fast _g5 = source->node->resolve(HX_CSTRING("map"));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(61)
	source = _g5;
	HX_STACK_LINE(64)
	::String _g6 = source->att->resolve(HX_CSTRING("version"));		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(64)
	this->version = _g6;
	HX_STACK_LINE(66)
	if (((this->version == null()))){
		HX_STACK_LINE(68)
		this->version = HX_CSTRING("unknown");
	}
	HX_STACK_LINE(71)
	::String _g7 = source->att->resolve(HX_CSTRING("orientation"));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(71)
	this->orientation = _g7;
	HX_STACK_LINE(73)
	if (((this->orientation == null()))){
		HX_STACK_LINE(75)
		this->orientation = HX_CSTRING("orthogonal");
	}
	HX_STACK_LINE(78)
	::String _g8 = source->att->resolve(HX_CSTRING("width"));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(78)
	Dynamic _g9 = ::Std_obj::parseInt(_g8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(78)
	this->width = _g9;
	HX_STACK_LINE(79)
	::String _g10 = source->att->resolve(HX_CSTRING("height"));		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(79)
	Dynamic _g11 = ::Std_obj::parseInt(_g10);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(79)
	this->height = _g11;
	HX_STACK_LINE(80)
	::String _g12 = source->att->resolve(HX_CSTRING("tilewidth"));		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(80)
	Dynamic _g13 = ::Std_obj::parseInt(_g12);		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(80)
	this->tileWidth = _g13;
	HX_STACK_LINE(81)
	::String _g14 = source->att->resolve(HX_CSTRING("tileheight"));		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(81)
	Dynamic _g15 = ::Std_obj::parseInt(_g14);		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(81)
	this->tileHeight = _g15;
	HX_STACK_LINE(84)
	this->fullWidth = (this->width * this->tileWidth);
	HX_STACK_LINE(85)
	this->fullHeight = (this->height * this->tileHeight);
	HX_STACK_LINE(87)
	::haxe::ds::StringMap _g16 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(87)
	this->noLoadHash = _g16;
	HX_STACK_LINE(88)
	::haxe::ds::StringMap _g17 = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(88)
	this->tilesets = _g17;
	HX_STACK_LINE(89)
	Array< ::Dynamic > _g18 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(89)
	this->layers = _g18;
	HX_STACK_LINE(90)
	Array< ::Dynamic > _g19 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(90)
	this->objectGroups = _g19;
	HX_STACK_LINE(93)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(source->nodes->resolve(HX_CSTRING("properties"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast node1 = __it->next();
		this->properties->extend(node1);
	}
	HX_STACK_LINE(98)
	::String noLoadStr = this->properties->keys->get(HX_CSTRING("noload"));		HX_STACK_VAR(noLoadStr,"noLoadStr");
	HX_STACK_LINE(100)
	if (((noLoadStr != null()))){
		HX_STACK_LINE(102)
		::EReg regExp = ::EReg_obj::__new(HX_CSTRING("[,;|]"),HX_CSTRING(""));		HX_STACK_VAR(regExp,"regExp");
		HX_STACK_LINE(103)
		Array< ::String > noLoadArr = regExp->split(noLoadStr);		HX_STACK_VAR(noLoadArr,"noLoadArr");
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(105)
			while((true)){
				HX_STACK_LINE(105)
				if ((!(((_g1 < noLoadArr->length))))){
					HX_STACK_LINE(105)
					break;
				}
				HX_STACK_LINE(105)
				::String s = noLoadArr->__get(_g1);		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(105)
				++(_g1);
				HX_STACK_LINE(107)
				{
					HX_STACK_LINE(107)
					::String key = ::StringTools_obj::trim(s);		HX_STACK_VAR(key,"key");
					HX_STACK_LINE(107)
					this->noLoadHash->set(key,true);
				}
			}
		}
	}
	HX_STACK_LINE(112)
	::String name;		HX_STACK_VAR(name,"name");
	HX_STACK_LINE(113)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(source->nodes->resolve(HX_CSTRING("tileset"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast node1 = __it->next();
		{
			HX_STACK_LINE(115)
			::String _g20 = node1->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(115)
			name = _g20;
			HX_STACK_LINE(117)
			if ((!(this->noLoadHash->exists(name)))){
				HX_STACK_LINE(119)
				::flixel::addons::editors::tiled::TiledTileSet value = ::flixel::addons::editors::tiled::TiledTileSet_obj::__new(node1);		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(119)
				this->tilesets->set(name,value);
			}
		}
;
	}
	HX_STACK_LINE(124)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(source->nodes->resolve(HX_CSTRING("layer"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast node1 = __it->next();
		{
			HX_STACK_LINE(126)
			::String _g21 = node1->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(126)
			name = _g21;
			HX_STACK_LINE(128)
			if ((!(this->noLoadHash->exists(name)))){
				HX_STACK_LINE(130)
				::flixel::addons::editors::tiled::TiledLayer _g22 = ::flixel::addons::editors::tiled::TiledLayer_obj::__new(node1,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(130)
				this->layers->push(_g22);
			}
		}
;
	}
	HX_STACK_LINE(135)
	for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(source->nodes->resolve(HX_CSTRING("objectgroup"))->iterator());  __it->hasNext(); ){
		::haxe::xml::Fast node1 = __it->next();
		{
			HX_STACK_LINE(137)
			::String _g23 = node1->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(_g23,"_g23");
			HX_STACK_LINE(137)
			name = _g23;
			HX_STACK_LINE(139)
			if ((!(this->noLoadHash->exists(name)))){
				HX_STACK_LINE(141)
				::flixel::addons::editors::tiled::TiledObjectGroup _g24 = ::flixel::addons::editors::tiled::TiledObjectGroup_obj::__new(node1,hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(_g24,"_g24");
				HX_STACK_LINE(141)
				this->objectGroups->push(_g24);
			}
		}
;
	}
}
;
	return null();
}

//TiledMap_obj::~TiledMap_obj() { }

Dynamic TiledMap_obj::__CreateEmpty() { return  new TiledMap_obj; }
hx::ObjectPtr< TiledMap_obj > TiledMap_obj::__new(Dynamic Data)
{  hx::ObjectPtr< TiledMap_obj > result = new TiledMap_obj();
	result->__construct(Data);
	return result;}

Dynamic TiledMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledMap_obj > result = new TiledMap_obj();
	result->__construct(inArgs[0]);
	return result;}

::flixel::addons::editors::tiled::TiledTileSet TiledMap_obj::getTileSet( ::String Name){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledMap","getTileSet",0x10a90a7d,"flixel.addons.editors.tiled.TiledMap.getTileSet","flixel/addons/editors/tiled/TiledMap.hx",148,0xfb5e15cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_LINE(148)
	return this->tilesets->get(Name);
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,getTileSet,return )

::flixel::addons::editors::tiled::TiledLayer TiledMap_obj::getLayer( ::String Name){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledMap","getLayer",0xf247f6fa,"flixel.addons.editors.tiled.TiledMap.getLayer","flixel/addons/editors/tiled/TiledMap.hx",152,0xfb5e15cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_LINE(153)
	int i = this->layers->length;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(155)
	while((true)){
		HX_STACK_LINE(155)
		if ((!(((i > (int)0))))){
			HX_STACK_LINE(155)
			break;
		}
		HX_STACK_LINE(157)
		if (((this->layers->__get(--(i)).StaticCast< ::flixel::addons::editors::tiled::TiledLayer >()->name == Name))){
			HX_STACK_LINE(159)
			return this->layers->__get(i).StaticCast< ::flixel::addons::editors::tiled::TiledLayer >();
		}
	}
	HX_STACK_LINE(163)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,getLayer,return )

::flixel::addons::editors::tiled::TiledObjectGroup TiledMap_obj::getObjectGroup( ::String Name){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledMap","getObjectGroup",0xa32109e9,"flixel.addons.editors.tiled.TiledMap.getObjectGroup","flixel/addons/editors/tiled/TiledMap.hx",167,0xfb5e15cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Name,"Name")
	HX_STACK_LINE(168)
	int i = this->objectGroups->length;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(170)
	while((true)){
		HX_STACK_LINE(170)
		if ((!(((i > (int)0))))){
			HX_STACK_LINE(170)
			break;
		}
		HX_STACK_LINE(172)
		if (((this->objectGroups->__get(--(i)).StaticCast< ::flixel::addons::editors::tiled::TiledObjectGroup >()->name == Name))){
			HX_STACK_LINE(174)
			return this->objectGroups->__get(i).StaticCast< ::flixel::addons::editors::tiled::TiledObjectGroup >();
		}
	}
	HX_STACK_LINE(178)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,getObjectGroup,return )

::flixel::addons::editors::tiled::TiledTileSet TiledMap_obj::getGidOwner( int Gid){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledMap","getGidOwner",0xd5d72748,"flixel.addons.editors.tiled.TiledMap.getGidOwner","flixel/addons/editors/tiled/TiledMap.hx",183,0xfb5e15cd)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Gid,"Gid")
	HX_STACK_LINE(184)
	::flixel::addons::editors::tiled::TiledTileSet last = null();		HX_STACK_VAR(last,"last");
	HX_STACK_LINE(185)
	::flixel::addons::editors::tiled::TiledTileSet set;		HX_STACK_VAR(set,"set");
	HX_STACK_LINE(187)
	for(::cpp::FastIterator_obj< ::flixel::addons::editors::tiled::TiledTileSet > *__it = ::cpp::CreateFastIterator< ::flixel::addons::editors::tiled::TiledTileSet >(this->tilesets->iterator());  __it->hasNext(); ){
		::flixel::addons::editors::tiled::TiledTileSet set1 = __it->next();
		if (((bool((Gid >= set1->firstGID)) && bool((Gid < (set1->firstGID + set1->numTiles)))))){
			HX_STACK_LINE(191)
			return set1;
		}
;
	}
	HX_STACK_LINE(195)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledMap_obj,getGidOwner,return )


TiledMap_obj::TiledMap_obj()
{
}

void TiledMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledMap);
	HX_MARK_MEMBER_NAME(version,"version");
	HX_MARK_MEMBER_NAME(orientation,"orientation");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(tileWidth,"tileWidth");
	HX_MARK_MEMBER_NAME(tileHeight,"tileHeight");
	HX_MARK_MEMBER_NAME(fullWidth,"fullWidth");
	HX_MARK_MEMBER_NAME(fullHeight,"fullHeight");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(noLoadHash,"noLoadHash");
	HX_MARK_MEMBER_NAME(tilesets,"tilesets");
	HX_MARK_MEMBER_NAME(layers,"layers");
	HX_MARK_MEMBER_NAME(objectGroups,"objectGroups");
	HX_MARK_END_CLASS();
}

void TiledMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(version,"version");
	HX_VISIT_MEMBER_NAME(orientation,"orientation");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(tileWidth,"tileWidth");
	HX_VISIT_MEMBER_NAME(tileHeight,"tileHeight");
	HX_VISIT_MEMBER_NAME(fullWidth,"fullWidth");
	HX_VISIT_MEMBER_NAME(fullHeight,"fullHeight");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(noLoadHash,"noLoadHash");
	HX_VISIT_MEMBER_NAME(tilesets,"tilesets");
	HX_VISIT_MEMBER_NAME(layers,"layers");
	HX_VISIT_MEMBER_NAME(objectGroups,"objectGroups");
}

Dynamic TiledMap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"layers") ) { return layers; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { return version; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tilesets") ) { return tilesets; }
		if (HX_FIELD_EQ(inName,"getLayer") ) { return getLayer_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return tileWidth; }
		if (HX_FIELD_EQ(inName,"fullWidth") ) { return fullWidth; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return tileHeight; }
		if (HX_FIELD_EQ(inName,"fullHeight") ) { return fullHeight; }
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		if (HX_FIELD_EQ(inName,"noLoadHash") ) { return noLoadHash; }
		if (HX_FIELD_EQ(inName,"getTileSet") ) { return getTileSet_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"orientation") ) { return orientation; }
		if (HX_FIELD_EQ(inName,"getGidOwner") ) { return getGidOwner_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectGroups") ) { return objectGroups; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getObjectGroup") ) { return getObjectGroup_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"layers") ) { layers=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"version") ) { version=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tilesets") ) { tilesets=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullWidth") ) { fullWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fullHeight") ) { fullHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
		if (HX_FIELD_EQ(inName,"noLoadHash") ) { noLoadHash=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"orientation") ) { orientation=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"objectGroups") ) { objectGroups=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("version"));
	outFields->push(HX_CSTRING("orientation"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("tileWidth"));
	outFields->push(HX_CSTRING("tileHeight"));
	outFields->push(HX_CSTRING("fullWidth"));
	outFields->push(HX_CSTRING("fullHeight"));
	outFields->push(HX_CSTRING("properties"));
	outFields->push(HX_CSTRING("noLoadHash"));
	outFields->push(HX_CSTRING("tilesets"));
	outFields->push(HX_CSTRING("layers"));
	outFields->push(HX_CSTRING("objectGroups"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(TiledMap_obj,version),HX_CSTRING("version")},
	{hx::fsString,(int)offsetof(TiledMap_obj,orientation),HX_CSTRING("orientation")},
	{hx::fsInt,(int)offsetof(TiledMap_obj,width),HX_CSTRING("width")},
	{hx::fsInt,(int)offsetof(TiledMap_obj,height),HX_CSTRING("height")},
	{hx::fsInt,(int)offsetof(TiledMap_obj,tileWidth),HX_CSTRING("tileWidth")},
	{hx::fsInt,(int)offsetof(TiledMap_obj,tileHeight),HX_CSTRING("tileHeight")},
	{hx::fsInt,(int)offsetof(TiledMap_obj,fullWidth),HX_CSTRING("fullWidth")},
	{hx::fsInt,(int)offsetof(TiledMap_obj,fullHeight),HX_CSTRING("fullHeight")},
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledPropertySet*/ ,(int)offsetof(TiledMap_obj,properties),HX_CSTRING("properties")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TiledMap_obj,noLoadHash),HX_CSTRING("noLoadHash")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(TiledMap_obj,tilesets),HX_CSTRING("tilesets")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledMap_obj,layers),HX_CSTRING("layers")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledMap_obj,objectGroups),HX_CSTRING("objectGroups")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("version"),
	HX_CSTRING("orientation"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("tileWidth"),
	HX_CSTRING("tileHeight"),
	HX_CSTRING("fullWidth"),
	HX_CSTRING("fullHeight"),
	HX_CSTRING("properties"),
	HX_CSTRING("noLoadHash"),
	HX_CSTRING("tilesets"),
	HX_CSTRING("layers"),
	HX_CSTRING("objectGroups"),
	HX_CSTRING("getTileSet"),
	HX_CSTRING("getLayer"),
	HX_CSTRING("getObjectGroup"),
	HX_CSTRING("getGidOwner"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledMap_obj::__mClass,"__mClass");
};

#endif

Class TiledMap_obj::__mClass;

void TiledMap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.editors.tiled.TiledMap"), hx::TCanCast< TiledMap_obj> ,sStaticFields,sMemberFields,
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

void TiledMap_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
