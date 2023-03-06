#include "MainForm.h"
#include "funtras.h"
using namespace System;

using namespace System::Windows::Forms;

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Calculadora::MainForm form;
	Application::Run(% form);
}
