#include <iostream>

using namespace std;

bool par(int num); // prototipo da função

bool par(int num)
{
    if (num % 2 == 0)
    {
        return true;
        return false;
    }
}

int main()
{
    int n;
    cout << "Digite um numero: " << endl;
    cin >> n;
    if (par(n))
    {
        cout << "O numero " << n << "eh par." << endl;
    }
    else
    {
        cout << "O numero " << n << "Impar" << endl;
    }
    return 0;
}
/*
Sobrecarga de função -> O retorno da função não pode ser usado como diferenciador das funções
ela precisa ter nomes e tipos diferentes 
*/