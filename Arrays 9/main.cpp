#include <iostream>
#include <conio.h>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

void inicializar(char tabla[][4][50])
{
    for(int i = 0; i < 50; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            strcpy(tabla[i][j],"");
        }
    }
}
void agregarDatos(char tabla[][4][50], int fila)
{
//    cout<< "Ingrese Apellido y Nombre\n";
//    fflush(stdin);
//    gets(tabla[fila - 1][0]);
//    cout<< "Ingrese Direccion\n";
//    fflush(stdin);
//    gets(tabla[fila - 1][1]);
    cout<< "Ingrese Telefono\n";
    cin>> tabla[fila - 1][2];
    cout<< "Ingrese Codigo Postal\n";
    cin>> tabla[fila - 1][3];
    return;
}
void ordenarPorCP(char tabla[][4][50], int cantAOrdenar)
{
    char aux[50];
    for(int i = 0; i < cantAOrdenar - 1; i++)
    {
        for(int j = 0; j < cantAOrdenar - 1 - i; j++)
        {
            if(atoi(tabla[j+1][3]) < atoi(tabla[j][3]))
                for(int columna = 0; columna < 4; columna++)
                {
                    strcpy(aux, tabla[j][columna]);
                    strcpy(tabla[j][columna], tabla[j+1][columna]);
                    strcpy(tabla[j+1][columna], aux);
                }
        }
    }
    for(int i = 0; i < cantAOrdenar; i++)
    {
//        cout<< "Apellido y Nombre: " << tabla[i][0]<< endl;
//        cout<< "Direccion        : " << tabla[i][1]<< endl;
        cout<< "Telefono         : " << tabla[i][2]<< endl;
        cout<< "Codigo Postal    : " << tabla[i][3]<< endl;
    }
    return;
}
void ordenarPorTelefono(char tabla[][4][50], int cantAOrdenar)
{
    char aux[50];
    for(int i = 0; i < cantAOrdenar - 1; i++)
    {
        for(int j = 0; j < cantAOrdenar - 1 - i; j++)
        {
            if(atoi(tabla[j+1][3]) < atoi(tabla[j][3]))
                for(int columna = 0; columna < 4; columna++)
                {
                    strcpy(aux, tabla[j][columna]);
                    strcpy(tabla[j][columna], tabla[j+1][columna]);
                    strcpy(tabla[j+1][columna], aux);
                }
        }
    }
    for(int i = 0; i < cantAOrdenar; i++)
    {
//        cout<< "Apellido y Nombre: " << tabla[i][0]<< endl;
//        cout<< "Direccion        : " << tabla[i][1]<< endl;
        cout<< "Telefono         : " << tabla[i][2]<< endl;
        cout<< "Codigo Postal:     " << tabla[i][3]<< endl;
    }
    return;
}

int main()
{
    char matriz[50][4][50];
//    inicializar(matriz);
    agregarDatos(matriz, 1);
    agregarDatos(matriz, 2);
    agregarDatos(matriz, 3);
    agregarDatos(matriz, 4);
    ordenarPorCP(matriz, 4);
    ordenarPorTelefono(matriz, 4);
    return 0;
}
