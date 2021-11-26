#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    // Mostra se uma sting é substring de outra (no caso se contem)
    char str1[100], str2[100];

    cout << "Digite a primeira string: ";
    cin >> str1;
    cout << "Digite a segunda string: ";
    cin >> str2;

    if (strstr(str1, str2))
    {
        cout << "eh substring " << endl;
    }
    else
    {
        cout << "não eh substring" << endl;
        return 0;
    }
}
//Strings são vetores de caracteres