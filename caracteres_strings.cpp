#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    // é um digito ou não
    char nome[] = "thais";

    if (isdigit(nome[0]))
    {
        cout << "letra" << endl;
    }
    else
    {
        cout << "letra" << endl;
    }
    return 0;
}

/*
    isupper -> verifica se o caractere esta maiuscula ou miniscula
    islower -> verifca se o caractere é minisculo
    isspace -> verifica se possui um espaço;
    strcmp -> retorna 1 se as string são diferentes e se forem iguais sera igual a zero
    tolower(variavel) -> imprime a versão minuscula
    toupper -> imprime a versão maiscula.
    strcat -> contatena duas variaveis;
    strcat(nome, sobrenome);

 */