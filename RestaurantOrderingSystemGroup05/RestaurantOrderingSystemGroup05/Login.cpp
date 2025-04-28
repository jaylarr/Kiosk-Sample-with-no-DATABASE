#include "Login.h"
#include "MainForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	RestaurantOrderingSystemGroup05::Login frm;
	Application::Run(% frm);
}