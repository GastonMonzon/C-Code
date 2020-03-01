#include <iostream>

using namespace std;

int main()
{
    unsigned int horaInicial, tiempo, horaFinal, segundos, minutos, horas, dias=0;
    do
    {
        cout<< "Ingrese la hora en formato HHMMSS\n";
        cin>> horaInicial;
        if(horaInicial>996060)
            cout<< "Dato incorrecto\n";
        else
        {
            segundos=horaInicial%100;
            if(segundos>60)
                cout<< "Dato incorrecto\n";
            else
            {
                minutos=(horaInicial/100)%100;
                if(minutos>60)
                    cout<< "Dato incorrecto\n";
                else

                {
                    horas=horaInicial/10000;
                }
            }
        }
    }
    while(horaInicial>996060 || segundos>60 || minutos>60);

    cout<< "Ingrese un tiempo a sumar en formato HHMMSS\n";
    cin>> tiempo;
    segundos+=tiempo%100;
    minutos+=(tiempo/100)%100;
    horas+=tiempo/10000;
    if(segundos>60)
    {
        do
        {
            segundos-=60;
            minutos+=1;
        }
        while(segundos>60);
    }
    if(minutos>60)
    {
        do
        {
            minutos-=60;
            horas+=1;
        }
        while(minutos>60);
    }
    if(horas>24)
    {
        do
        {
            horas-=24;
            dias+=1;
        }
        while(horas>24);
    }
    horaFinal=(horas*10000)+(minutos*100)+segundos;
    if(dias>0)
        cout<< "La hora en formato HHMMSS es: "<< dias<< " dias + "<< horaFinal;
    else
        cout<< "La hora en formato HHMMSS es: "<< horaFinal;
    return 0;
}
