//Лабораторна робота 11_2, Завдання 2, Варіант 6//

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

    const int n = 15;
    int A[n];

    int x = 1;
    int maxX = 1;
    for (int i = 0; i < n; i++)
    {
        A[i] = rand() % 10;
        cout << A[i] << " ";
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (A[i] == A[i + 1])
        {
            x++;
            if (maxX < x)
            {
                maxX = x;
            }
        }
        else x = 1;
    }
    cout << endl;
    cout << "Максимальна кількість повторюваних поспіль елементів: " << maxX << endl;


    cout << endl << endl;
    system("pause");
    return 0;
}