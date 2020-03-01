#include <iostream>

using namespace std;

struct Pasajeros
{
    unsigned int pasaporte;
    unsigned int dolares;
};
struct Vuelos
{
    unsigned int nroVuelo;
    string destino;
    unsigned int cantAsientos;
    unsigned int cantPasajeros;
    Pasajeros pasajero[500];
};
int main()
{
    Vuelos vuelo[100];
    unsigned int i=0, M;
    cout<< "Ingrese la cantidad de vuelos\n";
    cin>> M;
    do
    {
        unsigned int j=0;
        do
        {
            cout<< "Ingrese Nro de vuelo\n";
            cin>> vuelo[i].nroVuelo;
            if(vuelo[i].nroVuelo > 9999)
                cout<< "Dato incorrecto\n";
        }
        while(vuelo[i].nroVuelo > 9999);
        cout<< "Ingrese destino\n";
        cin>> vuelo[i].destino;
        cout<< "Ingrese cantidad de asientos\n";
        cin>> vuelo[i].cantAsientos;
        do
        {
            cout<< "Ingrese pasaporte o 0 para salir\n";
            cin>> vuelo[i].pasajero[j].pasaporte;
            cout<< "Ingrese importe en dolares o 0 para salir\n";
            cin>> vuelo[i].pasajero[j].dolares;
            j++;

        }
        while(vuelo[i].pasajero[j].pasaporte!=0 || vuelo[i].pasajero[j].dolares!=0);

        i++;
    }
    while(i<M);
    return 0;
}
