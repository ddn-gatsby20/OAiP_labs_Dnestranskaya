/* ������������ ����� ���������
������������ ������ �1
������� �1
�������: ��������� ������ � ������ � ����������
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
	printf("������� ���� � �������   ");
	int result = scanf("%f", &verst);
	if (result == 0)
	{
		printf("������������ ���� ������");
	}
	else
	{
		vsajeni = verst * sajeni;
		vcentimeters = verst * centimeters;

		printf("\n ���� � ������� %f ", vsajeni);
		printf("\n ���� � ����������� %f \n  ", vcentimeters);
	}

	_getch();
	return 0;
}
