#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int v[15];
    int i, mayor, menor, suma;

    for(i = 0; i <=14; i++) {
        cout<< "Ingrese el Numero "<< i + 1 << " :\n";
        cin>> v[i];
        if(i == 0) {
            mayor = v[i];
            menor = v[i];
        }
        if(v[i] > mayor)
            mayor = v[i];
        if(v[i] < menor)
            menor = v[i];
        suma += v[i];
    }
    double promediosuma = suma/15, promedioModulo = v[0];
    int  nCercano = v[0];

    for(i = 0; i<= 14; i++)
        if(v[i] - promediosuma < promedioModulo){
            promedioModulo = abs(v[i]-promedioModulo);
            nCercano = v[i];
        }
    cout<< "El mayor Numero es: " << mayor<< endl;
    cout<< "El menor Numero es: " << menor<< endl;
    cout<< "El Numero mas cercano al promedio es: " << nCercano<< endl;

    return 0;
}
