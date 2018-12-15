#include "howtoplay.h"

Play::Play(const wxString& title)
	:wxFrame(NULL, wxID_ANY, title, wxDefaultPosition)
{
	Connect(wxEVT_PAINT,wxPaintEventHandler(Play::OnPaint));
}

void Play::OnPaint(wxPaintEvent& event)
{
	wxPaintDC dc(this);
	//font= new ;
	wxFont *font;
	font= new wxFont(25, wxFONTFAMILY_SCRIPT , wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD);
	dc.SetFont(*font);
	dc.SetPen(wxPen("#000000",10,wxPENSTYLE_SOLID));
	dc.DrawText(wxT("How To Play"),563,100);
	dc.DrawRectangle(100,200,1166,500);
}
	
