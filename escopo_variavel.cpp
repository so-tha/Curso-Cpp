// Uma variavel estatica pode ser usada para sabemos quantas vezes uma função foi chamada por exemplo;
#include <iostream>

using namespace std;

int num_global = 12; // a local é a mais recomendada.

void foo()
{
    int num = 10;
    static int num_static = 1;
    cout << "Variavel Local: " << num << endl;
    cout << "Variavel global: " << num_global << endl;
    num_static++;
    cout << "Variavel estatica: " << num_static << endl;
}

int main()
{
    foo();
    foo();
    foo();
    return 0;
}