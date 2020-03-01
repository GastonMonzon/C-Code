#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>

using namespace std;

struct Alumno
{
    char nombre[30];
    char apellido[30];
    int legajo;
    int DNI;
    char fechaDeNacimiento[10];
    bool borrado = false;

};
struct Cursada
{
    int codigoMateria;
    int codigoCurso;
    int ano;
    int cuatrimestre;
    int legajo;
    float notaFinal;
    bool borrado = false;

};

void agregarAlumno()
{
    FILE *f;
    Alumno al;
    if(f = fopen("Alumno", "ab"))
    {
        cout<< "Ingrese nombre:\n";
        cin>> al.nombre;
        cout<< "Ingrese apellido:\n";
        cin>> al.apellido;
        cout<< "Ingrese Legajo:\n";
        cin>> al.legajo;
        cout<< "Ingrese DNI:\n";
        cin>>  al.DNI;
        cout<< "Ingrese Fecha de nacimiento separados por / en el siguiente formato: DD/MM/AA:\n";
        cin>> al.fechaDeNacimiento;
        fwrite(&al, sizeof(Alumno), 1, f);
    }
    fclose(f);
}
void agregarCursada(int legajoBuscado)
{
    FILE *f, *fC;
    Alumno al;
    Cursada cur;
    char opcion;

    if(f = fopen("Alumno", "rb"))
    {
        while(fread(&al, sizeof(Alumno), 1, f))
        {
            if(legajoBuscado == al.legajo)
            {
                if(fC = fopen("Cursada", "ab"))
                {
                    cur.legajo = al.legajo;
                    cout<< "Alumno "<< al.apellido << " encontrado.\n";
                    cout<< "Ingrese codigo de la materia:\n";
                    cin>> cur.codigoMateria;
                    cout<< "Ingrese codigo de curso\n";
                    cin>> cur.codigoCurso;
                    cout<< "Ingrese ano:\n";
                    cin>> cur.ano;
                    cout<< "Ingrese cutrimestre:\n";
                    cin>> cur.cuatrimestre;
                    cout<< "Ingrese nota final:\n";
                    cin>> cur.notaFinal;
                    fwrite(&cur, sizeof(Cursada), 1, fC);
                    fclose(f);
                    fclose(fC);
                    return;
                }
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
        agregarCursada(legajo);
    }
}
void listarTodo()
{
    FILE *f;
    Alumno al;
    if(f = fopen("Alumno", "rb"))
    {
        fread(&al, sizeof(Alumno), 1, f);
        while(!feof(f))
        {
            cout<< al.nombre<< endl;
            cout<< al.apellido<< endl;
            cout<< al.legajo<< endl;
            cout<< al.DNI<< endl;
            cout<< al.fechaDeNacimiento<< endl;
            fread(&al, sizeof(Alumno), 1, f);
        }
    }
    fclose(f);
}
void buscarXlegajo(int legajoBuscado)
{
    FILE *f, *fC;
    Alumno al;
    Cursada cur;
    char opcion;
    bool datcur = false;

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
                if(fC = fopen("Cursada", "rb"))
                {
                    while(fread(&cur, sizeof(Cursada), 1, fC))
                    {
                        if(legajoBuscado == cur.legajo)
                        {
                            cout<< "Datos de cursada\n";
                            cout<< cur.codigoMateria << endl;
                            cout<< cur.codigoCurso << endl;
                            cout<< cur.ano << endl;
                            cout<< cur.cuatrimestre << endl;
                            cout<< cur.notaFinal << endl << endl;
                            datcur = true;
                        }
                    }
                    fclose(fC);
                }
                fclose(f);
                if(!datcur)
                {
                    cout<< "No hay datos de cursada. Presione Enter para ingresar datos de cursada o Esc para volver al menu\n";
                    do
                    {
                        opcion = getch();
                    }
                    while(opcion != 27 && opcion != 13);
                    if(opcion != 27)
                    {
                        agregarCursada(legajoBuscado);
                    }
                }
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
void borrarAlumno(int dniBuscado)
{
    FILE *f, *faux;
    Alumno al;
    char opcion;

    if (f=fopen("Alumno","rb+"))
    {
        while(!feof(f) && !al.borrado)
        {
            fread(&al,sizeof(Alumno),1,f);
            if (dniBuscado == al.DNI)
            {
                al.borrado = true;
                fseek(f,-sizeof(Alumno), SEEK_CUR);
                fwrite(&al,sizeof(Alumno),1,f);
            }
        }
        if (!al.borrado)
        {
            fclose(f);
            cout<< "Alumno no encontrado. Presione Enter para ingresar nuevamente o Esc para volver al menu\n";
            do
            {
                opcion = getch();
            }
            while(opcion != 27 || opcion != 13);
            if(opcion != 27)
            {
                int dni;
                cout<< "Reingrese DNI:\n";
                cin>> dni;
                borrarAlumno(dni);
            }
        }
    }
    fclose(f);
    faux = fopen("auxiliar","wb");
    if (f = fopen("Alumno","rb"))
    {
        while(fread(&al,sizeof(Alumno),1,f))
        {
            if (!al.borrado && !feof(f))
                fwrite(&al, sizeof(Alumno),1,faux);
        }
    }
    fclose(f);
    fclose(faux);
    if (!remove("Alumno"))
    {
        if(!rename("auxiliar","Alumno"))
            cout << "Archivo renombrado exitosamente\n\n";
        else
            cout << "No se pudo renombrar el archivo\n\n";
    }
    else
        cout << "No se pudo borrar el viejo archivo\n\n";
}
void menu()
{
    cout<< "Ingrese una opcion:\n";
    cout<< "1 - Agregar un alumno\n";
    cout<< "2 - Agregar cursada de un alumno\n";
    cout<< "3 - Listar todos los alumnos\n";
    cout<< "4 - Buscar alumno por legajo\n";
    cout<< "5 - Buscar alumno por DNI\n";
    cout<< "6 - Ordenar archivo por legajo\n";
    cout<< "7 - Borrar un alumno\n";
    cout<< "Esc - Salir\n";
    return;
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
        while(!(opcion > '0' && opcion < '7') && opcion != 27);
        switch(opcion)
        {
        case '1':
            agregarAlumno();
            break;
        case '2':
            cout<< "Ingrese legajo del alumno:\n";
            cin>> legajo;
            agregarCursada(legajo);
            break;
        case '3':
            listarTodo();
            break;
        case '4':
            cout<< "Ingrese legajo del alumno a buscar:\n";
            cin>> legajo;
            buscarXlegajo(legajo);
            break;
        case '5':
            cout<< "Ingrese DNI del alumno a buscar:\n";
            cin>> dni;
            buscarXdni(dni);
            break;
        case '6':
            OrdenarXlegajo();
            break;
        case '7':
            cout<< "Ingrese DNI del alumno a borrar:\n";
            cin>> dni;
            borrarAlumno(dni);
        }
    }
    while(opcion != 27);


    return 0;
}
