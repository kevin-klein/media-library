#include "Menu.h"
#include "Program.h"

void Menu_Main::men_exit_Click(Object^ sender, RoutedEventArgs ^e)
{
	Program::app->Shutdown(0);
}