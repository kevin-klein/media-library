#pragma once
#include "using.h"
#include "Menu.h"
#include "Tree_Media.h"


ref class Grid_Body : public Grid
{
public:
	Grid_Body();
	ColumnDefinition ^cd_body_1, ^cd_body_2, ^cd_body_3;

	Tree_Media ^tree_med;
};



ref class MainWindow : public Window
{
public:
	MainWindow(void);

	ref class Grid_Main : public Grid
	{
	public:
		Grid_Main();
		RowDefinition ^rd_main_1, ^rd_main_2, ^rd_main_3;

		Menu_Main ^men_main;
		Grid_Body ^grid_body;
	};

	Grid_Main ^grid_main;
	
};


