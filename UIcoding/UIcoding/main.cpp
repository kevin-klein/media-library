#include <windows.h>
#include "MainWindow.h"
#include "Program.h"

[STAThreadAttribute()]
int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hprevInst, LPSTR lpCmd, int nCMD)
{
	auto app = gcnew Application(); 
	auto wnd = gcnew MainWindow();
	wnd->Title="MediaLibrary";
	app->Run(wnd);
}

