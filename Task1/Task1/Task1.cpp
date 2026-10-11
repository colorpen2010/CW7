#include <iostream>
#include <windows.h>
using namespace std;

void rectangle(int N, int K, char S)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < K; j++)
        {
            cout << S;
        }
        cout << endl;
    }
}

int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    int N, K;
    char S;
    cout << "Введіть висоту: ";
    cin >> N;
    cout << "Введіть ширину: ";
    cin >> K;
    cout << "Введіть символ: ";
    cin >> S;
    rectangle(N, K, S);
    return 0;
}