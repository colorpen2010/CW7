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
int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int n;
    cout << "Введіть число: ";
    cin >> n;
    if (isPrime(n))
        cout << "Число просте";
    else
        cout << "Число не є простим";
    return 0;
}