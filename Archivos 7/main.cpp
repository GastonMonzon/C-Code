#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

struct Alumno
{
    char nombre[30];
    char apellido[30];
    int legajo;
    int DNI;
    char fechaDeNacimiento[10];
};
void agregarAlumno()
{
    FILE *f;
    Alumno al;
    if(f = fopen("Alumno", "ab"))
    {
//        cout<< "Ingrese nombre:\n";
//        cin>> al.nombre;
//        cout<< "Ingrese apellido:\n";
//        cin>> al.apellido;
        cout<< "Ingrese Legajo:\n";
        cin>> al.legajo;
//        cout<< "Ingrese DNI:\n";
//        cin>>  al.DNI;
//        cout<< "Ingrese Fecha de nacimiento separados por / en el siguiente formato: DD/MM/AA:\n";
//        cin>> al.fechaDeNacimiento;
        fwrite(&al, sizeof(Alumno), 1, f);
    }
    fclose(f);
}
void listarTodo()
{
    FILE *f;
    Alumno al;
    if(f = fopen("Alumno", "rb"))
    {
        cout<< "Lista\n" << endl;
        while(fread(&al, sizeof(Alumno), 1, f))
        {
            cout<< endl;
//            cout<< al.nombre<< endl;
//            cout<< al.apellido<< endl;
            cout<< al.legajo<< endl;
//            cout<< al.DNI<< endl;
//            cout<< al.fechaDeNacimiento<< endl << endl;
//            fread(&al, sizeof(Alumno), 1, f);
        }
    }
    fclose(f);
}
void buscarXlegajo(int legajoBuscado)
{
    FILE *f;
    Alumno al;
    char opcion;

    if(f = fopen("Alumno", "rb"))
    {
        while(fread(&al, sizeof(Alumno), 1, f))
        {
            if(legajoBuscado == al.legajo)
            {
                cout<< "Alumno encontrado:\n";
                cout<< endl;
                cout<< al.nombre<< endl;
                cout<< al.apellido<< endl;
                cout<< al.legajo<< endl;
                cout<< al.DNI<< endl;
                cout<< al.fechaDeNacimiento<< endl << endl;
                fclose(f);
                return;
            }
        }
    }
    fclose(f);
    cout<< "Alumno no encontrado. Presione Enter para ingresar nuevamente o Esc para volver al menu\n";
    do
    {
        opcion = getch();
    }
    while(opcion != 27 && opcion != 13);
    if(opcion != 27)
    {
        int legajo;
        cout<< "Reingrese Legajo:\n";
        cin>> legajo;
        buscarXlegajo(legajo);
    }
}
void buscarXdni(int dniBuscado)
{
    FILE *f;
    Alumno al;
    char opcion;

    if(f = fopen("Alumno", "rb"))
    {
        while(fread(&al, sizeof(Alumno), 1, f))
        {
            if(dniBuscado == al.DNI)
            {
                cout<< "Alumno encontrado:\n";
                cout<< endl;
                cout<< al.nombre<< endl;
                cout<< al.apellido<< endl;
                cout<< al.legajo<< endl;
                cout<< al.DNI<< endl;
                cout<< al.fechaDeNacimiento<< endl << endl;
                fclose(f);
                return;
            }
        }
    }
    fclose(f);
    cout<< "Alumno no encontrado. Presione Enter para ingresar nuevamente o Esc para volver al menu\n";
    do
    {
        opcion = getch();
    }
    while(opcion != 27 && opcion != 13);
    if(opcion != 27)
    {
        int dni;
        cout<< "Reingrese DNI:\n";
        cin>> dni;
        buscarXdni(dni);
    }
}
void OrdenarXlegajo()
{
    FILE *f;
    Alumno al1, al2;

    f = fopen("Alumno", "rb+");
    fseek(f, sizeof(Alumno), SEEK_END);
    long tamAl = ftell(f)/sizeof(Alumno);

    for(int i = 0; i < tamAl - 1; i++)
    {
        fseek(f, 0, SEEK_SET);
        for(int j = 0; j < tamAl - 1 - i; j++)
        {
            fread(&al1, sizeof(Alumno), 1, f);
            fread(&al2, sizeof(Alumno), 1, f);
            if(al1.legajo > al2.legajo)
            {
                fseek(f, (-2)*sizeof(Alumno), SEEK_CUR);
                fwrite(&al2, sizeof(Alumno), 1, f);
                fwrite(&al1, sizeof(Alumno), 1, f);
            }
            fseek(f, (-1)*sizeof(Alumno), SEEK_CUR);
        }
    }
    fclose(f);
    listarTodo();
}
void menu()
{
    cout<< "Ingrese una opcion:\n";
    cout<< "1 - Agregar un alumno\n";
    cout<< "2 - Listar todos los alumnos\n";
    cout<< "3 - Buscar alumno por legajo\n";
    cout<< "4 - Buscar alumno por DNI\n";
    cout<< "5 - Ordenar archivo por legajo\n";
    cout<< "Esc - Salir\n";
}
int main()
{
    char opcion;
    int legajo, dni;
    do
    {
        menu();
        do
        {
            opcion = getch();
        }
        while(!((opcion > '0' && opcion < '6')) && opcion != 27);
        switch(opcion)
        {
        case '1':
            agregarAlumno();
            break;
        case '2':
            listarTodo();
            break;
        case '3':
            cout<< "Ingrese Legajo del alumno a buscar:\n";
            cin>> legajo;
            buscarXlegajo(legajo);
            break;
        case '4':
            cout<< "Ingrese DNI del alumno a buscar:\n";
            cin>> dni;
            buscarXdni(dni);
            break;
        case '5':
            OrdenarXlegajo();
            break;
        }
    }
    while(opcion != 27);


    return 0;
}
