#include <iostream>
#include <windows.h>
using namespace std;

int maximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int a, b;
    cout << "Введіть два числа: ";
    cin >> a >> b;
    cout << "Більше число: " << maximum(a, b);
    return 0;
}