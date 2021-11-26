#include <iostream>

using namespace std;

int main()
{
    int var = 10;
    int *p1, *p2;

    p1 = &var;
    p2 = &var;

    *p2 = 20;
    *p1 = 15;
    //mostra o ultimo valor do conteudo.
    cout << var << endl;
    return 0;
}
