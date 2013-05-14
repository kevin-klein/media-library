#pragma once
#include "using.h"

ref class Menu_File : public Menu
{
public:
	Menu_File(void);

	MenuItem ^men_new, ^men_open, ^men_save, ^men_saveas, ^men_exit;

	
};
