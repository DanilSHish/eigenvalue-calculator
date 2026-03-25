#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]

int main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Arr::MyForm form;
	Application::Run(% form);
}