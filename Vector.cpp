#include <iostream>
#include "Vector.h"
#include "Object.h"
#include "Print.h"
#include "Magazin.h"
#include "Event.h"

using namespace std;

Vector::Vector(int n)
{
	beg = new Object * [n];
	cur = 0;
	size = n;
}

Vector::~Vector()
{
	if(beg != 0) delete[] beg;
	beg = 0;
}

void Vector::Add()
{
	Object* o;
	cout << "" << endl;
	cout << "1) Print" << endl;
	cout << "2) Magazin" << endl;
	int y;
	cin >> y;
	if (y == 1)
	{
		Print* p = new Print;
		p->Input();
		o = p;
		if (cur < size)
		{
			beg[cur] = o;
			cur++;
		}
		else
		{
			if (y == 2)
			{
				Magazin* m = new Magazin;
				m->Input();
				o = m;
				if (cur < size)
				{
					beg[cur] = o;
					cur++;
				}
			}
		}
	}
}

void Vector::Show()
{
	if (cur == 0) cout << "Empty" << endl;
	Object** o = beg;
	for (int i = 0; i < cur; i++)
	{
		(*o)->Show();
		o++;
	}
}

void Vector::HandleEvent(const TEvent& e)
{
	if (e.what == evMessage)
	{
		Object** p = beg;
		for (int i = 0; i < cur; i++)
		{
			(*p)->HandleEvent(e);
			p++;
		}
	}
}

int Vector::operator()()
{
	return cur;
}

void Vector::Del()
{
	if (cur == 0) return;
	delete beg[cur];
	cur--;
}