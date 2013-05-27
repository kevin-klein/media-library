#include "using.h"

ref class Tree_Media : public TreeView
{
public:
	Tree_Media();

	ref class Tree_AllMedia : public TreeViewItem
	{
	public:
		Tree_AllMedia();
	};

	ref class Tree_Playlist : public TreeViewItem
	{
	public:
		Tree_Playlist();
	};

	ref class Tree_Audio : public TreeViewItem
	{
	public:
		Tree_Audio();
		TreeViewItem ^tree_mus, ^tree_audbook;
	};

	ref class Tree_Video : public TreeViewItem
	{
	public:
		Tree_Video();
		TreeViewItem ^tree_tvshow, ^tree_movie;
	};

	ref class Tree_Program : public TreeViewItem
	{
	public:
		Tree_Program();
		TreeViewItem ^tree_installed, ^tree_installmedia;
	};

};