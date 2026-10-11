#include <iostream>
#include <windows.h>
using namespace std;

void reverseArray(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
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
    reverseArray(arr, 5);
    cout << "Масив у зворотному порядку: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}