#include "Tab_Media.h"

Tab_Media::Tab_Media(void)
{
	tab_play = gcnew Tab_Play();
	AddChild(tab_play);

	tab_import = gcnew Tab_Import();
	AddChild(tab_import);

	tab_export = gcnew Tab_Export();
	AddChild(tab_export);
}

Tab_Media::Tab_Play::Tab_Play(void)
{
	Header="Wiedergabe";
}

Tab_Media::Tab_Import::Tab_Import(void)
{
	Header="Import";
}

Tab_Media::Tab_Export::Tab_Export(void)
{
	Header="Export";
}