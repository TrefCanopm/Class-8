#include <iostream>
#include <string>
#include "Magazin.h"
#include "Print.h"

using namespace std;

Magazin::Magazin():Print()
{
	quantity = 0;
	genre = "";
}

Magazin::Magazin(string t, string a, int q, string g):Print(t, a)
{
	quantity = q;
	genre = g;
}

Magazin::Magazin(const Magazin& m)
{
	title = m.title;
	author = m.author;
	genre = m.genre;
	quantity = m.quantity;
}

void Magazin::Show()
{
	cout << "Quantity " << quantity << endl;
	cout << "Genre " << genre << endl;
}

void Magazin::Input()
{
	cout << "\nQuantity "; cin >> quantity;
	cout << "\nGenre "; getline(cin >> ws, genre);
}

int Magazin::Get_quantity()
{
	return quantity;
}

string Magazin::Get_genre()
{
	return genre;
}

void Magazin::Set_genre(const string g)
{
	genre = g;
}
void Magazin::Set_quantity(const int q)
{
	quantity = q;
}

Magazin& Magazin:: operator=(const Magazin& m)
{
	title = m.title;
	author = m.author;
	genre = m.genre;
	quantity = m.quantity;
	return *this;
}