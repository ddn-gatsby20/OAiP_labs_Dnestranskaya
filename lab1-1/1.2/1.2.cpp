/* Днестранская Дарья Сергеевна
Лабораторная работа №1
Вариант №1
Задание: Перевести версты в сажени и сантиметры
*/

#define _CRT_SECURE_NO_WARNINGS 
#define sajeni 500
#define centimeters 106.680

#include<stdio.h>
#include<locale.h>
#include<conio.h>


int main()
{
	setlocale(LC_ALL, "Rus");

	float verst, vsajeni = 0, vcentimeters = 0;
	printf("Введите меру в верстах   ");
	int result = scanf("%f", &verst);
	if (result == 0)
	{
		printf("Некорректный ввод данных");
	}
	else
	{
		vsajeni = verst * sajeni;
		vcentimeters = verst * centimeters;

		printf("\n Мера в саженях %f ", vsajeni);
		printf("\n Мера в сантиметрах %f \n  ", vcentimeters);
	}

	_getch();
	return 0;
}
