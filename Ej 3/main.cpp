#include <iostream>

using namespace std;

int main()
{
    int fecha, anio, mes, dia;
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
                if(mes<1 || mes>12)
                    cout<< "Fecha invalida\n";
                else
                {
                    dia=fecha%100;
                    if(dia<1 || dia>31)
                        cout<< "Fecha invalida\n";
                    else
                    {
                        anio=fecha/10000;
                        //Todos los casos invalidos con los mese inclusive con anios bisiestos en febrero
                        if((mes==4 || mes==6 || mes==9 || mes==11) && dia>30 || (mes==2 && dia>29) || ((mes==2 && dia==29) && !(anio%400==0 || (anio %4 ==0 && anio %100 !=0))))
                            cout<< "Fecha invalida\n";
                        else
                        {
                            switch(mes)
                            {
                            case 1:
                                cout<< dia << " de Enero de " << anio << endl;
                                break;
                            case 2:
                                cout<< dia << " de Febrero de " << anio << endl;
                                break;
                            case 3:
                                cout<< dia << " de Marzo de " << anio << endl;
                                break;
                            case 4:
                                cout<< dia << " de Abril de " << anio << endl;
                                break;
                            case 5:
                                cout<< dia << " de Mayo de " << anio << endl;
                                break;
                            case 6:
                                cout<< dia << " de Junio de " << anio << endl;
                                break;
                            case 7:
                                cout<< dia << " de Julio de " << anio << endl;
                                break;
                            case 8:
                                cout<< dia << " de Agosto de " << anio << endl;
                                break;
                            case 9:
                                cout<< dia << " de Septiembre de " << anio << endl;
                                break;
                            case 10:
                                cout<< dia << " de Octubre de " << anio << endl;
                                break;
                            case 11:
                                cout<< dia << " de Noviembre de " << anio << endl;
                                break;
                            case 12:
                                cout<< dia << " de Diciembre de " << anio << endl;
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    while(fecha != 0);
    return 0;
}
