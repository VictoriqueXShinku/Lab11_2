//Лабораторна робота 11, Завдання 1, Варіант 11, Вправа 4//

#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <time.h>
#include <math.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    const int size = 10;
    int arr[size];
    int min;
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 19 - 9;
        cout << arr[i] << " ";
    }
    cout << endl;

    min = abs(arr[0]);
    for (int i = 0; i < size; i++)
    {
        if (min > abs(arr[i]))
        {
            min = abs(arr[i]);
        }
    }
    cout << "Мінімальний елемент масиву за модулем: " << min << endl;

    int arr2[size];
    for (int i = 0; i < size / 2; i++)
    {
        arr2[i] = arr[i * 2];
    }
    int j = 0;
    for (int i = size / 2; i < size; i++)
    {
        arr2[i] = arr[j * 2 + 1];
        j++;
    }

    for (int i = 0; i < size; i++)
        cout << arr2[i] << " ";

    cout << endl << endl;
    system("pause");
    return 0;
}