#include "pch.h"
#include "About.h"

System::Void Projekt::About::linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
{
    System::Diagnostics::Process::Start("https://alexuslexus.github.io/projekt_portfolio/");
}
