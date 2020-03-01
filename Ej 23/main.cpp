#include <iostream>

using namespace std;

int main()
{
    float valor, maxn=0, minp=0, i=0,suma=0, minr=0;
    do
    {
        cout<< "Ingrese un valor o 0 para salir\n";
        cin>> valor;
        if(valor!=0)
        {
            if (valor<0)
            {
                if (maxn==0)
                {
                    maxn=valor;
                }
                if (valor>maxn)
                {
                    maxn=valor;
                }
            }
            if (valor>0)
            {
                if (minp==0)
                {
                    minp=valor;
                }
                if (valor<minp)
                {
                    minp=valor;
                }
            }
            if (valor>=-17.3 && valor<=26.9)
            {
                if (minr==0)
                {
                    minr=valor;
                }
                if (valor<minr)
                {
                    minr=valor;
                }
            }
            suma+=valor;
            i++;
        }
    }
    while(valor!=0);

    if (i==0)
    {
        cout<< "No hubo valores\n";
    }
    else
    {
        cout<< "El maximo negativo es: "<< maxn<< endl;
        cout<< "El minimo positivo es: "<< minp<< endl;
        cout<< "El minimo entre -17.3 y 26.9 es: "<< minr<< endl;
        cout<< "El promedio de valores es: "<< suma/i<< endl;
    }

    return 0;
}
