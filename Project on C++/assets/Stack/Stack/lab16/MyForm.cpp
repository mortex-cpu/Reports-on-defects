#include "MyForm.h"
#include <Windows.h>
using namespace lab16;
using namespace System;
using namespace msclr::interop;
using namespace std;
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
