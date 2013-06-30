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
	AddChild(gcnew Tree_Import());
}

Tab_Media::Tab_Import::Tree_Import::Tree_Import()
{
	List<TreeViewItem^>^ tree_drives = gcnew List<TreeViewItem^>;

	String ^head = gcnew String("");
	List<DriveInfo^>^ active_drives = gcnew List<DriveInfo^>;

	for each (DriveInfo^ d in DriveInfo::GetDrives())
	{
		head="";
		TreeViewItem ^tvi = gcnew TreeViewItem();
		
		if(d->IsReady)
		{
			if(String::IsNullOrWhiteSpace(d->VolumeLabel))
			{
				if(d->DriveType==DriveType::Fixed)
					head+="Lokaler Datenträger ";
				else if(d->DriveType==DriveType::CDRom)
					head+="Optisches Laufwerk ";
				else if(d->DriveType==DriveType::Removable)
					head+="Wechseldatenträger ";
				else if(d->DriveType==DriveType::Network)
					head+="Netzlaufwerk ";
				else
					head+="Unbekanntes Laufwerk ";
			}
			else
				head+=d->VolumeLabel;
			active_drives->Add(d);
		}
		head+=d->Name;
		
		tvi->Header=head;
		AddChild(tvi);
	}

	for each(DriveInfo ^d in active_drives)
	{
		DirectoryInfo ^dir = d->RootDirectory;
		List<DirectoryInfo^> ^subdirs = gcnew List<DirectoryInfo^>;
		for each(DirectoryInfo ^subdir in dir->EnumerateDirectories())
		{
			subdirs->Add(subdir);
		}
	}	
}

Tab_Media::Tab_Export::Tab_Export(void)
{
	Header="Export";
}