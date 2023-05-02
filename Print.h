#pragma once

#include <iostream>
#include <string>
#include "Object.h"
#include "Event.h"

using namespace std;

class Print: public Object
{
protected:
	string title;
	string author;
public:
	Print();
	Print(string t, string a);
	Print(const Print&);

	void Show();
	void Input();
	void HandleEvent(const TEvent& e);

	string Get_title();
	string Get_author();

	void Set_title(const string t);
	void Set_author(const string a);

	Print& operator = (const Print&);

	~Print() {};
};