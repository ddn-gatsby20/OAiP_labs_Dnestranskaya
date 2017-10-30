/*
 Днестранская Дарья Сергеевна
 Лабороторная работа №1
 Вариант 10
 Задание:вычислить арифметическое чётных чисел массива
*/
#include<stdio.h>
#include<conio.h>
#include<locale>

int readValue()
{
	int value;
	
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int array[30], arraylength, i, evens = 0, sum = 0;
	float average=0;
	
	printf_s("Enter array length ");
	scanf_s("%d\n", &arraylength);
	for (i = 0; i < arraylength; i++)
	{

		int result = scanf_s("%d", &array[i]);
		if (result == 0)
		{
			printf("Error");
			return 0;
		}
	
		else
		{

			if (array[i] % 2 == 0)
			{
				evens++;
				sum = array[i] + sum;

			}
			average = sum / evens;
		}
	}
	printf_s("average %f", average);
	_getch();
	return 0;
}