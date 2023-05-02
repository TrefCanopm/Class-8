#include <iostream>
#include "Dialog.h"
#include "Event.h"
#include "Object.h"
#include "Print.h"
#include "Vector.h"
#include "Magazin.h"
using namespace std;

int main()
{
	Print* p = new Print;
	p->Input();
	p->Show();

	Magazin* m = new Magazin;
	m->Input();
	m->Show();

	Vector v(10);
	Object* o = p;
	v.Add();
	v.Show();
	v.Del();

	Dialog D;
	D.Execute();
}