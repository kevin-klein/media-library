#include <windows.h>
#include "MainWindow.h"
#include "App.h"

[STAThreadAttribute()]
int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hprevInst, LPSTR lpCmd, int nCMD)
{
	MainWindow ^wnd = gcnew MainWindow();
	wnd->Title = "MediaLibrary";
	App ^app = gcnew App();
	app->Run(wnd);
}

