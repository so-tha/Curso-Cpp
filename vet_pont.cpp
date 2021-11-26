#include <iostream>

using namespace std;

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    int *parray = &array[4];
    int i = 4;

    while (i >= 0)
    {
        cout << *parray << endl;
        parray--;
        i--;
    }
    return 0;
}
// pode se existir um ponteiro para um ponteiro = **parray (o endereço do ponteiro)
/*
     pode se usar das duas formas:
     cout<<array[1]<<endl;
     cout<<*(parray + 1)<<endl;
*/