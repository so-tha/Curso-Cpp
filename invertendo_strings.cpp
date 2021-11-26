#include <iostream>

using namespace std;

int main()
{
    // Invertendo a string

    void inverte(char nome[])
    {
        Obtendo o tamanho da string;
        int tam;
        for (tam = 0; nome[tam]; tam++)
            ;
        for (int i = tam - 1; i >= 0; i--)
            cout << nome[i];

        int main()
        {
            char nome[] = "marcos";

            inverte(nome);
            return 0;
        }
    }
