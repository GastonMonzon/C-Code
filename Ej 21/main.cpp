#include <iostream>

using namespace std;

int main()
{
    int N, valor, mayor=INT_MIN, menor=INT_MAX, posmay, posmen;
    do
    {
        cout<< "Ingrese cuantos valores quiere ingresar\n";
        cin>> N;
        if(N<=0)
            cout<< "Cantidad invalida\n";
        else
        {
            for(int i=1; i<=N; i++)
            {
                cout<< "Ingrese un valor\n";
                cin>> valor;
                if(valor>mayor)
                {
                    mayor=valor;
                    posmay=i;
                }
                if(valor<menor)
                {
                    menor=valor;
                    posmen=i;
                }
            }
        }
    }
    while(N<=0);
    cout<< "El mayor valor es: "<< mayor<< ", en la posicion: "<< posmay<< endl;
    cout<< "EL menor valor es: "<< menor<< ", en la posicion: "<< posmen<< endl;
    return 0;
}
