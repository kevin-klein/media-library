#include "Tree_Media.h"

Tree_Media::Tree_Audio::Tree_Audio()
{
	tree_mus = gcnew TreeViewItem();
	tree_mus->Header="_Musik";
	AddChild(tree_mus);
	tree_audbook = gcnew TreeViewItem();
	tree_audbook->Header="_Hörbuch";
	AddChild(tree_audbook);
}

Tree_Media::Tree_Video::Tree_Video()
{
	tree_tvshow = gcnew TreeViewItem();
	tree_tvshow->Header="_Serie";
	AddChild(tree_tvshow);
	tree_movie = gcnew TreeViewItem();
	tree_movie->Header="_Film";
	AddChild(tree_movie);
}

Tree_Media::Tree_Media()
{
	tree_aud = gcnew Tree_Audio();
	tree_aud->Header="_Audio";
	AddChild(tree_aud);
	tree_vid = gcnew Tree_Video();
	tree_vid->Header="_Video";
	AddChild(tree_vid);
}
