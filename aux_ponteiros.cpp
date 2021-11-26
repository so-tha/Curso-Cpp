#include <iostream>

using namespace std;

void foo(int aux[])
{
    aux[0] = 100; // acessando e modificando o valor
}

int main()
{
    int *vet = new int[10];
    int aux[10];

    *(vet + 0) = 10;
    *(vet + 1) = 20;
    *(vet + 2) = 30;

    foo(aux);

    cout << aux[0] << endl;
    return 0;
}

/*
    Divide o vetor pela auxiliar, este modo é mais simples pois nao é necessario ficar trocando os valores.
    for(int i = 0; i < sizeof(aux)/sizeof(int);i++){
        cout << aux[i] << endl;
    }
*/
/*
    Para consumir menos memoria, é bom usar o delete para limpar a pilha
    delete[] array(ou nome);
    array = NULL;

    *é uma boa pratica*
*/