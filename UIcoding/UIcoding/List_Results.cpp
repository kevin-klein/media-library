#include "List_Results.h"

List_Results::List_Results(List<String ^> ^cols, List<List<String^>^> ^data)
{
	gv = gcnew GridView();
	gvcc = gcnew GridViewColumnCollection();
	GridViewColumn ^gvc = gcnew GridViewColumn();
	gvc->Header="Foo";
	gvc->Width=100;
	gv->Columns->Add(gvc);
	
	/*
	for each (String ^col in cols)
	{
		GridViewColumn ^gvc = gcnew GridViewColumn();
		gvc->Header = col;
		gvc->Width=100;
		gv->Columns->Add(gvc);
	}
	*/
	View = gv;
	AddChild(gvcc);
	//ItemsSource=data;
	
}
