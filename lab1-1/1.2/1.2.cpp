/* Днестранская Дарья Сергеевна
Лабороторная работа №1
Вариант №1
Задание: Перевести версты в сажени и сантиметры
*/


#include<stdio.h>
#include<locale.h>
#include<conio.h>

    #define sajeni=500;
    #define sm = 106.680;
int main()
{
   
	float a, b, c;
    
	printf("Введите меру в верстах   ");
	int result = scanf_s("%f", &a);
	setlocale(LC_ALL, "Russian");
	
	if (result==0)
	{
		printf("Error message");
	}
	else
	{
		b = a * 500;
		c = a * 106.680;
	}
	printf("\n Мера в саженях %f ", b);
	printf("\n Мера в сантиметрах %f \n  ", c);

	_getch();
	return 0;
}