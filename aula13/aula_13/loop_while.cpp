#include <iostream>

using namespace std;

int main()
{
    int n = 1;
    //repetição
    while(n <=100){
        cout<<n<<endl;
        n++; //incremento
        if(n > 50){
            break;
        }
    }
    return 0;
}

