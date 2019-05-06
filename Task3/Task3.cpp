#include "pch.h"
#include <queue>
#include "Car.h"


void show_variants()
{
	cout << "Menu:" << endl << "1 - to add car" << endl << "2 - to clean car" << endl << "3 - to show all" << endl;
	cout << "4 - to clear all" << endl << "Any other number to exit" << endl;
}

void print_queue(queue<Car> q)
{
	while (!q.empty())
	{
		q.front().print();
		cout << endl;
		q.pop();
	}
	cout << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");
	queue<Car> Cars;

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
			Car C(0);
			Cars.push(C);
		}
		else if (choice == 2)
		{
			if (Cars.size() > 0)
			{
				Cars.front().Clean();
				Cars.pop();
			}
			else
				cout << "car doesnt exist" << endl;
		}
		else if (choice == 3)
		{
			if (Cars.empty() != true)
			{
				cout << "Очередь: " << endl;
				cout << "Количество машин в очереди: " << Cars.size() << endl;
				cout << "Вот они: " << endl;
				print_queue(Cars);
				cout << endl;
			}
			else
				cout << "List is clear" << endl;
		}
		else if (choice == 4)
		{
			for (int i = 0; i < Cars.size(); i++)
				Cars.pop();
		}
		else
			break;
	}
}
