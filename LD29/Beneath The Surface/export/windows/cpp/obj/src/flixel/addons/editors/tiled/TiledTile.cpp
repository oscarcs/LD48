#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_editors_tiled_TiledTile
#include <flixel/addons/editors/tiled/TiledTile.h>
#endif
namespace flixel{
namespace addons{
namespace editors{
namespace tiled{

Void TiledTile_obj::__construct(int OriginalId)
{
HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTile","new",0xadac562d,"flixel.addons.editors.tiled.TiledTile.new","flixel/addons/editors/tiled/TiledTile.hx",7,0x237a79c5)
HX_STACK_THIS(this)
HX_STACK_ARG(OriginalId,"OriginalId")
{
	HX_STACK_LINE(34)
	this->isFlipVertically = false;
	HX_STACK_LINE(30)
	this->isFlipHorizontally = false;
	HX_STACK_LINE(42)
	this->tileID = OriginalId;
	HX_STACK_LINE(43)
	this->tilesetID = (int(this->tileID) & int((int)536870911));
	HX_STACK_LINE(44)
	this->rotate = (int)0;
	HX_STACK_LINE(45)
	this->resolveFlipAndRotation();
}
;
	return null();
}

//TiledTile_obj::~TiledTile_obj() { }

Dynamic TiledTile_obj::__CreateEmpty() { return  new TiledTile_obj; }
hx::ObjectPtr< TiledTile_obj > TiledTile_obj::__new(int OriginalId)
{  hx::ObjectPtr< TiledTile_obj > result = new TiledTile_obj();
	result->__construct(OriginalId);
	return result;}

Dynamic TiledTile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< TiledTile_obj > result = new TiledTile_obj();
	result->__construct(inArgs[0]);
	return result;}

Void TiledTile_obj::resolveFlipAndRotation( ){
{
		HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTile","resolveFlipAndRotation",0x184e8a4f,"flixel.addons.editors.tiled.TiledTile.resolveFlipAndRotation","flixel/addons/editors/tiled/TiledTile.hx",48,0x237a79c5)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		bool flipHorizontal = false;		HX_STACK_VAR(flipHorizontal,"flipHorizontal");
		HX_STACK_LINE(50)
		bool flipVertical = false;		HX_STACK_VAR(flipVertical,"flipVertical");
		HX_STACK_LINE(51)
		if (((((int(this->tileID) & int((int)-2147483648))) != (int)0))){
			HX_STACK_LINE(52)
			flipHorizontal = true;
		}
		HX_STACK_LINE(54)
		if (((((int(this->tileID) & int((int)1073741824))) != (int)0))){
			HX_STACK_LINE(55)
			flipVertical = true;
		}
		HX_STACK_LINE(58)
		if (((((int(this->tileID) & int((int)536870912))) != (int)0))){
			HX_STACK_LINE(59)
			if (((bool(flipHorizontal) && bool(flipVertical)))){
				HX_STACK_LINE(60)
				this->isFlipHorizontally = true;
				HX_STACK_LINE(61)
				this->rotate = (int)2;
			}
			else{
				HX_STACK_LINE(62)
				if ((flipHorizontal)){
					HX_STACK_LINE(63)
					this->rotate = (int)1;
				}
				else{
					HX_STACK_LINE(64)
					if ((flipVertical)){
						HX_STACK_LINE(65)
						this->rotate = (int)2;
					}
					else{
						HX_STACK_LINE(67)
						this->isFlipVertically = true;
						HX_STACK_LINE(68)
						this->rotate = (int)2;
					}
				}
			}
		}
		else{
			HX_STACK_LINE(71)
			this->isFlipHorizontally = flipHorizontal;
			HX_STACK_LINE(72)
			this->isFlipVertically = flipVertical;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(TiledTile_obj,resolveFlipAndRotation,(void))

int TiledTile_obj::resolveTilesetID( ){
	HX_STACK_FRAME("flixel.addons.editors.tiled.TiledTile","resolveTilesetID",0x0ea8a396,"flixel.addons.editors.tiled.TiledTile.resolveTilesetID","flixel/addons/editors/tiled/TiledTile.hx",78,0x237a79c5)
	HX_STACK_THIS(this)
	HX_STACK_LINE(78)
	return (int(this->tileID) & int((int)536870911));
}


HX_DEFINE_DYNAMIC_FUNC0(TiledTile_obj,resolveTilesetID,return )

int TiledTile_obj::FLIPPED_HORIZONTAL;

int TiledTile_obj::FLIPPED_VERTICAL;

int TiledTile_obj::FLIPPED_DIAGONAL;

int TiledTile_obj::ROTATE_0;

int TiledTile_obj::ROTATE_90;

int TiledTile_obj::ROTATE_270;


TiledTile_obj::TiledTile_obj()
{
}

Dynamic TiledTile_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tileID") ) { return tileID; }
		if (HX_FIELD_EQ(inName,"rotate") ) { return rotate; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tilesetID") ) { return tilesetID; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isFlipVertically") ) { return isFlipVertically; }
		if (HX_FIELD_EQ(inName,"resolveTilesetID") ) { return resolveTilesetID_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isFlipHorizontally") ) { return isFlipHorizontally; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"resolveFlipAndRotation") ) { return resolveFlipAndRotation_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic TiledTile_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"tileID") ) { tileID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rotate") ) { rotate=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tilesetID") ) { tilesetID=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"isFlipVertically") ) { isFlipVertically=inValue.Cast< bool >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"isFlipHorizontally") ) { isFlipHorizontally=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TiledTile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("tileID"));
	outFields->push(HX_CSTRING("tilesetID"));
	outFields->push(HX_CSTRING("isFlipHorizontally"));
	outFields->push(HX_CSTRING("isFlipVertically"));
	outFields->push(HX_CSTRING("rotate"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("FLIPPED_HORIZONTAL"),
	HX_CSTRING("FLIPPED_VERTICAL"),
	HX_CSTRING("FLIPPED_DIAGONAL"),
	HX_CSTRING("ROTATE_0"),
	HX_CSTRING("ROTATE_90"),
	HX_CSTRING("ROTATE_270"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TiledTile_obj,tileID),HX_CSTRING("tileID")},
	{hx::fsInt,(int)offsetof(TiledTile_obj,tilesetID),HX_CSTRING("tilesetID")},
	{hx::fsBool,(int)offsetof(TiledTile_obj,isFlipHorizontally),HX_CSTRING("isFlipHorizontally")},
	{hx::fsBool,(int)offsetof(TiledTile_obj,isFlipVertically),HX_CSTRING("isFlipVertically")},
	{hx::fsInt,(int)offsetof(TiledTile_obj,rotate),HX_CSTRING("rotate")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("tileID"),
	HX_CSTRING("tilesetID"),
	HX_CSTRING("isFlipHorizontally"),
	HX_CSTRING("isFlipVertically"),
	HX_CSTRING("rotate"),
	HX_CSTRING("resolveFlipAndRotation"),
	HX_CSTRING("resolveTilesetID"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TiledTile_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TiledTile_obj::FLIPPED_HORIZONTAL,"FLIPPED_HORIZONTAL");
	HX_MARK_MEMBER_NAME(TiledTile_obj::FLIPPED_VERTICAL,"FLIPPED_VERTICAL");
	HX_MARK_MEMBER_NAME(TiledTile_obj::FLIPPED_DIAGONAL,"FLIPPED_DIAGONAL");
	HX_MARK_MEMBER_NAME(TiledTile_obj::ROTATE_0,"ROTATE_0");
	HX_MARK_MEMBER_NAME(TiledTile_obj::ROTATE_90,"ROTATE_90");
	HX_MARK_MEMBER_NAME(TiledTile_obj::ROTATE_270,"ROTATE_270");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TiledTile_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TiledTile_obj::FLIPPED_HORIZONTAL,"FLIPPED_HORIZONTAL");
	HX_VISIT_MEMBER_NAME(TiledTile_obj::FLIPPED_VERTICAL,"FLIPPED_VERTICAL");
	HX_VISIT_MEMBER_NAME(TiledTile_obj::FLIPPED_DIAGONAL,"FLIPPED_DIAGONAL");
	HX_VISIT_MEMBER_NAME(TiledTile_obj::ROTATE_0,"ROTATE_0");
	HX_VISIT_MEMBER_NAME(TiledTile_obj::ROTATE_90,"ROTATE_90");
	HX_VISIT_MEMBER_NAME(TiledTile_obj::ROTATE_270,"ROTATE_270");
};

#endif

Class TiledTile_obj::__mClass;

void TiledTile_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.addons.editors.tiled.TiledTile"), hx::TCanCast< TiledTile_obj> ,sStaticFields,sMemberFields,
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

void TiledTile_obj::__boot()
{
	FLIPPED_HORIZONTAL= (int)-2147483648;
	FLIPPED_VERTICAL= (int)1073741824;
	FLIPPED_DIAGONAL= (int)536870912;
	ROTATE_0= (int)0;
	ROTATE_90= (int)1;
	ROTATE_270= (int)2;
}

} // end namespace flixel
} // end namespace addons
} // end namespace editors
} // end namespace tiled
