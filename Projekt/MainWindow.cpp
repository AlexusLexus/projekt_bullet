
#include "pch.h"
#include "MainWindow.h"
#include "About.h"

using namespace Projekt;

System::Void Projekt::MainWindow::aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	About^ AboutWindow = gcnew About();
	AboutWindow->Show();
}

System::Void Projekt::MainWindow::trackBar1_DragDrop(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e)
{
	
}

System::Void Projekt::MainWindow::trackBar1_ValueChanged(System::Object^ sender, System::EventArgs^ e)
{
	label2->Text = trackBar1->Value + "/" + trackBar1->Maximum;
}
