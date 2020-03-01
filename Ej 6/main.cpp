#include <iostream>

using namespace std;

int main()
{
    int fecha, fecha2, anio, anio2, mes, mes2, dia, dia2;
    string Mes, Mes2;
    do
    {
        cout<< "Ingrese una fecha en formato AAAAMMDD o 0 para salir\n";
        cin>> fecha;
        if(fecha!=0)
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
                        anio = fecha / 10000;
                        //Todos los casos invalidos con los mese inclusive con anios bisiestos en febrero
                        if((mes==4 || mes==6 || mes==9 || mes==11) && dia>30 || (mes==2 && dia>29) || ((mes == 2 && dia == 29) && !(anio % 400 == 0 || (anio % 4 == 0 && anio % 100 != 0))))
                            cout<< "Fecha invalida\n";
                        else
                        {
                            do
                            {
                                cout<< "Ingrese otra fecha en formato AAAAMMDD o 0 para salir\n";
                                cin>> fecha2;
                                if(fecha2!=0)
                                {
                                    if(fecha2<10101 || fecha2>99991231)
                                        cout<< "Fecha invalida\n";
                                    else
                                    {
                                        mes2=(fecha2/100)%100;
                                        if(mes2>12 || mes2<1)
                                            cout<< "Fecha invalida\n";
                                        else
                                        {
                                            dia2=fecha2%100;
                                            if(dia2>31 || dia2<1)
                                                cout<< "Fecha invalida\n";
                                            else
                                            {
                                                anio2=fecha2/10000;
                                                if((mes2==4 || mes2==6 || mes2==9 || mes2==11) && dia2>30 || (mes2==2 && dia2>29) || ((mes2==2 && dia2==29) && !(anio2%400==0 || (anio2%4==0 && anio2 % 100!=0))))
                                                    cout<< "Fecha invalida\n";
                                                else
                                                {
                                                    switch(mes)
                                                    {
                                                    case 1:
                                                        Mes="Enero";
                                                        break;
                                                    case 2:
                                                        Mes="Febrero";
                                                        break;
                                                    case 3:
                                                        Mes="Marzo";
                                                        break;
                                                    case 4:
                                                        Mes="Abril";
                                                        break;
                                                    case 5:
                                                        Mes="Mayo";
                                                        break;
                                                    case 6:
                                                        Mes="Junio";
                                                        break;
                                                    case 7:
                                                        Mes="Julio";
                                                        break;
                                                    case 8:
                                                        Mes="Agosto";
                                                        break;
                                                    case 9:
                                                        Mes="Septiembre";
                                                        break;
                                                    case 10:
                                                        Mes="Octubre";
                                                        break;
                                                    case 11:
                                                        Mes="Noviembre";
                                                        break;
                                                    case 12:
                                                        Mes="Diciembre";
                                                        break;
                                                    }
                                                    switch(mes2)
                                                    {
                                                    case 1:
                                                        Mes2="Enero";
                                                        break;
                                                    case 2:
                                                        Mes2="Febrero";
                                                        break;
                                                    case 3:
                                                        Mes2="Marzo";
                                                        break;
                                                    case 4:
                                                        Mes2="Abril";
                                                        break;
                                                    case 5:
                                                        Mes2="Mayo";
                                                        break;
                                                    case 6:
                                                        Mes2="Junio";
                                                        break;
                                                    case 7:
                                                        Mes2="Julio";
                                                        break;
                                                    case 8:
                                                        Mes2="Agosto";
                                                        break;
                                                    case 9:
                                                        Mes2="Septiembre";
                                                        break;
                                                    case 10:
                                                        Mes2="Octubre";
                                                        break;
                                                    case 11:
                                                        Mes2="Noviembre";
                                                        break;
                                                    case 12:
                                                        Mes2="Diciembre";
                                                        break;
                                                    }
                                                    if(fecha>fecha2)

                                                        cout<< dia << " " << Mes << " " << anio << " es mas reciente que " << dia2 << " " << Mes2 << " " << anio2 << endl;
                                                    else
                                                    {
                                                        if(fecha==fecha2)
                                                            cout<< "Ambas fechas son iguales\n";
                                                        else
                                                            cout<< dia2 << " " << Mes2 << " " << anio2 << " es mas reciente que " << dia << " " << Mes << " " << anio << endl;
                                                    }
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            while(fecha2 != 0);
                        }
                    }
                }
            }
        }
    }
    while(fecha != 0 && fecha2 != 0);
    return 0;
}
