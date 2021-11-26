#include <iostream>

using namespace std;

//Um ponteiro é uma variavel que guarda o endereço de outra variavel
// O nome do vetor ja é o endereço
int main()
{
    int var = 10;
    int *pvar;
    // para mudar o valor : *pvar = 20;
    pvar = &var; //incializando o ponteiro
    //mostrando o ponteiro
    cout << *pvar << endl;
    return 0;
}

/*
    int* vet = new int[10];

    *(vet + 0) = 10;
    *(vet + 1) = 20;
    *(vet + 2) = 30;
    cout << *(vet + 0) << endl;
    cout << *(vet + 1) << endl;
    cout << *(vet + 2) << endl;
    
    ou pode ser feito desta maneira :

    int* vet = new int[10];
    int aux[10];

    *(vet + 0) = 10;
    *(vet + 1) = 20;
    *(vet + 2) = 30;

    aux[0] = 10;
    aux[1] = 20;
    aux[2] = 30;
    
    cout << *(aux + 0) << endl;
    cout << *(aux + 1) << endl;
    cout << *(aux + 2) << endl;

*/