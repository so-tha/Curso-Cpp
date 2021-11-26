#include <iostream>
//switch
using namespace std;

int main()
{
    int num = 10;

    switch(num)
    {
        case 9:
        //caso num for igual a 9
            cout<<"numero 9";
            break;
        case 10:
        //caso num for igual a 10
            cout<<"numero 10";
        //break = para
            break;
        case 11:
            cout<<"numero 11";
        //caso num for igual a 11
            break;
        default:
        //default é a opção que sera mostrada caso o numero informado n esteja nas opções
        cout<<"numero nao encontrado";
    }
    return 0;
}
