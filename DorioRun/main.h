#include <wx/wx.h>
#include"frame.h"

class MyApp:public wxApp{
public:
	frame *DorioRun;
	menuPanel *menu;
	virtual bool OnInit();
};