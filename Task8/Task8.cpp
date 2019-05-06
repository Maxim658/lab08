#include "pch.h"
#include <iostream>
#include <vector>
#include "Student.h"
using namespace std;


void show_variants()
{
	cout << "Menu:" << endl << "1 - to add student" << endl << "2 - to delete student by index" << endl << "3 - to show all students" << endl;
	cout << "4 - to clear vector" << endl << "5 - to show all the students of 1-st course" << endl << "Any other number to exit" << endl;
}


int main()
{
	system("chcp 1251");
	system("cls");
	vector<Student> vec;
	
	while (1)
	{
		show_variants();
		int choice;
		cin >> choice;
		if (cin.fail())
		{
			cout << "Choice should be integer"<< endl;
			break;
		}
		if (choice == 1)
		{
			Student S(0);
			vec.push_back(S);
		}
		else if (choice == 2)
		{
			int index;
			cout << "Enter the index: ";
			cin >> index;
			if (index < vec.size())
				vec.erase(vec.begin() + index);
			else
				cout << "element doesnt exist" << endl;
		}
		else if (choice == 3)
		{
			if (vec.empty() != true)
			{
				cout << "Vector: " << endl;
				for (int i = 0; i < vec.size(); i++)
					vec[i].print();
				cout << endl;
			}
			else
				cout << "Vector is clear" << endl;
		}
		else if (choice == 4)
		{
			vec.clear();
		}
		else if (choice == 5)
		{
			cout << "1-st Course: " << endl;
			for (int i = 0; i < vec.size(); i++)
				if (vec[i].get_course() == 1)
					vec[i].print();
			cout << endl;
		}
		else
			break;
	}
}
