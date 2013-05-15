#include "using.h"
#include "MainWindow.h"


MainWindow::MainWindow(void)
{
	Width=640;
	Height=480;
	Title="MediaLibrary";
	
	grd_main = gcnew Grid();

	rd1_main = gcnew RowDefinition();
	//rd1_main->Height = gcnew GridLength(20);
	grd_main->RowDefinitions->Add(rd1_main);
	rd2_main = gcnew RowDefinition();
	grd_main->RowDefinitions->Add(rd2_main);
	rd3_main = gcnew RowDefinition();
	grd_main->RowDefinitions->Add(rd3_main);
	
	men = gcnew Menu_Main();

	Grid::SetRow(men, 0);
	grd_main->Children->Add(men);
	AddChild(grd_main);
}



