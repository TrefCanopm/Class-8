#pragma once

#include <iostream>
#include <string>
#include "Print.h"

using namespace std;

class Magazin : public Print
{
protected:
	int quantity;
	string genre;
public:
	Magazin();

	void Show();
	void Input();

	Magazin(string t, string a, int q, string g);
	Magazin(const Magazin&);
	int Get_quantity();
	string Get_genre();

	void Set_genre(const string g);
	void Set_quantity(const int q);

	Magazin& operator = (const Magazin& m);

	~Magazin() {};
};