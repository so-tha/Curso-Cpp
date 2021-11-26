// modulo é por exemplo <iostream>, são compilados separadamente
#include <iostream>
#include "my_math.h"

using namespace std;

int main()
{
    int n = 5;

    cout << "Fatorial de " << n << ":" << fatorial(5);
    return 0;
}