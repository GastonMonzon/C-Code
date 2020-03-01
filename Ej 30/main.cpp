#include <iostream>

using namespace std;

int main()
{
    int N, valor, valorAnt, i=0, cantCeros=0, suma=0, promPos, sumaNeg=0;
    cout<< "Ingrese la cantidad del conjunto\n";
    cin>> N;
    do
    {
        if(i!=0)
            valorAnt=valor;
        cout<< "Ingrese un valor\n";
        cin>> valor;
        if(valor==0)
            cantCeros++;
        else
        {
            if(valor>0)
                suma+=valor;
            else
                sumaNeg+=valor;
        }
        promPos=suma/i;
        i++;
    }
    while(valor!=valorAnt || cantCeros>4 || promPos>6 || i<=N);
    return 0;
}
