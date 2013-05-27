#include "Program.h"


Program::Program(void)
{
	app = gcnew Application(); 
	wnd = gcnew MainWindow();
	wnd->Title="MediaLibrary";
	app->Run(wnd);
}
