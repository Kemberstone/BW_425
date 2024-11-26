#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	srand(time(0)); //иницилизируем генератор случайных чисел
	bool human_first; //это будет переменная для определения первого хода, человек или компухтер
	int human_score = 0, computer_score = 0; // это счетчики очков



	return 0;

}

