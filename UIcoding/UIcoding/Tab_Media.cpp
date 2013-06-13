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

	
	List<String^> ^drives = gcnew List<String^>;
	for each (String ^drive in Directory::GetLogicalDrives())
	{
		drives->Add(drive);
	}

	String ^output = gcnew String("");
	for each (String ^d in drives)
	{
		DriveInfo ^di = gcnew DriveInfo(d);
		output+=di->VolumeLabel;
		output+="\n";
		output+=d+="\n";
		MessageBox::Show(output);


		IEnumerable<String^>^ dirs;
		try
		{
			dirs = Directory::EnumerateDirectories(d);
			for each (String ^dir in Directory::EnumerateDirectories(d))
			{
				output+=d+=dir+="\n";
			}
		}
		catch(IOException ^e)
		{
			//Log errors
		}


		

		
	}
	MessageBox::Show(output);
}

Tab_Media::Tab_Import::Tree_Import::Tree_Import()
{
}

Tab_Media::Tab_Export::Tab_Export(void)
{
	Header="Export";
}