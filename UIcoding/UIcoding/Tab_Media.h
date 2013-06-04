#pragma once
#include "using.h"

ref class Tab_Media : public TabControl
{
public:
	Tab_Media(void);

	ref class Tab_Play : public TabItem
	{
	public:
		Tab_Play();
	};

	ref class Tab_Import : public TabItem
	{
	public:
		Tab_Import();
	};

	ref class Tab_Export : public TabItem
	{
	public:
		Tab_Export();
	};

	Tab_Play ^tab_play;
	Tab_Import ^tab_import;
	Tab_Export ^tab_export;
};

