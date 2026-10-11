#include <iostream>
#include <windows.h>
using namespace std;

long long factorial(int n)
{
    long long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int n;
    cout << "Введіть число: ";
    cin >> n;
    if (n < 0)
        cout << "Число не може бути від'ємним";
    else
        cout << "Факторіал: " << factorial(n);
    return 0;
}