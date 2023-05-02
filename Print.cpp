#include <iostream>
#include <string>
#include "Object.h"
#include "Print.h"

using namespace std;

Print::Print()
{
	title = "";
	author = "";
}

Print::Print(string t, string a)
{
	title = t;
	author = a;
}

Print::Print(const Print& p)
{
	title = p.title;
	author = p.author;
}

void Print::Set_title(const string t)
{
	title = t;
}

void Print::Set_author(const string a)
{
	author = a;
}

string Print::Get_author()
{
	return author;
}
string Print::Get_title()
{
	return title;
}

Print& Print:: operator=(const Print& p)
{
	title = p.title;
	author = p.author;
	return *this;
}

void Print::Show()
{
	cout << "Author " << author << endl;
	cout << "Title " << title << endl;
}
void Print::Input()
{
	cout << "\nAuthor "; getline(cin >> ws, author);
	cout << "\nTitle"; getline(cin >> ws, title);
}
void Print::HandleEvent(const TEvent& e)
{
	if (e.what == evMessage)
	{
		switch (e.command)
		{
		case cmGet: 
		{
		cout << "title" << Get_title() << endl;
		break;
		}
		}
	}
}