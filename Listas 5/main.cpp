#include <iostream>
#include<stdio.h>
#include<cstring>
#include<conio.h>
using namespace std;

struct Alumno
{
    char nombre[50];
    char apellido[50];
    char dni[11];
    int legajo;
    int codcarrera;
};

struct NodoAlumno
{
    Alumno info;
    NodoAlumno *sgte;
};

void CargarDatosPrueba(void)
{
    FILE *f;
    f = fopen("Alumnos","wb");
    Alumno x;

    /*SE CARGAN 4 ALUMNOS DE PRUEBA */
    x.codcarrera=10;
    x.legajo=190263;
    strcpy(x.apellido,"HERRERA");
    strcpy(x.nombre,"FLORENCIA");
    strcpy(x.dni,"35678321");

    fwrite(&x, sizeof(Alumno),1,f);

    strcpy(x.apellido,"MAXIMILIANO");
    strcpy(x.nombre,"MENDEZ");
    strcpy(x.dni,"36432128");
    x.codcarrera=10;
    x.legajo=126211;
    fwrite(&x, sizeof(Alumno),1,f);

    strcpy(x.apellido,"JIMENA");
    strcpy(x.nombre,"REY");
    strcpy(x.dni,"30623943");
    x.codcarrera=10;
    x.legajo=190263;
    fwrite(&x, sizeof(Alumno),1,f);

    strcpy(x.apellido,"WALLACE");
    strcpy(x.nombre,"ESTHER");
    strcpy(x.dni,"12321543");
    x.codcarrera=10;
    x.legajo=71432;
    fwrite(&x, sizeof(Alumno),1,f);

    fclose(f);
}
void InsertarAlumno(NodoAlumno *&lista)
{
    FILE *f;
    Alumno x;
    NodoAlumno *paux;

    f = fopen("Alumnos","rb");
    while(fread(&x, sizeof(Alumno), 1, f))
    {
        if (lista == NULL)
        {
            lista = new NodoAlumno;
            lista->info = x;
            lista->sgte = NULL;
            paux = lista;
        }
        else
        {
            paux->sgte = new NodoAlumno;
            paux = paux->sgte;
            paux->info = x;
            paux->sgte = NULL;
        }
    }
    fclose(f);
}
void mostrar(NodoAlumno *lista)
{
    while(lista)
    {
        cout << "Apellido y nombre: " << lista->info.apellido << ", " << lista->info.nombre << endl;
        cout << "DNI: " << lista->info.dni << endl;
        cout << "Legajo: " << lista->info.legajo << endl;
        cout << "Carrera: " << lista->info.codcarrera<< endl << endl;
        lista = lista->sgte;
    }
    cout<< endl;
}

int main()
{
    FILE *f;
    NodoAlumno *Alumnos = NULL;
    CargarDatosPrueba();
    InsertarAlumno(Alumnos);
    mostrar(Alumnos);

    return 0;
}
