#include "using.h"
#include "MainWindow.h"

MainWindow::MainWindow(void)
{
	Width=640;
	Height=480;
	Title="MediaLibrary";
	grd_main = gcnew Grid_Main();
	AddChild(grd_main);
}

MainWindow::Grid_Main::Grid_Main()
{
	rd_main_0 = gcnew RowDefinition();
	rd_main_0->Height = *gcnew GridLength(20, GridUnitType::Pixel);
	RowDefinitions->Add(rd_main_0);
	rd_main_1 = gcnew RowDefinition();
	rd_main_1->Height = *gcnew GridLength(20, GridUnitType::Pixel);
	RowDefinitions->Add(rd_main_1);
	rd_main_2 = gcnew RowDefinition();
	RowDefinitions->Add(rd_main_2);
	
	men_main = gcnew Menu_Main();
	SetRow(men_main, 0);
	Children->Add(men_main);

	grd_body = gcnew Grid_Body();
	SetRow(grd_body, 2);
	Children->Add(grd_body);
}

MainWindow::Grid_Main::Grid_Body::Grid_Body(void)
{
	cd_body_0 = gcnew ColumnDefinition();
	cd_body_0->Width = *gcnew GridLength(150, GridUnitType::Pixel);
	ColumnDefinitions->Add(cd_body_0);
	cd_body_1 = gcnew ColumnDefinition();
	ColumnDefinitions->Add(cd_body_1);
	cd_body_2 = gcnew ColumnDefinition();
	cd_body_2->Width = *gcnew GridLength(181, GridUnitType::Pixel);
	ColumnDefinitions->Add(cd_body_2);

	tree_med = gcnew Tree_Media();
	SetColumn(tree_med, 0);
	Children->Add(tree_med);

	grd_con = gcnew Grid_Content();
	SetColumn(grd_con, 1);
	Children->Add(grd_con);

	tab_med = gcnew Tab_Media();
	SetColumn(tab_med, 2);
	Children->Add(tab_med);

	
}

MainWindow::Grid_Main::Grid_Body::Grid_Content::Grid_Content(void)
{
	rd_con0 = gcnew RowDefinition();
	rd_con0->Height = *gcnew GridLength(27, GridUnitType::Pixel);
	RowDefinitions->Add(rd_con0);
	rd_con1 = gcnew RowDefinition();
	RowDefinitions->Add(rd_con1);


	txtbox_search = gcnew TextBox();
	txtbox_search->Text="Suchen...";
	SetRow(txtbox_search, 0);
	Children->Add(txtbox_search);

	lv_res = gcnew List_Results(gcnew List<List<String^>^>());
	SetRow(lv_res, 1);
	Children->Add(lv_res);
}