#pragma once
#include <iostream>
#include <cmath>
using namespace std;


class Complex
{
private:
	int a;
	int b;

public:

	Complex();
	Complex(int im, int re);
	Complex(const Complex &obj);

	double Module();
	void Arguments();

	friend ostream& operator<< (ostream &out, const Complex &comp);
	friend istream& operator>> (istream &in, Complex &comp);
	~Complex();
};