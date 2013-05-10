#pragma once
#include "using.h"
#include "Menu_Main.h"

ref class MainWindow : public Window
{
public:
	MainWindow(void);

	GridLength ^gl_t;
	//GridLengthConverter ^glc;
	
	Grid ^grd_main;

	RowDefinition ^rd1_main;
	RowDefinition ^rd2_main;
	RowDefinition ^rd3_main;

	Menu ^men;
	
};

