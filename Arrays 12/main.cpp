#include <iostream>
#include <conio.h>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct alumno
{
    char apellido[25];
    string tipoDeDoc = "DNI";
    int documento;
    int nota;
};

int main()
{
    int A=0, peorNota, plural = 0;
    float suma = 0, promedio;

    cout<< "Ingrese la cantidad de alumnos a agregar: \n";
    cin>> A;
    alumno vec[A];

    for(int i = 0; i < A - 1; i++)
    {
        cout<< "Ingrese Apellido:\n";
        fflush(stdin);
        gets(vec[i].apellido);
//        cin>> vec[i].apellido;
        cout<< "Ingrese Documento:\n";
        cin>> vec[i].documento;
        cout<< "Ingrese Nota:\n";
        cin>> vec[i].nota;
        if(vec[i].nota >= 7)
            plural++;
        if(strcmp(vec[i].apellido, "Wolf") == 0)
        {
            cout<< "Finaliza Lista.\n";
            break;
        }
    }
    if(plural == 0)
        cout<< "No hay alumnos que hayan aprobado con nota igual o mayor a 7.\n";
    else
        cout<< "Alumnos con nota igual o mayor a 7:\n";
    cout<< endl;
    for(int i = 0; i < A; i++)
    {
        if(vec[i].nota >= 7)
        {
            cout<< vec[i].apellido<< endl;
            cout<< vec[i].tipoDeDoc<< endl;
            cout<< vec[i].documento<< endl;
            cout<< "Nota: "<< vec[i].nota<< endl;
        }
        if(i == 0)
            peorNota = vec[i].nota;
        if(vec[i].nota < peorNota)
            peorNota = vec[i].nota;
        suma += vec[i].nota;
    }
    cout<< "Alumnos con peor nota:\n";
    cout<< endl;
    for(int i = 0; i < A; i++)
    {
        if(vec[i].nota == peorNota)
        {
            cout<< vec[i].apellido<< endl;
            cout<< vec[i].tipoDeDoc<< endl;
            cout<< vec[i].documento<< endl;
            cout<< "Nota: "<< vec[i].nota<< endl;
        }
    }
    promedio = suma/A;
    cout<< endl;
    cout<< "Promedio de notas: "<< promedio;
    return 0;
}
