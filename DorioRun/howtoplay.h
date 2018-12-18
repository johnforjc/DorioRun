#include <wx/wx.h>
#include <wx/sizer.h>
#include <wx/richtext/richtextbuffer.h>

class Play : public wxFrame
{
public:
	Play(const wxString& title);
	void OnPaint(wxPaintEvent& event);
	Button(const wxString& title);
	void OnClick (wxCommandEvent& event);
};

const int wxID_button1 = 104;