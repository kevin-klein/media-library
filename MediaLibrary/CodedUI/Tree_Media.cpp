#include "Tree_Media.h"

Tree_Media::Tree_Media()
{
	AddChild(gcnew Tree_AllMedia());
	AddChild(gcnew Tree_Playlist());
	AddChild(gcnew Tree_Audio());
	AddChild(gcnew Tree_Video());
	AddChild(gcnew Tree_Program());
}

Tree_Media::Tree_AllMedia::Tree_AllMedia()
{
	Header="Medien";
}

Tree_Media::Tree_Playlist::Tree_Playlist()
{
	Header="Wiedergabelisten";
}

Tree_Media::Tree_Audio::Tree_Audio()
{
	tree_mus = gcnew TreeViewItem();
	tree_mus->Header="Musik";
	AddChild(tree_mus);
	tree_audbook = gcnew TreeViewItem();
	tree_audbook->Header="Hörbücher";
	AddChild(tree_audbook);
	Header="Audio";
}

Tree_Media::Tree_Video::Tree_Video()
{
	tree_tvshow = gcnew TreeViewItem();
	tree_tvshow->Header="Serien";
	AddChild(tree_tvshow);
	tree_movie = gcnew TreeViewItem();
	tree_movie->Header="Filme";
	AddChild(tree_movie);
	Header="Video";
}

Tree_Media::Tree_Program::Tree_Program()
{
	tree_installed = gcnew TreeViewItem();
	tree_installed->Header="Installiert";
	AddChild(tree_installed);
	tree_installmedia = gcnew TreeViewItem();
	tree_installmedia->Header="Installationsmedien";
	AddChild(tree_installmedia);
	Header="Programme";
}


