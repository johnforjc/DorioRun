#include <wx\wx.h>
#include "menu.h"

class frame:public wxFrame{
public:
	frame(const wxString &title);
private:
	menuPanel *menu;
};

const int ID_FRAME = 99;