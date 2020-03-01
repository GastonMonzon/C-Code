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
    int aux, i = 0;
    if(posicion == tam - 1)
    {

        return;
    }
    if(posicion == 0)
    {
        vec[posicion] = dato;
        cout<< "Ingresado en la posicion " << posicion << endl;
        posicion++;
    }
    else
    {
        if(dato >= vec[posicion - 1])
        {
            vec[posicion] = dato;
            cout<< "Ingresado en la posicion " << posicion << endl;
            posicion++;
        }
        else
        {
            do
            {
                if(vec[posicion - 1 - i] > dato)
                {
                    aux = vec[posicion - 1 - i];
                    vec[posicion - 1 - i] = dato;
                    vec[posicion - i] = aux;
                }
                i++;
            }
            while(vec[posicion - 1 - i] > dato);
            cout<< "Ingresado en la posicion " << posicion - i << endl;
            posicion++;
        }
    }
    cout<< endl;
}
void extraerDato(int vec[],int &posicion)
{
    int aux;
    if(posicion == 0)
        cout<< "Lista vacia ingrese datos primero\n";
    else
    {
        posicion--;
        aux = vec[posicion];
        vec[posicion] = 0;
        cout<< "Dato extraido: " << aux << endl;
    }
    cout<< endl;
}

void mostrar(int vec[], int tam)
{
    if(vec[0] == 0)
        cout<< "Lista vacia ingrese datos primero\n";
    else
    {
        for(int i = 0; i < tam; i++)
        {
            if(vec[i] != 0)
                cout<< vec[i]<< endl;
        }
    }
    cout<< endl;
}

void menu()
{
    cout<< "1 - Ingresar un dato\n";
    cout<< "2 - Extraer dato de la lista\n";
    cout<< "3 - Mostrar lista\n";
    cout<< "Esc Salir\n\n";
}
int main()
{
    int lista[20], x, posicion = 0;
    char opcion;
    inicializar(lista, 20);

    do
    {
        menu();
        do
        {
            opcion = getch();
        }
        while(opcion != 27 && opcion < 1 && opcion > 3);
        switch(opcion)
        {
        case '1':
            if(posicion == 19)
                cout<< "Lista llena, extraiga datos para agregar nuevos\n";
            else
            {
                cout<< "Ingrese una dato\n";
                cin>> x;
                insertarDato(lista, 20, x, posicion);
            }
            break;
        case '2':
            extraerDato(lista, posicion);
            break;
        case '3':
            mostrar(lista, 20);
            break;
        }
    }
    while(opcion != 27);
    return 0;
}
