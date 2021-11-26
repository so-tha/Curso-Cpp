#include <iostream>

using namespace std;

int main()
{
    int vet[] = {1, 2, 3};
    int *p1 = &vet[0], *p2 = &vet[1];

    cout << p1 << endl;
    cout << p2 << endl; //mostra o lugar na memoria de ambos

    if (p1 < p2)
    {
        cout << "p1 vem antes" << endl;
    }

    return 0;
}