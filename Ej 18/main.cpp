#include <iostream>

using namespace std;

int main()
{
    int M, i=3, j=0;
    cout<< "Multiplos de 3 pero no de 5\n\n";
    cout<< "Ingrese un valor\n";
    cin>> M;
    cout<< endl;

    while(j<M)
    {
        if(i%3==0 && i%5!=0)
        {
            cout<< i<< endl;
            j++;
        }
        i+=3;
    }
    return 0;
}
