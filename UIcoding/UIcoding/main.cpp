#include <windows.h>
#include "Program.h"

[STAThreadAttribute()]
int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hprevInst, LPSTR lpCmd, int nCMD)
{
	Program ^prog = gcnew Program();
}

