#pragma once
#include <iostream>
using namespace std;

class Student
{
protected:
	char fac[20];
	char spec[30];
	char name[15];
	int course;
	int group;
public:
	Student();
	Student(int arg);
	Student(const char *f, const char *s, const char *n, int co, int g);
	void change_course(int num);
	int get_course();
	void change_group(int num);
	void print();
};