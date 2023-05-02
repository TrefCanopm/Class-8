#pragma once

#include <iostream>
#include "Vector.h"
#include "Event.h"

using namespace std;

class Dialog: public Vector
{
protected:
	int EndState;
public:
	Dialog();

	virtual void GetEvent(TEvent& event);
	virtual int Execute();
	virtual void HandleEvent(TEvent& event);
	virtual void ClearEvent(TEvent& event);
	int Valid();
	void EndExec();

	~Dialog();
};