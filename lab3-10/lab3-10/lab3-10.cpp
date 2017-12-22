/*
Днетранская Дарья Сергеевна
Лабораторная работа №3
Вариант 10
Задание:Написать программу, которая в вводимом с клавиатуры тексте заменит первую букву на
последнюю во всех словах текста и выведет результат на экран
*/

#include <stdio.h>
#include <string.h>
#include <conio.h>


#define LENGTH 1000

void replacement(char *m);

int main()
{
	char str[LENGTH];
	printf("Enter the text\n");
	fgets(str, LENGTH, stdin);
	replacement(str);
	fputs(str, stdout);
	_getch();
	return 0;
}

void replacement(char *m)
{
	int  firstLetter = 0;
	for (int i = 1; m[i] != '\0'; i++)
	{
		if (m[i] == ' ')
		{
			firstLetter = i + 1;
		}
		if ((m[i + 1] == ' ' || m[i + 1] == '\n') && m[firstLetter] != ' ')
		{
			m[firstLetter] = m[i];
		}
	}
}