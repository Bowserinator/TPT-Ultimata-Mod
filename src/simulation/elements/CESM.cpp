#include "simulation/ElementCommon.h"

//#TPT-Directive ElementClass Element_CESM PT_CESM 247
Element_CESM::Element_CESM()
{
	Identifier = "DEFAULT_PT_CESM";
	Name = "CESM";
	Colour = PIXPACK(0xFFFFFF);
	MenuVisible = 1;
	MenuSection = SC_SPECIAL;
	Enabled = 1;

	// element properties here

	Update = &Element_CESM::update;
	Graphics = &Element_CESM::graphics;
}

//#TPT-Directive ElementHeader Element_CESM static int update(UPDATE_FUNC_ARGS)
int Element_CESM::update(UPDATE_FUNC_ARGS)
{
	// update code here

	return 0;
}

//#TPT-Directive ElementHeader Element_CESM static int graphics(GRAPHICS_FUNC_ARGS)
int Element_CESM::graphics(GRAPHICS_FUNC_ARGS)
{
	// graphics code here
	// return 1 if nothing dymanic happens here

	return 0;
}

Element_CESM::~Element_CESM() {}
