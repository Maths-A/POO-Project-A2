#include "VueGestionPersonnel.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void AppliVueGestionPersonnel() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    VueGestionPersonnel::MyFormVueGestionPersonnel form;
    Application::Run(% form);
}