#include <iostream>

using namespace std;

int main()
{
    cout<< "CALCULADORA DE POTENCIAS\n";
    int base, exponente,i;
    while (base)
    {
        int resultado=1,suma=0;
        cout<< "Ingrese una base y exponente\n";
        cin>>base>>exponente;
            for (i=1;i<=exponente;i++)
                {
                    resultado*= base;
                    suma+= resultado;
                }
        cout<<base<< " elevado a la potencia de "<<exponente<< "= "<<resultado<<endl;
        cout<< "La suma de los exponentes es: "<< suma<<endl;
    continue;
    }
    return 0;
}
