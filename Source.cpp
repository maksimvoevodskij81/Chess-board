#include <iostream>
#include <math.h>
#include <time.h>
#include <windows.h>
using namespace std;
//3-10.�������� ���������, ������� ������� �� ����� ��������� ����� � �������� �������� ��������.

const int COUNT_OF_PAIR_SQUARES = 4;
int main()
{
	setlocale(LC_ALL, "RU");
	int sizeOfSquare = 0;
	int choice = 0;
	char liniya = 35;
	char minus = 187;
	char temp = 33;
	cout << "������� ������ �������� ��������� �����: ";
	cin >> sizeOfSquare;
	cout << "�������� ������ ��������� ����������:\n" << "1 = ������\n" << "2 = �������\n" << "���� �����?!: ";
	cin >> choice;
	while (true)
	{
		if (choice == 1 || choice == 2)
			break;
		cout << "\n�� ���������� ����, ��������� �������: ";
		cin >> choice;
	}
	system("cls");
	switch (choice)
	{
	case 1:
		for (int smena = 1; smena <= 10000; smena++)
		{
			for (int vertikal = COUNT_OF_PAIR_SQUARES; vertikal > 0; vertikal--)
			{
				for (int GorizontLinesWithStickFirst = sizeOfSquare; GorizontLinesWithStickFirst > 0; GorizontLinesWithStickFirst--)
				{
					for (int oneGorizontalLine = COUNT_OF_PAIR_SQUARES; oneGorizontalLine > 0; oneGorizontalLine--)
					{
						for (int plus = sizeOfSquare; plus > 0; plus--)
							cout << liniya;
						for (int minuses = sizeOfSquare; minuses > 0; minuses--)
							cout << minus;
					}
					cout << endl;
				}
				for (int GorizontLinesWithMinusFirst = sizeOfSquare; GorizontLinesWithMinusFirst > 0; GorizontLinesWithMinusFirst--)
				{
					for (int oneGorizontalLine = COUNT_OF_PAIR_SQUARES; oneGorizontalLine > 0; oneGorizontalLine--)
					{
						for (int minuses = sizeOfSquare; minuses > 0; minuses--)
							cout << minus;
						for (int plus = sizeOfSquare; plus > 0; plus--)
							cout << liniya;
					}
					cout << endl;
				}
			}
			temp = liniya;
			liniya = minus;
			minus = temp;
			Sleep(750);
			system("cls");
		}
		break;
	case 2:
		for (int vertikal = COUNT_OF_PAIR_SQUARES; vertikal > 0; vertikal--)
		{
			for (int GorizontLinesWithStarsFirst = sizeOfSquare; GorizontLinesWithStarsFirst > 0; GorizontLinesWithStarsFirst--)
			{
				for (int oneGorizontalLine = COUNT_OF_PAIR_SQUARES; oneGorizontalLine > 0; oneGorizontalLine--)
				{
					for (int stars = sizeOfSquare; stars > 0; stars--)
					{
						cout << "|";
						Sleep(40);
						cout << "\b/";
						Sleep(40);
						cout << "\b-";
						Sleep(40);
						cout << "\b\\";
						Sleep(40);
						cout << "\b|";
					}
					for (int minuses = sizeOfSquare; minuses > 0; minuses--)
					{
						cout << "-";
						Sleep(40);
						cout << "\b\\";
						Sleep(40);
						cout << "\b|";
						Sleep(40);
						cout << "\b/";
						Sleep(40);
						cout << "\b-";
					}
				}
				cout << endl;
			}
			for (int GorizontLinesWithMinusFirst = sizeOfSquare; GorizontLinesWithMinusFirst > 0; GorizontLinesWithMinusFirst--)
			{
				for (int oneGorizontalLine = COUNT_OF_PAIR_SQUARES; oneGorizontalLine > 0; oneGorizontalLine--)
				{
					for (int minuses = sizeOfSquare; minuses > 0; minuses--)
					{
						cout << "-";
						Sleep(40);
						cout << "\b\\";
						Sleep(40);
						cout << "\b|";
						Sleep(40);
						cout << "\b/";
						Sleep(40);
						cout << "\b-";
					}
					for (int stars = sizeOfSquare; stars > 0; stars--)
					{
						cout << "|";
						Sleep(40);
						cout << "\b/";
						Sleep(40);
						cout << "\b-";
						Sleep(40);
						cout << "\b\\";
						Sleep(40);
						cout << "\b|";
					}
				}
				cout << endl;
			}
		}
		break;
	}
	system("pause");
	return 0;
}