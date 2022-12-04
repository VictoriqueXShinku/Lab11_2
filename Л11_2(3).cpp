//Лабораторна робота 11, Завдання 1, Варіант 11, Вправа 3//

#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	const int size = 10;
	int arr[size];
	int sum = 0;
	for (int i = 0; i < size; i++) 
	{
		arr[i] = rand() % 19 - 9;
		cout << arr[i] << " ";

		if (arr[i] < 0) sum += arr[i];
	}

	cout << endl;
	cout << "Сума від'ємних елементів: " << sum << endl;
	int temp;
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	int result = 1;
	for (int i = 1; i < size - 1; i++)
	{
		result *= arr[i];
	}

	cout << "Добуток елементів розташованих між максимальним та мінімальним елементами: " << result << endl;
	cout << endl << endl;
	system("pause");
	return 0;
}