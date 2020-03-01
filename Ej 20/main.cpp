#include <iostream>

using namespace std;

int main()
{
    int valor, mayor=INT_MIN;
    for(int i=0; i<10; i++)
    {
        cout<< "Ingrese un valor\n";
        cin>> valor;
        if(valor>mayor)
            mayor=valor;
    }
    cout<< "El mayor valor es: "<< mayor<< endl;
    return 0;
}
