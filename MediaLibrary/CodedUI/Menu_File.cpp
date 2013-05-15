#include "Menu_File.h"


Menu_File::Menu_File(void)
{
	men_new = gcnew MenuItem();
	men_new->Header="_Neu";
	AddChild(men_new);
	men_open = gcnew MenuItem();
	men_open->Header="Öffnen";
	AddChild(men_open);
	AddChild(gcnew Separator());
	men_save = gcnew MenuItem();
	men_save->Header="Speichern";
	AddChild(men_save);
	men_saveas = gcnew MenuItem();
	men_saveas->Header="Speichern unter...";
	AddChild(men_saveas);
	AddChild(gcnew Separator());
	men_exit = gcnew MenuItem();
	AddChild(men_exit);

}



