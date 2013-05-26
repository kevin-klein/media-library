#include <windows.h>
#include "MainWindow.h"
#include "App.h"

[STAThreadAttribute()]
int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hprevInst, LPSTR lpCmd, int nCMD)
{
	App ^app = gcnew App(); 
	MainWindow ^wnd = gcnew MainWindow();
	app->Run(wnd);
}

