#ifndef CSOUNDSESSION_H
#define CSOUNDSESSION_H

#include <string>
using namespace std;

#include <csound.hpp>
#include <csPerfThread.hpp>

class CsoundSession : public Csound{

	string m_csd;
	CsoundPerformanceThread *m_pt;

public:

	CsoundSession(string const &csdFileName) : Csound() {
	m_pt = NULL;
	m_csd = "";
	if(!csdFileName.empty()){
		m_csd = csdFileName;
		startThread();
	}
};
	void startThread();
	void resetSession(string const &csdFileName);
	void stopPerformance();
	void mainLoop();

};

#endif