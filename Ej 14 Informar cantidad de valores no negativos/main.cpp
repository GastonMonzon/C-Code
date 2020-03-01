#include <iostream>

using namespace std;

int main()
{
    int i, valor, sumaMay=0, sumaMen=0;
    for(i=0; i<50; i++)
    {
        cout<< "Ingrese un valor\n";
        cin>> valor;
        if(valor>100)
            sumaMay+=valor;
        if(valor<-10)
            sumaMen+=valor;
    }
    cout<< "El promedio de los mayores que 100 es: "<< sumaMay/i<< endl;
    cout<< "La suma de los menores de -10 es:"<< sumaMen<< endl;
    return 0;
}
