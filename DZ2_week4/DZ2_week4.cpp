#include <iostream>
#include <windows.h>
using namespace std;

//enum Direction { North, West, South, East };


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int number = 0;
	int digit_1 = 0;
	int digit_2 = 0;
	int digit_3 = 0;
	int digit_4 = 0;

	cout << "ВВедите четырёхзначное число: ";
	cin >> number;
	cout << endl;

	if ((number < 1000) || (number > 9999))
	{
		cout << "Неверное значение!" << endl;
	}
	else
	{
		digit_4 = number % 10;
		digit_3 = (number % 100) / 10;
		digit_2 = (number % 1000) / 100;
		digit_1 = (number % 10000) / 1000;

		number = (digit_2 * 1000) + (digit_1 * 100) + (digit_4 * 10) + digit_3;
		cout << "Результат: " << number << endl;
	}
	

	return 0;

}
