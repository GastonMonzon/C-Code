#include <iostream>

using namespace std;

int main()
{
    unsigned int dia, mes, anio, cantNacOct=0, cantNacPre990=0, cantNacFPri82=0, mayor=0;
    char sexo, masVieja;
    bool diaflag=true;
    do
    {
        cout<< "Ingrese dia, mes y anio de nacimiento y sexo, M para masculino y F para fememenino seguido de Enter o 0 para finalizar\n";
        cin>> dia;
        if(dia!=0)
        {
            do
            {
                cin>> mes;
                if(mes>12 || mes<1)
                    cout<< "Mes invalido reingrese\n";
                else
                {
                    do
                    {
                        cin>> anio;
                        if(anio<1 || anio>2019)
                            cout<< "Anio invalido reingrese\n";
                        else
                        {
                            do
                            {
                                if(!diaflag)
                                    cin>> dia;
                                if((mes==4 || mes==6 || mes==9 || mes== 11) && dia>30 ||
                                        (mes==2 && dia>29) || dia<1 || dia>31 ||
                                        ((mes==2 && dia==29) && !(anio%400==0 || (anio%4==0 && anio%100!= 0))))
                                {
                                    cout<< "Dia invalido reingrese\n";
                                    diaflag=false;
                                }
                                else
                                {
                                    do
                                    {
                                        cin>> sexo;
                                        if(sexo!='M' && sexo!='F')

                                            cout<< "Sexo invalido reingrese\n";

                                    }
                                    while(sexo!='M' && sexo!='F');
                                }
                            }
                            while((mes==4 || mes==6 || mes==9 || mes== 11) && dia>30 ||
                                    (mes==2 && dia>29) || dia<1 || dia>31 ||
                                    ((mes==2 && dia==29) && !(anio%400==0 || (anio%4==0 && anio%100!= 0))));
                        }
                    }
                    while(anio<1 || anio>2019);
                }
            }
            while(mes>12 || mes<1);
            if(mes==10)
                cantNacOct++;
            if((anio<1990 && mes<6) || (anio<1990 && mes==7 && dia<9))
                cantNacPre990++;
            if(anio==1982 && sexo=='F' && (mes==9 && dia>=21 || mes==12 && dia<21 || mes>9 && mes<12))
                cantNacFPri82++;
            if((anio*10000 + mes*100 + dia)>mayor)
            {
                mayor=(anio*10000 + mes*100 + dia);
                masVieja=sexo;
            }
        }
    }
    while(dia!=0);
    if(mayor==0)
        cout<< "No se ingresaron datos\n";
    else
    {
        cout<< "La cantidad de nacimientos en octubre es: "<< cantNacOct<< endl;
        cout<< "La cantidad de nacimientos antes del 9 de julio de 1990 es: "<< cantNacPre990<< endl;
        cout<< "La cantidad de nacimientos de mujeres en primavera de 1982 es: "<< cantNacFPri82<< endl;
        cout<< "El sexo de la persona mas vieja es: "<< masVieja<< endl;
    }
    return 0;
}
