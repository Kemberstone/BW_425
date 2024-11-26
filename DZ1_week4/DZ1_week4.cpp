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

	int number = 0; //это число для проверки на счастливость
	int firstPart = 0; //здесь содержатся первые три младшие цифры
	int secondPart = 0; //а здесь содержатся старшие

	cout << "Введите число для проверки: ";
	cin >> number;

	if ((number < 100000) || (number > 999999)) //здесь проверяется, чтобы пользователь ввел шестизначное число
	{
		cout << endl << "Неверное значение!" << endl;
	}
	else
	{
		firstPart = number % 10;
		firstPart += (number % 100) / 10;
		firstPart += (number % 1000) / 100;

		secondPart = (number % 10000) / 1000;
		secondPart += (number % 100000) / 10000;
		secondPart += (number % 1000000) / 100000;
	}

	(firstPart == secondPart) ? cout << "Число " << number << " счастливое!" << endl : cout << "Число " << number << " не счастливое" << endl;

	return 0;

}
