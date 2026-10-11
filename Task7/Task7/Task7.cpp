#include <iostream>
#include <windows.h>
using namespace std;

void findMinMax(int arr[], int n)
{
    int min = arr[0];
    int max = arr[0];
    int minIndex = 0;
    int maxIndex = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            minIndex = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }
    cout << "Мінімум: " << min << ", номер: " << minIndex + 1 << endl;
    cout << "Максимум: " << max << ", номер: " << maxIndex + 1 << endl;
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int arr[5];
    cout << "Введіть 5 чисел:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    findMinMax(arr, 5);
    return 0;
}