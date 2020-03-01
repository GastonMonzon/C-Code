#include <iostream>

using namespace std;

struct Alumno
{
    char nombre[50];
    char apellido[50];
    char dni[11];
    int legajo;
    int codcarrera;
    struct Materia;
};
struct Materia
{
    char nombreMateria[50];
    char fechaAprovacion[11];
    int nota;
    int libro;
    int folio;
};
struct NodoAlumno
{
    Alumno info;
    NodoAlumno *sgte;
};


int main()
{
    return 0;
}
