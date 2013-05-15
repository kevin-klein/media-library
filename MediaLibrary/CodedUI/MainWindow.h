#pragma once
#include "using.h"
#include "Menu.h"

ref class Grid_Main : public Grid
{
public:
	Grid_Main();

	Menu_Main ^men_main;
};

ref class MainWindow : public Window
{
public:
	MainWindow(void);

	Grid_Main ^grd_main;
};

