/*
Днестранская Дарья Сергеевна
Лабароторная раюота №5
Вариант №10
Задание:написать программу, которая записывает с клавиатуры файл стуктуру согласно выданному варианту задания.
В программе реализовать: дополнениесуществующего массива структур новыми структурами, поиск структуры с заданным значением выбранного элемента,
вывод на экран содержимого массива структур,упорядочение массива стуктур по заданному полю
Вариант задания: "Государство":название страны,столица,язык,население, площадь территории,денежная еденица,государственный строй
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale>
#include <conio.h>
#include <algorithm>

#define CountryMax 197
#define MaxStrlen 30

struct Country {
	char name[MaxStrlen];
	char capital[MaxStrlen];
	char language[MaxStrlen];
	int population;
	int place;
	char currency[MaxStrlen];
	char polsystem[MaxStrlen];
};
struct Country CountryArray[CountryMax];

int NumberOfCountry = 0;

void search()
{
	setlocale(0, "rus");
	printf("Введите следующую команду выбора поля: 1 - Название страны, 2 - Столица, 3 - Язык,\n4 - Население, 5 - Площадь, 6 - Валюта, 7 - ГосСтрой\n");
	int choose;
	scanf_s("%d", &choose);
	char SearchChar[MaxStrlen], SearchInt;
	int NumberOfSearch = 0, NOSArray[CountryMax];
	printf("Введите значение элемента\n");
	if (choose == 1)
	{
		scanf("%s", SearchChar);
		for (int i = 0; i < NumberOfCountry; i++)
			if (strcmp(SearchChar, CountryArray[i].name) == 0)
			{
				NumberOfSearch = i;
				break;
			}
	}
	else
		if (choose == 2)
		{
			scanf("%s", SearchChar);
			for (int i = 0; i < NumberOfCountry; i++)
				if (strcmp(SearchChar, CountryArray[i].capital) == 0)
				{
					NumberOfSearch = i;
					break;
				}
		}
		else
			if (choose == 3)
			{
				scanf("%s", SearchChar);
				for (int i = 0; i < NumberOfCountry; i++)
					if (strcmp(SearchChar, CountryArray[i].language) == 0)
					{
						NOSArray[NumberOfSearch] = i;
						NumberOfSearch++;
					}
			}
			else
				if (choose == 4)
				{
					scanf("%s", &SearchInt);
					for (int i = 0; i < NumberOfCountry; i++)
						if (SearchInt == CountryArray[i].population)
						{
							NumberOfSearch = i;
							break;
						}
				}
				else
					if (choose == 5)
					{
						scanf("%s", &SearchInt);
						for (int i = 0; i < NumberOfCountry; i++)
							if (SearchInt == CountryArray[i].place)
							{
								NumberOfSearch = i;
								break;
							}
					}
					else
						if (choose == 6)
						{
							scanf("%s", SearchChar);
							for (int i = 0; i < NumberOfCountry; i++)
								if (strcmp(SearchChar, CountryArray[i].currency) == 0)
								{
									NOSArray[NumberOfSearch] = i;
									NumberOfSearch++;
								}
						}
						else
						{
							scanf("%s", SearchChar);
							for (int i = 0; i < NumberOfCountry; i++)
								if (strcmp(SearchChar, CountryArray[i].polsystem) == 0)
								{
									NOSArray[NumberOfSearch] = i;
									NumberOfSearch++;
								}
						}
	if (choose == 1 || choose == 2 || choose == 4 || choose == 5)
	{
		printf("Название страны: %s\nСтолица: %s\nЯзык: %s\nНаселение: %d\nПлощадь: %d\nВалюта: %s\nГосударственный строй: %s\n", CountryArray[NumberOfSearch].name, CountryArray[NumberOfSearch].capital, CountryArray[NumberOfSearch].language, CountryArray[NumberOfSearch].population, CountryArray[NumberOfSearch].place,
			CountryArray[NumberOfSearch].currency, CountryArray[NumberOfSearch].polsystem);
	}
	else
		for (int i = 0; i < NumberOfSearch; i++)
		{
			printf("Страна номер %d:\n", i + 1);
			printf("Название страны: %s\nСтолица: %s\nЯзык: %s\nНаселение: %d\nПлощадь: %d\nВалюта: %s\nГосударственный строй: %s\n", CountryArray[i].name, CountryArray[i].capital, CountryArray[i].language, CountryArray[i].population, CountryArray[i].place,
				CountryArray[i].currency, CountryArray[i].polsystem);
		}

}

void sort()
{
	setlocale(0, "rus");
	printf("Введите следующую команду выбора поля: 1 - Название страны, 2 - Столица, 3 - Язык,\n4 - Население, 5 - Площадь, 6 - Валюта, 7 - ГосСтрой\n");
	int choose;
	scanf("%d", &choose);
	if (choose == 1)
		for (int i = 1; i < NumberOfCountry; i++)
		{
			for (int j = 0; j < NumberOfCountry - 1; j++)
			{
				if (strcmp(CountryArray[j].name, CountryArray[j + 1].name) > 0)
					std::swap(CountryArray[j], CountryArray[j + 1]);
			}
		}
	else
		if (choose == 2)
			for (int i = 1; i < NumberOfCountry; i++)

			{
				for (int j = 0; j < NumberOfCountry - 1; j++)
				{
					if (strcmp(CountryArray[j].capital, CountryArray[j + 1].capital) > 0)
						std::swap(CountryArray[j], CountryArray[j + 1]);
				}
			}
		else
			if (choose == 3)
				for (int i = 1; i < NumberOfCountry; i++)

					for (int j = 0; j < NumberOfCountry - 1; j++)
					{
						if (strcmp(CountryArray[j].language, CountryArray[j + 1].language) > 0)
							std::swap(CountryArray[j], CountryArray[j + 1]);
					}
			else
				if (choose == 4)
					for (int i = 1; i < NumberOfCountry; i++)

						for (int j = 0; j < NumberOfCountry - 1; j++)
						{
							if (CountryArray[j].population >CountryArray[j + 1].population)
								std::swap(CountryArray[j], CountryArray[j + 1]);
						}
				else
					if (choose == 5)
						for (int i = 1; i < NumberOfCountry; i++)

							for (int j = 0; j < NumberOfCountry - 1; j++)
							{
								if (CountryArray[j].place > CountryArray[j + 1].place)
									std::swap(CountryArray[j], CountryArray[j + 1]);
							}
					else
						if (choose == 6)
							for (int i = 1; i < NumberOfCountry; i++)
								for (int j = 0; j < NumberOfCountry - 1; j++)
								{
									if (strcmp(CountryArray[j].currency, CountryArray[j + 1].currency)>0)
										std::swap(CountryArray[j], CountryArray[j + 1]);
								}
						else
							for (int i = 1; i < NumberOfCountry; i++)

								for (int j = 0; j < NumberOfCountry - 1; j++)
								{
									if (strcmp(CountryArray[j].polsystem, CountryArray[j + 1].polsystem)>0)
										std::swap(CountryArray[j], CountryArray[j + 1]);
								}
	for (int i = 0; i < NumberOfCountry; i++)
	{
		printf("Страна номер %d:\n", i + 1);
		printf("Название страны: %s\nСтолица: %s\nЯзык: %s\nНаселение: %d\nПлощадь: %d\nВалюта: %s\nГосударственный строй: %s\n", CountryArray[i].name, CountryArray[i].capital, CountryArray[i].language, CountryArray[i].population, CountryArray[i].place,
			CountryArray[i].currency, CountryArray[i].polsystem);
	}
}

void TextToProgram()
{
	int i = NumberOfCountry;
	setlocale(0, "rus");
	printf("Введите данные о стране в следующем порядке: название, столица, язык, население, площадь в квадратных километрах,\nвалюта, государтсвенный строй\n");
	scanf("%s%s%s%d%d%s%s", CountryArray[i].name, CountryArray[i].capital, CountryArray[i].language, &CountryArray[i].population, &CountryArray[i].place,
		CountryArray[i].currency, CountryArray[i].polsystem);
	NumberOfCountry++;
}

void ProgramToText()
{
	setlocale(0, "rus");
	for (int i = 0; i < NumberOfCountry; i++)
	{
		printf("Страна номер %d:\n", i + 1);
		printf("Название страны: %s\nСтолица: %s\nЯзык: %s\nНаселение: %d\nПлощадь: %d\nВалюта: %s\nГосударственный строй: %s\n", CountryArray[i].name, CountryArray[i].capital, CountryArray[i].language, CountryArray[i].population, CountryArray[i].place,
			CountryArray[i].currency, CountryArray[i].polsystem);
	}
}

int main(void)
{
	setlocale(0, "rus");
	int end, count;
	do {
		printf("Введите номер команды: 1 - добавление страны в картотеку, 2 - вывод картотеки стран, 3 - поиск по элементу,\n4 - сортировка по элементу\n");
		int command = 0;
		scanf("%d", &command);
		if (command == 1)
			TextToProgram();
		else
			if (command == 2)
				ProgramToText();
			else
				if (command == 3)
				{
					search();
				}
				else
				{
					sort();
				}
		printf("Введите команду: 1 - продолжить работу программы, 2 - Закончить работу программы\n");
		scanf("%d", &end);
	} while (end != 2);

	for (int i = 1; i < NumberOfCountry; i++)
	{
		for (int j = 0; j < NumberOfCountry - 1; j++)
		{
			if (strcmp(CountryArray[j].name, CountryArray[j + 1].name) > 0)
				std::swap(CountryArray[j], CountryArray[j + 1]);
		}
	}

	FILE *fout = fopen("out.txt", "w");
	for (int i = 0; i < NumberOfCountry - 1; i++)
	{
		fprintf(fout, "Страна номер %d:\n", i + 1);
		fprintf(fout, "Название страны: %s\nСтолица: %s\nЯзык: %s\nНаселение: %d\nПлощадь: %d\nВалюта: %s\nГосударственный строй: %s\n", CountryArray[i].name, CountryArray[i].capital, CountryArray[i].language, CountryArray[i].population, CountryArray[i].place,
			CountryArray[i].currency, CountryArray[i].polsystem);
		count = i;
	}
	fprintf(fout, "Страна номер %d:\n", count + 2);
	fprintf(fout, "Название страны: %s\nСтолица: %s\nЯзык: %s\nНаселение: %d\nПлощадь: %d\nВалюта: %s\nГосударственный строй: %s", CountryArray[count + 1].name, CountryArray[count + 1].capital, CountryArray[count + 1].language, CountryArray[count + 1].population, CountryArray[count + 1].place,
		CountryArray[count + 1].currency, CountryArray[count + 1].polsystem);
	fclose(fout);

	_getch();
	return 0;
}