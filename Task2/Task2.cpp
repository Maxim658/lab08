#include "pch.h"
#include <iostream>
#include <list>
#include "Complex.h"



void show_variants()
{
	cout << "Menu:" << endl << "1 - to add" << endl << "2 - to delete" << endl << "3 - to show all" << endl;
	cout << "4 - to clear all" << endl << "Any other number to exit" << endl;
}


int main()
{
	list<Complex> List;

	while (1)
	{
		show_variants();
		int choice;
		cin >> choice;
		if (cin.fail())
		{
			cout << "Choice should be integer" << endl;
			break;
		}
		if (choice == 1)
		{
			int im, re;
			cout << "Enter Real Part: ";
			cin >> re;
			cout << "Enter Imaginary Part: ";
			cin >> im;
			Complex C(im, re);
			List.push_back(C);
		}
		else if (choice == 2)
		{
			int index;
			cout << "Enter the index: ";
			cin >> index;
			if (index < List.size())
			{
				auto begin = List.begin();
				for (int i = 0; i < index; i++)
					++begin;
				List.erase(begin);
			}
			else
				cout << "element doesnt exist" << endl;
		}
		else if (choice == 3)
		{
			if (List.empty() != true)
			{
				cout << "List: " << endl;
				for (auto iter = List.begin(); iter != List.end(); iter++)
				{
					std::cout << *iter << "\t";
				}
				cout << endl;
			}
			else
				cout << "List is clear" << endl;
		}
		else if (choice == 4)
		{
			List.clear();
		}
		else
			break;
	}
}
