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
	cout << "�������� ������: ";
	cin >> name;
	cout << "���� ������: ";
	cin >> color;
	cout << "����� �� ������ 0/1: ";
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