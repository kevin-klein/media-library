#pragma once
#include "using.h"

ref class Menu_File : public MenuItem
{
public:
	MenuItem ^men_new, ^men_open, ^men_save, ^men_saveas, ^men_exit;

	Menu_File(void)
	{
		men_new = gcnew MenuItem();
		men_new->Header="_Neu";
		men_open = gcnew MenuItem();
		men_open->Header="Öffnen";
		men_save = gcnew MenuItem();
		men_save->Header="Speichern";
		men_saveas = gcnew MenuItem();
		men_saveas->Header="Speichern unter...";
		men_exit = gcnew MenuItem();

		AddChild(men_new);
		AddChild(men_open);
		AddChild(gcnew Separator());
		AddChild(men_save);
		AddChild(men_saveas);
		AddChild(gcnew Separator());
		AddChild(men_exit);

		
	}
	
};

ref class Menu_Main : public Menu
{
public:
	Menu_File ^men_file;
	MenuItem ^men_edit;
	MenuItem ^men_help, ^men_showhelp, ^men_about;

	Menu_Main(void)
	{
		men_file = gcnew Menu_File();
		men_file->Header="_Datei";
		AddChild(men_file);
	}


};


