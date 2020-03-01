#include <iostream>

using namespace std;

struct Lista
{
    string nombre;
    int fecha;
};
int main()
{
    Lista listaPersonas[100];
    int i = 0, fecha, anio, mes, dia, mayor = INT_MIN, menor = INT_MAX, posmay = 0, posmen = 0;
    do
    {
        bool Fecha = false;
        cout<< "Ingrese nombre\n";
        cin>> listaPersonas[i].nombre;
        do
        {
            cout<< "Ingrese una fecha en formato AAAAMMDD\n";
            cin>> fecha;
            if(fecha != 0)
            {
                if(fecha < 10101 || fecha > 99991231)
                    cout<< "Fecha invalida\n";
                else
                {
                    mes = (fecha / 100) % 100;
                    if(mes > 12 || mes < 1)
                        cout<< "Fecha invalida\n";
                    else
                    {
                        dia = fecha % 100;
                        if(dia > 31 || dia < 1)
                            cout<< "Fecha invalida\n";
                        else
                        {
                            if((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30 || (mes == 2 && dia > 29))
                                cout<< "Fecha invalida\n";
                            else
                            {
                                anio = fecha / 10000;
                                if((mes == 2 && dia == 29) && !(anio % 400 == 0 || (anio % 4 == 0 && anio % 100 != 0)))
                                    cout<< "Fecha invalida\n";
                                else
                                {
                                    listaPersonas[i].fecha = fecha;
                                    if(fecha > mayor)
                                    {
                                        mayor = fecha;
                                        posmay = i;
                                    }
                                    if(fecha < menor)
                                    {
                                        menor = fecha;
                                        posmen = i;
                                    }
                                    Fecha = true;
                                    i++;
                                }
                            }
                        }
                    }
                }
            }
        }
        while(!Fecha);
    }
    while(((listaPersonas[i-1].nombre).compare("FIN")) != 0);
    cout<< "La persona con mayor edad es " << listaPersonas[posmay].nombre << " con fecha de nacimiento " << listaPersonas[posmay].fecha << endl;
    cout<< "La persona con menor edad es " << listaPersonas[posmen].nombre << " con fecha de nacimiento " << listaPersonas[posmen].fecha << endl;
    return 0;
}
