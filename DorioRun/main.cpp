#include "main.h"

IMPLEMENT_APP(MyApp)

bool MyApp::OnInit(){
	DorioRun = new frame("Dorio Run");
	menu = new menuPanel(MyApp);
	DorioRun->Show(true);
	
	return true;
}