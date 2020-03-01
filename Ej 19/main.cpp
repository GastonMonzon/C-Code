#include <iostream>

using namespace std;

int main()
{
    int M, i=3;
    cout<< "Multiplos de 3 pero no de 5\n\n";
    cout<< "Ingrese un valor\n";
    cin>> M;
    cout<< endl;

    while(M>0)
    {
        if(i%3==0 && i%5!=0)
        {
            cout<< i<< endl;
            M--;
        }
        i+=3;
    }
    return 0;
}
