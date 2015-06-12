// simple_sudoku.cpp : main project file.
#include "stdafx.h"
#include "Form1.h"
#include "adpcppf.h"

Intel::Adp::Application * myApplication = NULL;
//const ADP_APPLICATIONID myApplicationId = {{0x79533F14,0xA7A04DF4,0xB9C5749C,0x072B3B92}};  //demo code
//const ADP_APPLICATIONID myApplicationId = ADP_DEBUG_APPLICATIONID;  //debug code
const ADP_APPLICATIONID myApplicationId = {{0xDFF95ED7,0xE9A44235,0xB255EB94,0x9403124B}};  //full app code

using namespace simple_sudoku;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	System::Windows::Forms::Application::EnableVisualStyles();
	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	//try {

	//example that works in a console example app//////////
		//Intel::Adp::Application *pBasicSampleApp = NULL;
		//pBasicSampleApp = new Intel::Adp::Application(ADP_DEBUG_APPLICATIONID);
		/////////////////

		//myApplication = new Intel::Adp::Application( myApplicationId );
	//myApplication = new Intel::Adp::Application( ADP_DEBUG_APPLICATIONID );
		System::Windows::Forms::Application::Run(gcnew Form1());
	//} 

	//catch ()//AdpException& e) 
	//{
		//MessageBox::Show("Could not connect to ATDS.  Did you run 'Start ATDS'?  (Error code " + e.code().ToString() + ")");
	//}

	
	return 0;
}
