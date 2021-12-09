#include "GUI.h"

#include<Windows.h>
using namespace GUIProject;


int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew GUI());
	return 0;
}

