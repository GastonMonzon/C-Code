#include <iostream>

using namespace std;

int main()
{
    int valor, lote=1, pos, i=0, Max=-1, lotedeMax, posloteMax, Maxsublote, Min=INT_MAX, lotedeMin, posloteMin, Minsublote;
    float suma, sumatotal=0;
    do
    {
        pos=0;
        suma=0;
        cout<< "Ingrese un valor\n";
        cin>> valor;
        Minsublote=valor;
        Maxsublote=valor;

        while (valor>0)
        {
            suma+=valor;
            sumatotal+=valor;
            i++;
            pos++;
            if (valor>Max)
            {
                Max=valor;
                lotedeMax=lote;
                posloteMax=pos;
            }
            if (valor>Maxsublote)
            {
                Maxsublote=valor;
            }
            if (valor<Min)
            {
                Min=valor;
                lotedeMin=lote;
                posloteMin=pos;
            }
            if (valor<Minsublote)
            {
                Minsublote=valor;
            }
            cout<< "Ingrese un valor para el sublote\n";
            cin>> valor;
        }
        if (pos!=0)
        {
            cout<< endl<< "Promedio del sublote "<< lote<< " es: "<< suma/pos<< endl;
            cout<< "Minimo del sublote "<< lote<< " es: "<< Minsublote<< endl;
            cout<< "Maximo del sublote "<< lote<< " es: "<< Maxsublote<< endl<< endl;
        }
        else if (pos)
        {
            cout<< endl<< "Sublote vacio\n\n";
        }
        lote++;
    }
    while (valor>=0);

    if (Max!=-1)
    {
        cout<< endl<< "Total de sublotes: "<< lote-1<< endl;
        cout<< endl<< "El valor maximo es: "<< Max<< " en la posicion "<< posloteMax<< " del lote n "<< lotedeMax<< endl;
        cout<< endl<< "El valor minimo es: "<< Min<< " en la posicion "<< posloteMin<< " del lote n "<< lotedeMin<< endl;
        cout<< endl<< "Promedio total es: "<< sumatotal/i<< endl;
    }
    else
    {
        cout<< endl<< "Lote total vacio";
    }
    return 0;
}
