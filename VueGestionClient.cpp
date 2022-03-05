#include "VueGestionClient.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void AppliVueGestionClient() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    VueGestionClient::MyFormVueGestionClient form;
    Application::Run(% form);
}