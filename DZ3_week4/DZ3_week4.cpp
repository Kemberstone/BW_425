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
	int max = 0;

	cout << "Введите первое число: ";
	cin >> number;
	max = number;
	cout << "Введите второе число: ";
	cin >> number;
	if (max < number) max = number;
	cout << "Введите третье число: ";
	cin >> number;
	if (max < number) max = number;
	cout << "Введите четвертое число: ";
	cin >> number;
	if (max < number) max = number;
	cout << "Введите пятое число: ";
	cin >> number;
	if (max < number) max = number;
	cout << "Введите шестое число: ";
	cin >> number;
	if (max < number) max = number;
	cout << "Введите седьмое число: ";
	cin >> number;
	if (max < number) max = number;

	cout << "Максимальное число: " << max << endl;


	return 0;

}
