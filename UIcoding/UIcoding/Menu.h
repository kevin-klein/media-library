#pragma once
#include "using.h"

/*
Files regarding the Menu class are:
Menu.h          - Declarations
Menu.cpp        - Constructors
Menu_Events.cpp - Event handling functions
*/

ref class Menu_Main : public Menu
{
public:
	ref class Menu_File : public MenuItem
	{
	public:
		Menu_File();

		MenuItem ^men_new, ^men_open, ^men_save, ^men_saveas, ^men_exit;
	};

	Menu_Main();

	Menu_File ^men_file;
	MenuItem ^men_edit;
	MenuItem ^men_help, ^men_showhelp, ^men_about;

	static void men_exit_Click(Object^, RoutedEventArgs^);
};
