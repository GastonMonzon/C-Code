#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string listaNombres[100];
    int listaFechas[100], i=0, fecha, anio, mes, dia, mayor=INT_MIN, menor=INT_MAX, posmay=0, posmen=0;
    do
    {
        bool Fecha=false;
        cout<< "Ingrese nombre\n";
        cin>> listaNombres[i];
        do
        {
            cout<< "Ingrese una fecha en formato AAAAMMDD\n";
            cin>> fecha;
            if(fecha != 0)
            {
                if(fecha<10101 || fecha>99991231)
                    cout<< "Fecha invalida\n";
                else
                {
                    mes=(fecha/100)%100;
                    if(mes>12 || mes<1)
                        cout<< "Fecha invalida\n";
                    else
                    {
                        dia=fecha%100;
                        if(dia>31 || dia<1)
                            cout<< "Fecha invalida\n";
                        else
                        {
                            anio=fecha/10000;
                            if((mes==4 || mes==6 || mes==9 || mes==11) && dia>30 || (mes==2 && dia>29) || ((mes==2 && dia==29) && !(anio%400==0 || (anio%4==0 && anio%100!=0))))
                                cout<< "Fecha invalida\n";
                            else
                            {
                                listaFechas[i]=fecha;
                                if(fecha>mayor)
                                {
                                    mayor=fecha;
                                    posmay=i;
                                }
                                if(fecha<menor)
                                {
                                    menor=fecha;
                                    posmen=i;
                                }
                                Fecha=true;
                                i++;
                            }
                        }
                    }
                }
            }
        }
        while(!Fecha);
    }
    while((listaNombres[i-1].compare("FIN")) !=0);
    cout<< "La persona con mayor edad es " << listaNombres[posmay]<< " con fecha de nacimiento " << listaFechas[posmay]<< endl;
    cout<< "La persona con menor edad es " << listaNombres[posmen]<< " con fecha de nacimiento " << listaFechas[posmen]<< endl;
    return 0;
}
