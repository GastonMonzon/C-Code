#include <iostream>
#include <stdio.h>

using namespace std;

struct Alumno
{
    char nombre[30];
    char apellido[30];
    int legajo;
    int DNI;
    char fechaDeNacimiento[10];
};

int main()
{
    FILE *f;
    Alumno al;
//    f = fopen("Alumno", "ab");
//    for(int i = 0; i < 3; i++)
//    {
//
//        cout<< "Ingrese nombre:\n";
//        cin>> al.nombre;
//        cout<< "Ingrese apellido:\n";
//        cin>> al.apellido;
//        cout<< "Ingrese Legajo:\n";
//        cin>> al.legajo;
//        cout<< "Ingrese DNI:\n";
//        cin>>  al.DNI;
//        cout<< "Ingrese Fecha de nacimiento separados por / en el siguiente formato: DD/MM/AA:\n";
//        cin>> al.fechaDeNacimiento;
//        fwrite(&al, sizeof(Alumno), 1, f);
//    }
//    fclose(f);
    if (f = fopen("Alumno", "rb"))
    {
        fread(&al, sizeof(Alumno), 1, f);
        while(!feof(f))
        {
            cout<< endl;
            cout<< al.nombre<< endl;
            cout<< al.apellido<< endl;
            cout<< al.legajo<< endl;
            cout<< al.DNI<< endl;
            cout<< al.fechaDeNacimiento<< endl;
            fread(&al, sizeof(Alumno), 1, f);
        }
        fclose(f);
    }
    return 0;
}
