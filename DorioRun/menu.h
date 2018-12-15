#include<wx/wx.h>

class menuPanel:public wxPanel
{
    public:
        wxButton *play_Game, *how_To_Play, *exit_button;
        menuPanel(wxFrame& induk);

        void onPlayGameClicked(wxCommandEvent&);
        void onHowToPlayClicked(wxCommandEvent&);
        void onExitClicked(wxCommandEvent&);
};

const int ID_PLAYGAME = 100;
const int ID_HTP = 101;
const int ID_EXT = 102;