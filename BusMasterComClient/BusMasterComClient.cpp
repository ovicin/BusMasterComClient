#include "stdafx.h"
#include "Form1.h"
#include "BusMasterCOMWrapper\BusMasterCOMWrapper.h"
using namespace BusMasterComClient;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
// Enabling Windows XP visual effects before any controls are created

System::Windows::Forms::Application::EnableVisualStyles();
System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false); 

// Create the main window and run it
System::Windows::Forms::Application::Run(gcnew Form1());
return 0;

}