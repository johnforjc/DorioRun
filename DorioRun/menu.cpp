#include "menu.h"

menuPanel::menuPanel(wxFrame& induk)
	: wxPanel(NULL, wxID_ANY, wxDefaultPosition, wxSize(700, 500))
{
	play_Game=new wxButton(this, ID_PLAYGAME, wxT("Play Game"), wxPoint(300, 275));
	how_To_Play=new wxButton(this, ID_HTP, wxT("How to Play"), wxPoint(300, 305));
	exit_button=new wxButton(this, ID_EXT, wxT("Exit Game"), wxPoint(300, 335));

	Connect(ID_PLAYGAME, wxEVT_BUTTON, wxCommandEventHandler(menuPanel::onPlayGameClicked));
	Connect(ID_HTP, wxEVT_BUTTON, wxCommandEventHandler(menuPanel::onHowToPlayClicked));
	Connect(ID_EXT, wxEVT_BUTTON, wxCommandEventHandler(menuPanel::onExitClicked));
}

void menuPanel::onPlayGameClicked(wxCommandEvent&){

}

void menuPanel::onHowToPlayClicked(wxCommandEvent&){

}

void menuPanel::onExitClicked(wxCommandEvent&){
    Close(true);
}