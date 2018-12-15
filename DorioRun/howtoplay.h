#include <wx/wx.h>
#include <wx/sizer.h>
#include <wx/richtext/richtextbuffer.h>

class Play : public wxFrame
{
public:
	Play(const wxString& title);
	void OnPaint(wxPaintEvent& event);
};

