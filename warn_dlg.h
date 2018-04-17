// -*- C++ -*-
//
// generated by wxGlade 0.8.0 on Sun Apr 15 23:27:14 2018
//
// Example for compiling a single file project under Linux using g++:
//  g++ MyApp.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp
//
// Example for compiling a multi file project under Linux using g++:
//  g++ main.cpp $(wx-config --libs) $(wx-config --cxxflags) -o MyApp Dialog1.cpp Frame1.cpp
//

#ifndef WARN_DLG_H
#define WARN_DLG_H

#include <wx/wx.h>
#include <wx/image.h>

// begin wxGlade: ::dependencies
// end wxGlade

// begin wxGlade: ::extracode
// end wxGlade



class WarnDlg: public wxDialog {
public:
	// begin wxGlade: WarnDlg::ids
	// end wxGlade

	WarnDlg(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos=wxDefaultPosition, const wxSize& size=wxDefaultSize, long style=wxDEFAULT_DIALOG_STYLE);
	int ShowDialog();

private:
	// begin wxGlade: WarnDlg::methods
	void set_properties();
	void do_layout();
	// end wxGlade
	bool canshow = true;
	wxStandardID retVal = wxID_CANCEL;
	void OnCloseDlg(wxCloseEvent& event);
	void OnYes(wxCommandEvent& event);
	void OnNo(wxCommandEvent& event);

protected:
	// begin wxGlade: WarnDlg::attributes
	wxButton* btnYes;
	wxButton* btnNo;
	wxCheckBox* checkbox_1;
	// end wxGlade
}; // wxGlade: end class
#endif // WARN_DLG_H
