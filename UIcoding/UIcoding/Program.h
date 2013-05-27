#pragma once
#include "MainWindow.h"

ref class Program
{
public:
	Program(void);

	static Application ^app;
	static MainWindow ^wnd;

	static void Exit();
};

