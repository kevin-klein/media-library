#pragma once
#include "using.h"
#include "Menu.h"

ref class Grid_Search : public Grid
{
public:
	Grid_Search();
	ColumnDefinition ^cd_search_1, ^cd_search_2;
};



ref class MainWindow : public Window
{
public:
	ref class Grid_Main : public Grid
	{
	public:
		Grid_Main();
		RowDefinition ^rd_main_1, ^rd_main_2, ^rd_main_3;


		Menu_Main ^men_main;

	};

	MainWindow(void);

	Grid_Main ^grd_main;
};

