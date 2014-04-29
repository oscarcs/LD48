#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_flash_utils_ByteArray
#include <flash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_flash_utils_IDataInput
#include <flash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_flash_utils_IDataOutput
#include <flash/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledPropertySet
#include <flixel/addons/editors/tiled/TiledPropertySet.h>
#endif
#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTileSet
#include <flixel/addons/editors/tiled/TiledTileSet.h>
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

Void TiledTileSet_obj::__construct(Dynamic data)
{
HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","new",0xf865df19,"flixel.addons.editors.tiled.TiledTileSet.new","flixel/addons/editors/tiled/TiledTileSet.hx",32,0x504d33d5)
HX_STACK_THIS(this)
HX_STACK_ARG(data,"data")
{
	HX_STACK_LINE(33)
	::haxe::xml::Fast node;		HX_STACK_VAR(node,"node");
	HX_STACK_LINE(33)
	::haxe::xml::Fast source;		HX_STACK_VAR(source,"source");
	HX_STACK_LINE(34)
	this->numTiles = (int)16777215;
	HX_STACK_LINE(35)
	int _g = this->numCols = (int)1;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(35)
	this->numRows = _g;
	HX_STACK_LINE(38)
	if ((::Std_obj::is(data,hx::ClassOf< ::haxe::xml::Fast >()))){
		HX_STACK_LINE(40)
		source = data;
	}
	else{
		HX_STACK_LINE(42)
		if ((::Std_obj::is(data,hx::ClassOf< ::flash::utils::ByteArray >()))){
			HX_STACK_LINE(44)
			Dynamic _g1 = data->toString();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(44)
			::Xml _g2 = ::Xml_obj::parse(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(44)
			::haxe::xml::Fast _g3 = ::haxe::xml::Fast_obj::__new(_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(44)
			source = _g3;
			HX_STACK_LINE(45)
			::haxe::xml::Fast _g4 = source->node->resolve(HX_CSTRING("tileset"));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(45)
			source = _g4;
		}
		else{
			HX_STACK_LINE(49)
			HX_STACK_DO_THROW(HX_CSTRING("Unknown TMX tileset format"));
		}
	}
	HX_STACK_LINE(52)
	int _g6;		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(52)
	if ((source->has->resolve(HX_CSTRING("firstgid")))){
		HX_STACK_LINE(52)
		::String _g5 = source->att->resolve(HX_CSTRING("firstgid"));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(52)
		_g6 = ::Std_obj::parseInt(_g5);
	}
	else{
		HX_STACK_LINE(52)
		_g6 = (int)1;
	}
	HX_STACK_LINE(52)
	this->firstGID = _g6;
	HX_STACK_LINE(55)
	if ((source->has->resolve(HX_CSTRING("source")))){
	}
	else{
		HX_STACK_LINE(62)
		::haxe::xml::Fast node1 = source->node->resolve(HX_CSTRING("image"));		HX_STACK_VAR(node1,"node1");
		HX_STACK_LINE(63)
		::String _g7 = node1->att->resolve(HX_CSTRING("source"));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(63)
		this->imageSource = _g7;
		HX_STACK_LINE(65)
		::String _g8 = node1->att->resolve(HX_CSTRING("width"));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(65)
		Dynamic imgWidth = ::Std_obj::parseInt(_g8);		HX_STACK_VAR(imgWidth,"imgWidth");
		HX_STACK_LINE(66)
		::String _g9 = node1->att->resolve(HX_CSTRING("height"));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(66)
		Dynamic imgHeight = ::Std_obj::parseInt(_g9);		HX_STACK_VAR(imgHeight,"imgHeight");
		HX_STACK_LINE(68)
		::String _g10 = source->att->resolve(HX_CSTRING("name"));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(68)
		this->name = _g10;
		HX_STACK_LINE(70)
		if ((source->has->resolve(HX_CSTRING("tilewidth")))){
			HX_STACK_LINE(72)
			::String _g11 = source->att->resolve(HX_CSTRING("tilewidth"));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(72)
			Dynamic _g12 = ::Std_obj::parseInt(_g11);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(72)
			this->tileWidth = _g12;
		}
		HX_STACK_LINE(74)
		if ((source->has->resolve(HX_CSTRING("tileheight")))){
			HX_STACK_LINE(76)
			::String _g13 = source->att->resolve(HX_CSTRING("tileheight"));		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(76)
			Dynamic _g14 = ::Std_obj::parseInt(_g13);		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(76)
			this->tileHeight = _g14;
		}
		HX_STACK_LINE(78)
		if ((source->has->resolve(HX_CSTRING("spacing")))){
			HX_STACK_LINE(80)
			::String _g15 = source->att->resolve(HX_CSTRING("spacing"));		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(80)
			Dynamic _g16 = ::Std_obj::parseInt(_g15);		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(80)
			this->spacing = _g16;
		}
		HX_STACK_LINE(82)
		if ((source->has->resolve(HX_CSTRING("margin")))){
			HX_STACK_LINE(84)
			::String _g17 = source->att->resolve(HX_CSTRING("margin"));		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(84)
			Dynamic _g18 = ::Std_obj::parseInt(_g17);		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(84)
			this->margin = _g18;
		}
		HX_STACK_LINE(88)
		::flixel::addons::editors::tiled::TiledPropertySet _g19 = ::flixel::addons::editors::tiled::TiledPropertySet_obj::__new();		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(88)
		this->properties = _g19;
		HX_STACK_LINE(89)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(source->nodes->resolve(HX_CSTRING("properties"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast prop = __it->next();
			this->properties->extend(prop);
		}
		HX_STACK_LINE(94)
		Array< ::Dynamic > _g20 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(94)
		this->tileProps = _g20;
		HX_STACK_LINE(96)
		for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(source->nodes->resolve(HX_CSTRING("tile"))->iterator());  __it->hasNext(); ){
			::haxe::xml::Fast node2 = __it->next();
			{
				HX_STACK_LINE(98)
				if ((!(node2->has->resolve(HX_CSTRING("id"))))){
					HX_STACK_LINE(100)
					continue;
				}
				HX_STACK_LINE(103)
				::String _g21 = node2->att->resolve(HX_CSTRING("id"));		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(103)
				int id = ::Std_obj::parseInt(_g21);		HX_STACK_VAR(id,"id");
				HX_STACK_LINE(104)
				this->tileProps[id] = ::flixel::addons::editors::tiled::TiledPropertySet_obj::__new();
				HX_STACK_LINE(106)
				for(::cpp::FastIterator_obj< ::haxe::xml::Fast > *__it = ::cpp::CreateFastIterator< ::haxe::xml::Fast >(node2->nodes->resolve(HX_CSTRING("properties"))->iterator());  __it->hasNext(); ){
					::haxe::xml::Fast prop = __it->next();
					this->tileProps->__get(id).StaticCast< ::flixel::addons::editors::tiled::TiledPropertySet >()->extend(prop);
				}
			}
;
		}
		HX_STACK_LINE(112)
		if (((bool((this->tileWidth > (int)0)) && bool((this->tileHeight > (int)0))))){
			HX_STACK_LINE(114)
			this->numRows = (Float(imgWidth) / Float(this->tileWidth));
			HX_STACK_LINE(115)
			this->numCols = (Float(imgHeight) / Float(this->tileHeight));
			HX_STACK_LINE(116)
			this->numTiles = (this->numRows * this->numCols);
		}
	}
}
;
	return null();
}

//TiledTileSet_obj::~TiledTileSet_obj() { }

Dynamic TiledTileSet_obj::__CreateEmpty() { return  new TiledTileSet_obj; }
hx::ObjectPtr< TiledTileSet_obj > TiledTileSet_obj::__new(Dynamic data)
{  hx::ObjectPtr< TiledTileSet_obj > result = new TiledTileSet_obj();
	result->__construct(data);
	return result;}

Dynamic TiledTileSet_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledTileSet_obj > result = new TiledTileSet_obj();
	result->__construct(inArgs[0]);
	return result;}

bool TiledTileSet_obj::hasGid( int Gid){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","hasGid",0x55a8bbaf,"flixel.addons.editors.tiled.TiledTileSet.hasGid","flixel/addons/editors/tiled/TiledTileSet.hx",123,0x504d33d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Gid,"Gid")
	HX_STACK_LINE(123)
	return (bool((Gid >= this->firstGID)) && bool((Gid < (this->firstGID + this->numTiles))));
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,hasGid,return )

int TiledTileSet_obj::fromGid( int Gid){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","fromGid",0xe24bb3f1,"flixel.addons.editors.tiled.TiledTileSet.fromGid","flixel/addons/editors/tiled/TiledTileSet.hx",128,0x504d33d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Gid,"Gid")
	HX_STACK_LINE(128)
	return (Gid - ((this->firstGID - (int)1)));
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,fromGid,return )

int TiledTileSet_obj::toGid( int ID){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","toGid",0xbfce2440,"flixel.addons.editors.tiled.TiledTileSet.toGid","flixel/addons/editors/tiled/TiledTileSet.hx",133,0x504d33d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(133)
	return (this->firstGID + ID);
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,toGid,return )

::flixel::addons::editors::tiled::TiledPropertySet TiledTileSet_obj::getPropertiesByGid( int Gid){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","getPropertiesByGid",0x4c2032e9,"flixel.addons.editors.tiled.TiledTileSet.getPropertiesByGid","flixel/addons/editors/tiled/TiledTileSet.hx",137,0x504d33d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Gid,"Gid")
	HX_STACK_LINE(138)
	if (((this->tileProps != null()))){
		HX_STACK_LINE(140)
		return this->tileProps->__get((Gid - this->firstGID)).StaticCast< ::flixel::addons::editors::tiled::TiledPropertySet >();
	}
	HX_STACK_LINE(143)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,getPropertiesByGid,return )

::flixel::addons::editors::tiled::TiledPropertySet TiledTileSet_obj::getProperties( int ID){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","getProperties",0x8aac6822,"flixel.addons.editors.tiled.TiledTileSet.getProperties","flixel/addons/editors/tiled/TiledTileSet.hx",148,0x504d33d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(148)
	return this->tileProps->__get(ID).StaticCast< ::flixel::addons::editors::tiled::TiledPropertySet >();
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,getProperties,return )

::flash::geom::Rectangle TiledTileSet_obj::getRect( int ID){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTileSet","getRect",0xa87c5c13,"flixel.addons.editors.tiled.TiledTileSet.getRect","flixel/addons/editors/tiled/TiledTileSet.hx",154,0x504d33d5)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ID,"ID")
	HX_STACK_LINE(154)
	return ::flash::geom::Rectangle_obj::__new((hx::Mod(ID,this->numCols) * this->tileWidth),((Float(ID) / Float(this->numCols)) * this->tileHeight),null(),null());
}


HX_DEFINE_DYNAMIC_FUNC1(TiledTileSet_obj,getRect,return )


TiledTileSet_obj::TiledTileSet_obj()
{
}

void TiledTileSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TiledTileSet);
	HX_MARK_MEMBER_NAME(firstGID,"firstGID");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(tileWidth,"tileWidth");
	HX_MARK_MEMBER_NAME(tileHeight,"tileHeight");
	HX_MARK_MEMBER_NAME(spacing,"spacing");
	HX_MARK_MEMBER_NAME(margin,"margin");
	HX_MARK_MEMBER_NAME(imageSource,"imageSource");
	HX_MARK_MEMBER_NAME(numTiles,"numTiles");
	HX_MARK_MEMBER_NAME(numRows,"numRows");
	HX_MARK_MEMBER_NAME(numCols,"numCols");
	HX_MARK_MEMBER_NAME(properties,"properties");
	HX_MARK_MEMBER_NAME(tileProps,"tileProps");
	HX_MARK_END_CLASS();
}

void TiledTileSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(firstGID,"firstGID");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(tileWidth,"tileWidth");
	HX_VISIT_MEMBER_NAME(tileHeight,"tileHeight");
	HX_VISIT_MEMBER_NAME(spacing,"spacing");
	HX_VISIT_MEMBER_NAME(margin,"margin");
	HX_VISIT_MEMBER_NAME(imageSource,"imageSource");
	HX_VISIT_MEMBER_NAME(numTiles,"numTiles");
	HX_VISIT_MEMBER_NAME(numRows,"numRows");
	HX_VISIT_MEMBER_NAME(numCols,"numCols");
	HX_VISIT_MEMBER_NAME(properties,"properties");
	HX_VISIT_MEMBER_NAME(tileProps,"tileProps");
}

Dynamic TiledTileSet_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"toGid") ) { return toGid_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"margin") ) { return margin; }
		if (HX_FIELD_EQ(inName,"hasGid") ) { return hasGid_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"spacing") ) { return spacing; }
		if (HX_FIELD_EQ(inName,"numRows") ) { return numRows; }
		if (HX_FIELD_EQ(inName,"numCols") ) { return numCols; }
		if (HX_FIELD_EQ(inName,"fromGid") ) { return fromGid_dyn(); }
		if (HX_FIELD_EQ(inName,"getRect") ) { return getRect_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"firstGID") ) { return firstGID; }
		if (HX_FIELD_EQ(inName,"numTiles") ) { return numTiles; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { return tileWidth; }
		if (HX_FIELD_EQ(inName,"tileProps") ) { return tileProps; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { return tileHeight; }
		if (HX_FIELD_EQ(inName,"properties") ) { return properties; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"imageSource") ) { return imageSource; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getProperties") ) { return getProperties_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getPropertiesByGid") ) { return getPropertiesByGid_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledTileSet_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"margin") ) { margin=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"spacing") ) { spacing=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numRows") ) { numRows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numCols") ) { numCols=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"firstGID") ) { firstGID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"numTiles") ) { numTiles=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileProps") ) { tileProps=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"properties") ) { properties=inValue.Cast< ::flixel::addons::editors::tiled::TiledPropertySet >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"imageSource") ) { imageSource=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledTileSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("firstGID"));
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("tileWidth"));
	outFields->push(HX_CSTRING("tileHeight"));
	outFields->push(HX_CSTRING("spacing"));
	outFields->push(HX_CSTRING("margin"));
	outFields->push(HX_CSTRING("imageSource"));
	outFields->push(HX_CSTRING("numTiles"));
	outFields->push(HX_CSTRING("numRows"));
	outFields->push(HX_CSTRING("numCols"));
	outFields->push(HX_CSTRING("properties"));
	outFields->push(HX_CSTRING("tileProps"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,firstGID),HX_CSTRING("firstGID")},
	{hx::fsString,(int)offsetof(TiledTileSet_obj,name),HX_CSTRING("name")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,tileWidth),HX_CSTRING("tileWidth")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,tileHeight),HX_CSTRING("tileHeight")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,spacing),HX_CSTRING("spacing")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,margin),HX_CSTRING("margin")},
	{hx::fsString,(int)offsetof(TiledTileSet_obj,imageSource),HX_CSTRING("imageSource")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,numTiles),HX_CSTRING("numTiles")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,numRows),HX_CSTRING("numRows")},
	{hx::fsInt,(int)offsetof(TiledTileSet_obj,numCols),HX_CSTRING("numCols")},
	{hx::fsObject /*::flixel::addons::editors::tiled::TiledPropertySet*/ ,(int)offsetof(TiledTileSet_obj,properties),HX_CSTRING("properties")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(TiledTileSet_obj,tileProps),HX_CSTRING("tileProps")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("firstGID"),
	HX_CSTRING("name"),
	HX_CSTRING("tileWidth"),
	HX_CSTRING("tileHeight"),
	HX_CSTRING("spacing"),
	HX_CSTRING("margin"),
	HX_CSTRING("imageSource"),
	HX_CSTRING("numTiles"),
	HX_CSTRING("numRows"),
	HX_CSTRING("numCols"),
	HX_CSTRING("properties"),
	HX_CSTRING("tileProps"),
	HX_CSTRING("hasGid"),
	HX_CSTRING("fromGid"),
	HX_CSTRING("toGid"),
	HX_CSTRING("getPropertiesByGid"),
	HX_CSTRING("getProperties"),
	HX_CSTRING("getRect"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledTileSet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledTileSet_obj::__mClass,"__mClass");
};

#endif

Class TiledTileSet_obj::__mClass;

void TiledTileSet_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.editors.tiled.TiledTileSet"), hx::TCanCast< TiledTileSet_obj> ,sStaticFields,sMemberFields,
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

void TiledTileSet_obj::__boot()
{
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
