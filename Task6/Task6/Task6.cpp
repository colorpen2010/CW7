#include <iostream>
#include <windows.h>
using namespace std;

bool isPositive(int n)
{
    if (n > 0)
        return true;
    else
        return false;
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int n;
    cout << "Введіть число: ";
    cin >> n;
    if (isPositive(n))
        cout << "Число додатне";
    else
        cout << "Число не є додатним";
    return 0;
}