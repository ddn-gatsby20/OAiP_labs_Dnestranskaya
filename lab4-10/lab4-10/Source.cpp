/*
Днетранская Дарья Сергеевна
Лабороторная работа №4
Вариант 10
Задание:Дополнить лабораторную работу №3 следующими условиями: входными данными является файл,
результаты работы записываются в другой файл, входные данные не ограничиваются одной строкой
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <conio.h>

#define LENGTH 1000

int array(int end, char *str, FILE *file);

int main()
{
	int numberOfLetters = 0, firstLetter = 0, i = 0, end = 0;;
	char str[LENGTH];
	FILE *file1 = fopen("file1.txt", "r");
	if(file1 != NULL)
	{
		FILE *newFile = fopen("file2.txt", "w");
		for (int i = 0; fgetc(file1) != EOF; i++)
			end++;
		fclose(file1);
		FILE *file = fopen("file1.txt", "r");
	
		if (file != NULL)
		{
			array(end, str, file1);
			for (int i = 0; str[i] != '\0'; i++)
			{
				numberOfLetters++;
				if ((str[i] == ' ') || (str[i + 1] == '\n'))
				{

					firstLetter = numberOfLetters - 1;
					str[i - firstLetter] = str[i - 1];
					numberOfLetters = 0;
				}
			}
			for (int i = 0; i < end; i++)
				fprintf(newFile, "%c", str[i]);
			fclose(newFile);
			fclose(file1);
		}
		else printf("File not found");
	}
	else printf("File not found");
	_getch();
	return 0;
}


int array(int end, char *str, FILE *file)
	{
	for (int i = 0; i < end; i++)
		str[i] = fgetc(file);
	return 0;
	}