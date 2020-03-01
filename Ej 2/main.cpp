#include <iostream>
#include <iomanip>
//para usar setw

using namespace std;

int main()
{
    int dia, mes, anio;
    do
    {
        cout<<"Ingrese el dia 0 para salir\n";
        cin>> dia;
        if(dia!=0)
        {
            if(dia<1 || dia>31)
                cout<< "Dato incorrecto\n";
            else
            {
                do
                {
                    cout<< "Ingrese mes\n";
                    cin>> mes;
                    if(mes<1 || mes>12)
                        cout<< "Dato incorrecto\n";
                    else
                    {
                        do
                        {
                            cout<< "Ingrese anio\n";
                            cin>> anio;
                            if(anio<1 || anio>9999)
                                cout<< "Dato incorrecto\n";
                            else
                            {
                                do
                                {
                                    //Todos los casos invalidos con los mese inclusive con anios bisiestos en febrero
                                    if(((mes==4 || mes==6 || mes==9 || mes==11) && dia>30) || (mes==2 && dia>29) || ((mes==2 && dia==29) && !(anio%400==0 || (anio %4 ==0 && anio %100 !=0))))
                                    {
                                        cout<< "Dato incorrecto, reingrese dia\n";
                                        cin>> dia;
                                    }
                                    else
                                    {
                                        cout<< "La fecha en formato AAAAMMDD es: ";
                                        cout.fill('0');
                                        //Rellena con el caracter impuesto
                                        cout<< setw(4)<< anio<< setw(2)<< mes<< setw(2)<< dia<< endl<< endl;
                                        //Setw setea la cantidad de caracteres, de ser menor agrega con cout.fill('caracter')

                                        //Otra forma menos practica
//                                        if(anio<1000)
//                                            cout<< "0";
//                                        if(anio<100)
//                                            cout<< "00";
//                                        if(anio<10)
//                                            cout<< "000";
//
//                                    cout<< anio;
//                                    if(mes<10)
//                                        cout<< "0";
//                                    cout<< mes;
//                                    if(dia<10)
//                                        cout<< "0";
//                                    cout<< dia<< endl<< endl;
                                }
                            }
                            while(((mes==4 || mes==6 || mes==9 || mes==11) && dia>30) || (mes==2 && dia>29) || ((mes==2 && dia==29) && !(anio%400==0 || (anio %4 ==0 && anio %100 !=0))));
                        }
                    }
                    while(anio<1 || anio>9999);
                }
            }
            while(mes<1 || mes>12);
        }
    }
}
while(dia!=0 || (dia<1 && dia>31));

return 0;
}
