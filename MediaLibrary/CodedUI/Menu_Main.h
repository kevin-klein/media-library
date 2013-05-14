#pragma once
#include "using.h"
#include "Menu_File.h"

ref class Menu_Main : public Menu
{
public:
	Menu_Main(void);

	Menu_File ^men_file;
	MenuItem ^men_edit;
	MenuItem ^men_help, ^men_showhelp, ^men_about;
};


