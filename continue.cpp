#include <iostream>

using namespace std;

int main()
{
    int n = 1;
    while (n <= 100)
    {
        if (n % 2 != 0)
        {
            n++;
            continue;
            //retorna para o inicio do looping
        }
        cout << n << endl;
        n++;
    }
    return 0;
}
