#include "VuePrincipal.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    VuePrincipal::MyForm form;
    Application::Run(% form);
}
