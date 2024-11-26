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

    const int maxFuel = 300; // максимальное количество топлива
    const int maxWeight = 2000; // максимальный вес груза

	int distanceAB = 0; 
	int distanceBC = 0;
	int weight = 0;
	int flow_coefficient = 1; // расход топлива от груза
	int remaining_fuel = 0; // остаток топлива
	int refueling_fuel = 0; // дозаправка топлива

	cout << "Введите расстояние между пунктами A и B: ";
	cin >> distanceAB;
	cout << "Введите расстояние между пунктами B и C: ";
	cin >> distanceBC;
	cout << "Введите вес груза: ";
	cin >> weight;

	if ((distanceAB <= 0) || (distanceBC <= 0) || (weight < 0) || (weight > maxWeight)) 
	cout << "Ошибка! (Задано некорректное расстояние или слишком большой вес)" << endl;
	else
	{
		if (weight > 500) flow_coefficient = 4;
		if (weight > 1000) flow_coefficient = 7;
		if (weight > 1500) flow_coefficient = 9;
	}

	if ((maxFuel < (flow_coefficient * distanceAB)) || maxFuel < (flow_coefficient * distanceBC)) cout << "Не хватает топлива!" << endl; 
	else {
		remaining_fuel = maxFuel - (flow_coefficient * distanceAB);
		refueling_fuel = flow_coefficient * distanceBC - remaining_fuel;
		if (refueling_fuel < 0) refueling_fuel = 0; // топливо сливать не нужно
		cout << "Нужно дозаправить " << refueling_fuel << " литров" << endl;
	    }




	return 0;

}
