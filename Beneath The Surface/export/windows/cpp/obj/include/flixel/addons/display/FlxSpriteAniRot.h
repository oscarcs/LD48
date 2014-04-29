#ifndef INCLUDED_flixel_addons_display_FlxSpriteAniRot
#define INCLUDED_flixel_addons_display_FlxSpriteAniRot

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS3(flixel,addons,display,FlxSpriteAniRot)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS4(flixel,system,layer,frames,FlxSpriteFrames)
HX_DECLARE_CLASS3(flixel,util,loaders,CachedGraphics)
namespace flixel{
namespace addons{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  FlxSpriteAniRot_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef FlxSpriteAniRot_obj OBJ_;
		FlxSpriteAniRot_obj();
		Void __construct(Dynamic AnimatedGraphic,int Rotations,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxSpriteAniRot_obj > __new(Dynamic AnimatedGraphic,int Rotations,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxSpriteAniRot_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxSpriteAniRot"); }

		Array< ::Dynamic > cached;
		Array< ::Dynamic > framesCache;
		Float rotations;
		int angleIndex;
		virtual Void destroy( );

		virtual Void update( );

		virtual Void calcFrame( hx::Null< bool >  RunOnCpp);

};

} // end namespace flixel
} // end namespace addons
} // end namespace display

#endif /* INCLUDED_flixel_addons_display_FlxSpriteAniRot */ 
