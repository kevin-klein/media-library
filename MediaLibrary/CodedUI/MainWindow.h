#pragma once
#include "using.h"
#include "Menu.h"

ref class Grid_Main : public Grid
{
public:
	Menu_Main ^men_main;

	Grid_Main()
	{
		men_main = gcnew Menu_Main();
		SetRow(men_main, 0);
		Children->Add(men_main);
	}
};

ref class MainWindow : public Window
{
public:
	Grid_Main ^grd_main;

	MainWindow(void)
	{
		Width=640;
		Height=480;
		Title="MediaLibrary";

		grd_main = gcnew Grid_Main();
		AddChild(grd_main);
	}
};

