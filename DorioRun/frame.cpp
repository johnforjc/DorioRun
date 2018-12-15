#include"frame.h"

frame::frame(const wxString& title)
	:wxFrame(NULL, ID_FRAME, title, wxDefaultPosition, wxSize(700, 500))
{
	Centre();
}

