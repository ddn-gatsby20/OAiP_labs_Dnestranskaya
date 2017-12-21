/* Днестранская Дарья Сергеевна
Лабораторная работа №1
Вариант №1
Задание: Перевести версты в сажени и сантиметры
*/

#define _CRT_SECURE_NO_WARNINGS 
#define SAJENI 583
#define CENTIMETRES 106680

#include <stdio.h>
#include <locale.h>
#include <conio.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	float verst;
	printf("Введите меру в верстах   ");
	int result = scanf("%f", &verst);
	if (result == 0)
	{
		printf("Некорректный ввод данных");
	}
	else
	{
		float vsajeni = verst * SAJENI;
		float vcentimeters = verst * CENTIMETRES;
		printf("\n Мера в саженях %.1f ", vsajeni);
		printf("\n Мера в сантиметрах %.1f \n  ", vcentimeters);
	}
	_getch();
	return 0;
}
