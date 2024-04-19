#pragma once

#include "MainWindow.h"
#include "Form1.h"
#include "About.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Windows::Forms;
using namespace Projekt;
using namespace CppCLRWinformsProjekt;

enum ECurrentWindow
{
	WMain,
	WForm,
	WAbout
};

ref struct App
{
	static MainWindow^ MainWindowRef;
	static Form1^ Form1Ref;
	static About^ AboutRef;

	static ECurrentWindow CurrentWindow;

	static double VarA;
	static double VarB;
	static double VarX;
	static double VarY;
	static double VarZ;

	static void ChangeWindowTo(ECurrentWindow NewWindow);
};
