#pragma once
#include "using.h"

ref class List_Results : public ListView
{
public:
	List_Results(List<List<String^>^> ^);

	GridView ^gv;
	GridViewColumnCollection ^gvcc;
	List<String ^> ^cols;

	List<ListViewItem ^> ^llvi;
};

