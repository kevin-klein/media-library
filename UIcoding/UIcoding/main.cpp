#include <windows.h>
#include "Program.h"

[STAThreadAttribute()]
int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hprevInst, LPSTR lpCmd, int nCMD)
{
	try
	{
		Program ^prog = gcnew Program();
	}
	catch(Exception ^e)
	{
		MessageBox::Show(e->GetType()+": \n"+e->Message);
	}
}
