#include "Menu_File.h"


File_Menu::File_Menu(void)
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



