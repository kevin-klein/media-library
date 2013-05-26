#include "using.h"
#include "MainWindow.h"

Grid_Body::Grid_Body()
{
	cd_body_1 = gcnew ColumnDefinition();
	cd_body_1->Width = *gcnew GridLength(150, GridUnitType::Pixel);
	ColumnDefinitions->Add(cd_body_1);
	cd_body_2 = gcnew ColumnDefinition();
	ColumnDefinitions->Add(cd_body_2);
	cd_body_3 = gcnew ColumnDefinition();
	cd_body_3->Width = *gcnew GridLength(181, GridUnitType::Pixel);
	ColumnDefinitions->Add(cd_body_3);

	tree_med = gcnew Tree_Media();
	SetColumn(tree_med, 0);
	Children->Add(tree_med);
}

MainWindow::Grid_Main::Grid_Main()
{
	rd_main_1 = gcnew RowDefinition();
	rd_main_1->Height = *gcnew GridLength(20, GridUnitType::Pixel);
	RowDefinitions->Add(rd_main_1);
	rd_main_2 = gcnew RowDefinition();
	RowDefinitions->Add(rd_main_2);

	men_main = gcnew Menu_Main();
	SetRow(men_main, 0);
	Children->Add(men_main);

	grid_body = gcnew Grid_Body();
	SetRow(grid_body, 1);
	Children->Add(grid_body);

}


MainWindow::MainWindow(void)
{
	Width=640;
	Height=480;
	Title="MediaLibrary";
	grid_main = gcnew Grid_Main();
	AddChild(grid_main);
}



