#include <iostream>

using namespace std;

int main()
{
    char nome[] = {'t', 'h', 'a', 'i', 's', '\0'};
    int i = 0;
    //Armazena cada letra e as retorna juntas, formando o nome
    while (nome[i])
    {
        cout << nome[i];
        i++;
    }
    return 0;
}
