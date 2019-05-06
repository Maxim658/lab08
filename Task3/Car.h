#pragma once
#include <iostream>
using namespace std;

class Car
{
private:
	bool clean;
	char name[20];
	char color[10];
public:
	Car();
	Car(int arg);
	void Clean();
	bool Get_Clean();
	void print();
};