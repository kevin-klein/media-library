#include "using.h"

ref class Tree_Media : public TreeView
{
public:
	Tree_Media();

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

	Tree_Audio ^tree_aud;
	Tree_Video ^tree_vid;


};