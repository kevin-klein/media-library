#pragma once
#include "using.h"

ref class File_Menu : public Menu
{
public:
	File_Menu(void);

	MenuItem ^men_new, ^men_open, ^men_save, ^men_saveas, ^men_exit;

	
};
