#pragma once
#include "using.h"

ref class List_Results : public ListView
{
public:
	List_Results(List<String^>^, List<List<String^>^> ^);

	GridView ^gv;
	GridViewColumnCollection ^gvcc;


};

