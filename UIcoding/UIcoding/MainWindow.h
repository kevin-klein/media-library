#pragma once
#include "using.h"
#include "Menu.h"
#include "Tree_Media.h"
#include "List_Results.h"

ref class MainWindow : public Window
{
public:
	MainWindow(void);

	ref class Grid_Main : public Grid
	{
	public:
		Grid_Main();
		RowDefinition ^rd_main_0, ^rd_main_1, ^rd_main_2;
		Menu_Main ^men_main;

		ref class Grid_Body : public Grid
		{
		public:
			Grid_Body();
			ColumnDefinition ^cd_body_0, ^cd_body_1, ^cd_body_2;
			Tree_Media ^tree_med;

			ref class Grid_Content : public Grid
			{
			public:
				Grid_Content();
				RowDefinition ^rd_con0, ^rd_con1;
				TextBox ^txtbox_search;
				List_Results ^lv_res;
			};
			Grid_Content ^grd_con;
		};
		Grid_Body ^grd_body;
	};
	Grid_Main ^grd_main;
};
