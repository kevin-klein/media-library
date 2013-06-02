#include "List_Results.h"



List_Results::List_Results(List<List<String^>^> ^content)
{

	gv = gcnew GridView();

	if(content->Count!=0)
	{
		cols = content[0];
		content->RemoveAt(0);
		for each (String ^col in cols)
		{
			GridViewColumn ^gvc = gcnew GridViewColumn();
			gvc->Header = col;
			gvcc->Add(gvc);
		}	
	
		llvi = gcnew List<ListViewItem ^>;

		for (int i = 0; i < content->Count; i++)
		{
		
		}

	}
	
	View = gv;
}
