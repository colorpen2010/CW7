#include <iostream>
#include <windows.h>
using namespace std;

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int countPrimes(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[i]))
            count++;
    }
    return count;
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
    cout << "Кількість простих чисел: " << countPrimes(arr, 5);
    return 0;
}