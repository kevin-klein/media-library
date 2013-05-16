#include "using.h"
#include "MainWindow.h"

Grid_Search::Grid_Search()
{
}

MainWindow::Grid_Main::Grid_Main()
{
	men_main = gcnew Menu_Main();
	SetRow(men_main, 0);
	Children->Add(men_main);

	rd_main_1 = gcnew RowDefinition;
	rd_main_1->Height = gcnew GridLength(20, GridUnitType::Pixel);
	rd_main_2 = gcnew RowDefinition();
	rd_main_3 = gcnew RowDefinition();
}


MainWindow::MainWindow(void)
{
	Width=640;
	Height=480;
	Title="MediaLibrary";

	grd_main = gcnew Grid_Main();
	AddChild(grd_main);
}



