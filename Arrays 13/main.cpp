#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <cstring>
#include <stdio.h>
#define CANT 100

using namespace std;

struct Empleado
{
    string apellidoYnombre;
    char sexo;
    int dni;
    string estadoCivil;
    string direccion;
    int telefono;
    int edad;
};

typedef Empleado empleado;

void inicializar(empleado v[], int cant)
{
    for(int i = 0; i < cant; i++)
        v[i].dni = -1;
    return;
}
void ingresarNuevo(empleado v[], int cant)
{
    char sexo, opcion;
    for(int i = 0; i < cant; i++)
    {
        if(v[i].dni == -1)
        {
            cout<< "Ingrese apellido y nombre del empleado numero "<< i + 1 << " :\n";
            cin>> v[i].apellidoYnombre;
            cout<< "Ingrese su direccion:\n";
            cin>> v[i].direccion;
            cout<< "Ingrese su DNI:\n";
            cin>> v[i].dni;
            cout<< "Ingrese su edad:\n";
            cin>> v[i].edad;
            cout<< "Ingrese su estado civil:\n";
            cin>> v[i].estadoCivil;
            cout<< "Ingrese su sexo, M para masculino, F para femenino:\n";
            do
            {
                sexo = getch();
            }
            while(sexo != 'M' || sexo != 'm' || sexo != 'F' || sexo != 'f');
            v[i].sexo = sexo;
            cout<< "Ingrese su telefono:\n";
            cin>> v[i].telefono;
            cout<< "Ingreso correcto\n";
            cout<< "Para ingresar otro presione Enter, caso contrario presione Esc\n";
            do
            {
                opcion = getch();
            }
            while(opcion != 27 || opcion != 13);
            if(opcion == 13)
            {
                ingresarNuevo(v, cant);
                return;
            }
            else
                return;
        }
    }
    cout << "Error al intentar ingresar nuevo. Vector lleno\n";
    return;
}
void mostrarEmpleado(empleado x)
{
    cout<< "Apellido y Nombre: " << x.apellidoYnombre << endl;
    cout<< "Direccion        : " << x.direccion << endl;
    cout<< "DNI              : " << x.dni << endl;
    cout<< "Edad             : " << x.edad << endl;
    cout<< "Estado civil     : " << x.estadoCivil << endl;
    cout<< "Sexo             : " << x.sexo << endl;
    cout<< "Telefono         : " << x.telefono << endl;
    return;
}
void buscarXDni(empleado v[], int cant, int DNI)
{

    char opcion;
    int arriba = cant - 1, abajo  = 0, centro;
    Empleado aux;
    for(int i = 0; i < cant - 1; i++)
    {
        for(int j = 0; j < cant - 1 - i; j++)
        {
            if(v[j+1].dni < v[j].dni)
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
    while(abajo <= arriba)
    {
        centro = (arriba + abajo)/2;
        if(v[centro].dni == DNI)
        {
            mostrarEmpleado(v[centro]);
            return;
        }
        else
        {
            if(DNI < v[centro].dni)
                arriba = centro - 1;
            else
                abajo = centro + 1;
        }
    }
    cout<< "Empleado no encontrado. Presione Enter para ingresar nuevamente o Esc para volver al menu\n";
    do
    {
        opcion = getch();
    }
    while(opcion != 27 || opcion != 13);
    if(opcion == 27)
        return;
    else
    {
        int DNI;
        cout<< "Reingrese DNI:\n";
        cin>> DNI;
        buscarXDni(v, cant, DNI);
        return;
    }
    return;
}
void mostrarLista(empleado v[], int cant)
{
    for(int i = 0; i < cant; i++)
    {
        cout<< "Apellido y Nombre: " << v[i].apellidoYnombre << endl;
        cout<< "Direccion        : " << v[i].direccion << endl;
        cout<< "DNI              : " << v[i].dni << endl;
        cout<< "Edad             : " << v[i].edad << endl;
        cout<< "Estado civil     : " << v[i].estadoCivil << endl;
        cout<< "Sexo             : " << v[i].sexo << endl;
        cout<< "Telefono         : " << v[i].telefono << endl;
    }
    return;
}
void OrdenarAlfabAsc(empleado v[], int cant)
{
    Empleado aux;
    for(int i = 0; i < cant - 1; i++)
    {
        for(int j = 0; j < cant - 1 - i; j++)
        {
            if(v[j+1].apellidoYnombre < v[j].apellidoYnombre)
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
    mostrarLista(v, cant);
    return;
}
void OrdenarAlfabDes(empleado v[], int cant)
{
    Empleado aux;
    for(int i = 0; i < cant - 1; i++)
    {
        for(int j = 0; j < cant - 1 - i; j++)
        {
            if(v[j+1].apellidoYnombre > v[j].apellidoYnombre)
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
    mostrarLista(v, cant);
    return;
}
void OrdenarDNIAsc(empleado v[], int cant)
{
    Empleado aux;
    for(int i = 0; i < cant - 1; i++)
    {
        for(int j = 0; j < cant - 1 - i; j++)
        {
            if(v[j+1].dni < v[j].dni)
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
    mostrarLista(v, cant);
    return;
}
void OrdenarDNIDes(empleado v[], int cant)
{
    Empleado aux;
    for(int i = 0; i < cant - 1; i++)
    {
        for(int j = 0; j < cant - 1 - i; j++)
        {
            if(v[j+1].dni > v[j].dni)
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
    mostrarLista(v, cant);
    return;
}
void OrdenarEdadAsc(empleado v[], int cant)
{
    Empleado aux;
    for(int i = 0; i < cant - 1; i++)
    {
        for(int j = 0; j < cant - 1 - i; j++)
        {
            if(v[j+1].edad < v[j].edad)
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
    mostrarLista(v, cant);
    return;
}
void OrdenarEdadDes(empleado v[], int cant)
{
    Empleado aux;
    for(int i = 0; i < cant - 1; i++)
    {
        for(int j = 0; j < cant - 1 - i; j++)
        {
            if(v[j+1].edad > v[j].edad)
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
    mostrarLista(v, cant);
    return;
}
void promedioEdad(empleado v[], int cant)
{
    int suma = 0;
    float promedio;

    for(int i = 0; i < cant - 1; i++)
        suma += v[i].edad;
    promedio = suma/cant;
    cout<< "EL promedio de edad de los empleados es: "<< promedio << endl;
    return;
}
void mostrarMenu()
{
    cout<< "Ingrese una opcion\n";
    cout<< "1 - Agregar nuevo empleado\n";
    cout<< "2 - Buscar\n";
    cout<< "3 - Ver la lista\n";
    cout<< "4 - Ver edad promedio\n";
    cout<< "5 - Proximos a jubilarse alfabeticamente\n";
    cout<< "Esc - Salir\n";
}
void mostrarMenuOrden()
{
    cout<< "Ingrese una opcion\n";
    cout<< "1 - Ver lista alfabeticamente ascendiente\n";
    cout<< "2 - Ver lista alfabeticamente descendiente\n";
    cout<< "3 - Ver lista en orden de DNI ascendiente\n";
    cout<< "4 - Ver lista en orden de DNI descendiente\n";
    cout<< "5 - Ver lista en orden de edad ascendiente\n";
    cout<< "6 - Ver lista en orden de edad descendiente\n";
}
int main()
{
    char opcion;
    int DNI;
    empleado listaDeEmpleados[CANT];
    inicializar(listaDeEmpleados,CANT);
    do
    {
        mostrarMenu();
        do
        {
            opcion = getch();
        }
        while(opcion != 27 && opcion < 1 && opcion > 5);

        switch(opcion)
        {
        case 1:
            ingresarNuevo(listaDeEmpleados, CANT);
            break;
        case 2:
            cout<< "Ingrese DNI del empleado a buscar:\n";
            cin>> DNI;
            buscarXDni(listaDeEmpleados,CANT, DNI);
            break;
        case 3:
            mostrarMenuOrden();
            do
            {
                opcion = getch();
            }
            while(opcion != 27 && opcion < 1 && opcion > 6);
                switch(opcion)
                {
                case 1:
                    OrdenarAlfabAsc(listaDeEmpleados, CANT);
                    break;
                case 2:
                    OrdenarAlfabDes(listaDeEmpleados,CANT);
                    break;
                case 3:
                    OrdenarDNIAsc(listaDeEmpleados, CANT);
                    break;
                case 4:
                    OrdenarDNIDes(listaDeEmpleados, CANT);
                    break;
                case 5:
                    OrdenarEdadAsc(listaDeEmpleados, CANT);
                    break;
                case 6:
                    OrdenarEdadDes(listaDeEmpleados, CANT);
                    break;
                }
            break;
        case 4:
            promedioEdad(listaDeEmpleados, CANT);
            break;
        case 5:
            OrdenarAlfabDes(listaDeEmpleados, CANT);
            int i =0;
            while(i < CANT && listaDeEmpleados[i].dni != -1)
            {
                if ((listaDeEmpleados[i].sexo == 'F' && listaDeEmpleados[i].edad == 59)
                || (listaDeEmpleados[i].sexo== 'M' && listaDeEmpleados[i].edad==64))
                    cout << listaDeEmpleados[i].apellidoYnombre << " , " << listaDeEmpleados[i].dni << ".\n";
                i++;
            }
            break;
        }
        cout<< "Presione Esc para salir o una tecla para volver\n";
        getch();
        system("cls");
    }
    while((int)opcion != 27);
    /* Comparar con strcmp*/
// Otra forma de hacerlo con char
//    fflush(stdin);
//    gets(listaEmpleados[0].apellidoYnombre);
//    gets(listaEmpleados[1].apellidoYnombre);
//    for(int i = 0; i < 24; i++)
//    {
//        for(int j = 0; j < 24 - i; j++)
//        {
//            if(strcmp(listaEmpleados[j].apellidoYnombre, listaEmpleados[j+1].apellidoYnombre) == 1)
//            {
//                aux = listaEmpleados[j];
//                listaEmpleados[j] = listaEmpleados[j+1];
//                listaEmpleados[j+1] = aux;
//            }
//        }
//    }    cout<< strcmp(listaEmpleados[0].apellidoYnombre, listaEmpleados[1].apellidoYnombre)<< endl;
    return 0;
}
