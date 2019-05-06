#pragma once
#include "pch.h"
#include "Complex.h"

Complex::Complex() { }
Complex::Complex(int im, int re)
{
	a = im;
	b = re;
}
Complex::Complex(const Complex &obj)
{
	a = obj.a;
	b = obj.b;
}

double Complex::Module()
{
	return sqrt(a * a + b * b);
}
void Complex::Arguments()
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
Complex::~Complex() {}

ostream& operator<< (ostream &out, const Complex &comp)
{
	out << comp.a << " + (" << comp.b << ")i";
	return out;
}
istream& operator>> (istream &in, Complex &comp)
{
	in >> comp.a;
	in >> comp.b;
	return in;
}