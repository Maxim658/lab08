#pragma once
#include "pch.h"
#include "Car.h"

Car::Car()
{
	strcpy_s(name, "N");
	strcpy_s(color, "N");
	clean = false;
}
Car::Car(int arg)
{
	cout << "Название машины: ";
	cin >> name;
	cout << "Цвет машины: ";
	cin >> color;
	cout << "Чиста ли машина 0/1: ";
	cin >> clean;
}
void Car::Clean()
{
	clean = true;
}
bool Car::Get_Clean()
{
	return clean;
}
void Car::print()
{
	cout << "name: " << name << " color: " << color << " clean: " << clean << endl;
}