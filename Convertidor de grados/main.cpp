#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    cout<< "CONVERTIDOR DE GRADOS\n\n";
    float c, f, k, n;
    char opcion;
    do
    {
        cout<< "Elija los grados a convertir \n";
        cout<< "1- Celcius \n";
        cout<< "2- Farenheit \n";
        cout<< "3- Kelvin \n";
        cout<< "4- Newton \n";
        cout<< "Esc- Cerrar programa \n\n";

        do
        {
            opcion = getch();
        }
        while(opcion != '1' && opcion != '2' && opcion != '3' && opcion != '4' && opcion != 27);
        switch(opcion)
        {
        case '1':
            do
            {
                cout<< "Ingrese una temperatura en Celcius y presione Enter \n\n";
                cin>> c;
                if (c < -273.15)
                {
                    cout<< "Temperatura inexistente \n";
                }
            }
            while (c < -273.15);
            f = 32 + c * 9/5;
            k = c + 273.15;
            n = c * (33/100);
            cout<< "\nLa Temperatura ingresada en grados Celcius es: \n\n";
            cout<< f << " grados Farenheit\n\n" << k << " grados Kelvin\n\n" << n << " grados Newton \n\n";
            break;
        case '2':
            do
            {
                cout<< "Ingrese una temperatura en Farenheit y presione Enter \n\n";
                cin>>f;
                if (f < -459.67)
                {
                    cout<< "Temperatura inexixtente\n";
                }
            }
            while (f < -459.67);
            c = (f - 32) * 5/9;
            k = c - 273.15;
            n = c * 0.33;
            cout<< " \n";
            cout<< "La Temperatura ingresada en grados Farenheit es: \n\n";
            cout<< c << " grados Celcius\n\n" << k << " grados Kelvin \n\n" << n << " grados Newton \n\n";
            break;
        case '3':
            do
            {
                cout<< "Ingrese una Temperatura en grados Kelvin \n\n";
                cin>> k;
                if(k < 0)
                {
                    cout<< "Temperatura inexistente \n";
                }
            }
            while(k < 0);
            c = k - 273.15;
            f = 32 + c * 9/5;
            n = c * (33/100);
            cout<< "\nLa Temperatura ingresada en grados Kelvin es: \n\n";
            cout<< c << " grados Celcius\n\n"<< k << " grados Farenheit \n\n" << n << " grados Newton \n\n";
            break;
        case '4':
            do
            {
                cout<< "Ingrese una Temperatura en grados Newton \n\n";
                cin>> n;
                if(n < -90.1395)
                {
                    cout<< "Temperatura inexistente \n";
                }
            }
            while(n < -90.1395);
            c = n / 0.33;
            f = 32 + c * 9/5;
            k = c + 237.15;
            cout<< "\nLa Temperatura ingresada en grados Newton es: \n\n";
            cout<< c << " grados Celcius \n\n" << f << " grados Farenheit \n\n" << k << " grados Kelvin \n\n";
            break;
        }
    }
    while(opcion != 27);
    return 0;
}
