#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

void inicializar(int vec[], int tam)
{
    for(int i = 0; i < tam; i++)
        vec[i] = 0;
}

void insertarDato(int vec[], int tam, int dato,int &posicion)
{
    if(posicion < tam)
    {
        vec[posicion] = dato;
        posicion++;
        cout<< "Dato " << dato << " agregado en la posicion " << posicion << " de la cola\n";
    }else
        cout<< "Cola llena\n";
}
void extraerDato(int vec[], int tam, int &posicion)
{
    int aux, i = 0;
    if(vec[i] == 0)
        cout<< "Cola vacia ingrese datos primero\n";
    else
    {
        aux = vec[0];
        while(i < tam && vec[i + 1] != 0)
            vec[i] = vec[i + 1];
        cout<< "Dato extraido: " << aux << endl;
        posicion--;
    }
}

void mostrar(int vec[], int tam)
{
    for(int i = 0; i < tam; i++)
    {
        if(vec[i] != 0)
            cout<< vec[i]<< endl;
    }
}

void menu()
{
    cout<< "1 - Ingresar un dato\n";
    cout<< "2 - Extraer dato de la cola\n";
    cout<< "3 - Mostrar cola\n";
    cout<< "Esc Salir\n";
}
int main()
{
    int cola[20], x, posicion = 0;
    char opcion;
    inicializar(cola, 20);

    do
    {
        do
        {
            menu();
            opcion = getch();
        }
        while(!(opcion > 0 && opcion < 4) || opcion != 27);
        switch(opcion)
        {
        case '1':
            cout<< "Ingrese una dato\n";
            cin>> x;
            insertarDato(cola, 20, x, posicion);
            break;
        case '2':
            extraerDato(cola, 20, posicion);
            break;
        case '3':
            mostrar(cola, 20);
            break;
        }
    }
    while(opcion != 27);
    return 0;
}
