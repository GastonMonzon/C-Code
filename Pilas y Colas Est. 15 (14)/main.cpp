#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

void inicializar(int vec[], int tam)
{
    for(int i = 0; i < tam; i++)
        vec[i] = 0;
}

void insertarDato(int vec[], int tam, int dato, int &posicion)
{
    if(posicion < tam)
    {
        vec[posicion] = dato;
        posicion++;
        cout<< "Dato " << dato << " agregado en la posicion " << posicion << " de la pila\n";
    }else
        cout<< "Pila llena\n";
}
void extraerDato(int vec[], int tam,int &posicion)
{
    int aux;
    if(vec[0] == 0)
        cout<< "Pila vacia ingrese datos primero\n";
    else
    {
        aux = vec[posicion];
        vec[posicion] = 0;
        posicion--;
        cout<< "Dato extraido: " << aux << endl;
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
    cout<< "2 - Extraer dato de la pila\n";
    cout<< "3 - Mostrar pila\n";
    cout<< "Esc Salir\n";
}
int main()
{
    int pila[20], x, posicion = 0;
    char opcion;
    inicializar(pila, 20);

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
            insertarDato(pila, 20, x, posicion);
            break;
        case '2':
            extraerDato(pila, 20, posicion);
            break;
        case '3':
            mostrar(pila, 20);
            break;
        }
    }
    while(opcion != 27);
    return 0;
}
