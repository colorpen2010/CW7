#include <iostream>
#include <windows.h>
using namespace std;

int cube(int n)
{
    return n * n * n;
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int n;
    cout << "Введіть число: ";
    cin >> n;
    cout << "Куб числа: " << cube(n);
    return 0;
}