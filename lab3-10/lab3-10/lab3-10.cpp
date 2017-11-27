/*
Днетранская Дарья Сергеевна
Лабороторная работа №3
Вариант 10
Задание:Написать программу, которая в вводимом с клавиатуры тексте заменит первую букву на
последнюю во всех словах текста и выведет результат на экран
*/

#include <stdio.h>
#include <string.h>
#include <conio.h>

#define LENGTH 1000

int main()
{
	int numberOfLetters = 0, firstLetter = 0, i = 0;
	char str[LENGTH];

	printf("Enter the text\n");
	fgets(str, LENGTH, stdin);
	while(str[i] != '\0')
	{
			numberOfLetters++;
		if ((str[i] == ' ') || (str[i + 1] == '\0'))
		{
			
			firstLetter = numberOfLetters - 1;
			str[i - firstLetter] = str[i - 1];
			numberOfLetters = 0;
		}
	}

	fputs(str, stdout);
	

	_getch();
	return 0;
}