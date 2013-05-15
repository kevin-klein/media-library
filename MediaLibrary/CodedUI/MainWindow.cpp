#include "using.h"
#include "MainWindow.h"


Grid_Main::Grid_Main()
{
	men_main = gcnew Menu_Main();
	SetRow(men_main, 0);
	Children->Add(men_main);
}


MainWindow::MainWindow(void)
{
	Width=640;
	Height=480;
	Title="MediaLibrary";

	grd_main = gcnew Grid_Main();
	AddChild(grd_main);
}



