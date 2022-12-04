//Лабораторна робота 11_2, Завдання 1, Варіант 11, Вправа 1//

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

    cout << "Стан масиву" << endl;
    const int size = 10;
    int arr[size];
    int indexFromMaxElement = 0;
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 19 - 9;
        if (arr[i] > indexFromMaxElement) indexFromMaxElement = i;
        cout << arr[i] << '\t';
    }
    cout << endl;

    for (int i = 0; i < indexFromMaxElement; i++)
        if (arr[i] < 0) arr[i] = 0;

    cout << "Фінальний результат" << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << '\t';

    cout << endl << endl;
    system("pause");
    return 0;
}
