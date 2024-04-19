#include "pch.h"

using namespace System;

#include "Common.h"

#include "Form1.h"
#include "MainWindow.h"

using namespace System::Windows::Forms;

[STAThread]
int main(array<System::String^>^ args) {
	//ThisApp = gcnew App();

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew Projekt::MainWindow()); 
	return 0;
}