#pragma once

#include <iostream>
#include "Object.h"
#include "Event.h"

using namespace std;

class Vector: public Object
{
protected:
	Object** beg;
	int size;
	int cur;
public:
	Vector() {};
	Vector(int);

	void Add();
	void Del();
	void Show();
	void HandleEvent(const TEvent& e);
	void Input() {};
	int operator() ();

	~Vector();
};