#include <iostream>

using namespace std;

int main()
{
    int num, fat;

    cout << "Digite um numero: " << endl;
    cin >> num;

    for (int i = 1; fat = 1; i < num; i++)
    {
        fat = fat * (i + 1);
    }
    cout << "Fatorial: " << fat << end;

    return 0;
}
