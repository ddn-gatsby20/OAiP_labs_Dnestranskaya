/*
����������� ����� ���������
������������ ������ �3
������� 10
�������:�������� ���������, ������� � �������� � ���������� ������ ������� ������ ����� ��
��������� �� ���� ������ ������ � ������� ��������� �� �����
*/



#include <stdio.h>
#include <string.h>
#include <conio.h>

#define LENGTH 1000



int main()
{
	int numberOfLetters = 0, i;
	char str[LENGTH];

	printf("Enter the text\n");
	fgets(str, LENGTH, stdin);
	for (i = 0; str[i] != 0; i++)
	{
		numberOfLetters++;
		if ((str[i] == ' ') || (str[i + 1] == 0))
		{

			str[i - (numberOfLetters - 1)] = str[i - 1];
			numberOfLetters = 0;
		}
	}

	fputs(str, stdout);

	_getch();
	return 0;
}