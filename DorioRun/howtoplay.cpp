#include "frame.h"

Play::Play(const wxString& title)
	:wxFrame(NULL, wxID_ANY, title, wxDefaultPosition)
{
	
	Connect(wxEVT_PAINT,wxPaintEventHandler(Play::OnPaint));
	Connect(wxID_button1, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Play::OnClick));
}

void Play::OnPaint(wxPaintEvent& event)
{
	
	wxPaintDC dc(this);
	wxFont *font;
	font= new wxFont(25, wxFONTFAMILY_SCRIPT , wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD);
	dc.SetFont(*font);
	dc.SetPen(wxPen("#000000",10,wxPENSTYLE_SOLID));
	dc.DrawText(wxT("How To Play"),563,100);
	dc.DrawRectangle(100,200,1166,500);
}

Play::Button(const wxString& title)
{
	Connect(wxID_button1, wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(Play::OnClick));
}

void Play::OnClick(wxCommandEvent& event)
{
	
}