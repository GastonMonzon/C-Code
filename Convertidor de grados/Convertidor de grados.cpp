#include <iostream>

using namespace std;

int main()
{
    {cout<< "CONVERTIDOR DE GRADOS"<< endl;
}
    float c;
    float f;

        {
            while (c,f){
            cout<< " "<< endl;
            cout<< "Elija los grados a convertir"<< endl;
            cout<< "1- Celcius"<< endl;
            cout<< "2- Farenheit"<<endl;
            int x;
            cin>> x;
            switch (x)
            {
                case 1:
                    cout<< "Ingrese una temperatura en Celcius y presione Enter"<< endl;
                    cout<< " "<< endl;
                    cin>> c;
                    f=32+c*9/5;
                    cout<< " "<< endl;
                    cout<< "La Temperatura ingresada en grados Celcius ";
                    //int x;
                    cout<< "es: ";
                    cout<< f;
                    cout<< " grados Farenheit";
                    break;
                case 2:
                    cout<< "Ingrese una temperatura en Farenheit y presione Enter"<< endl;
                    cout<< " "<< endl;
                    cin>>f;
                    c=(f-32)*5/9;
            {        cout<< " "<< endl;
                    cout<< "La Temperatura ingresada en grados Farenheit es: ";
                    cout<< c;
                    cout<< " grados Celcius"<< endl;
                    break;
                    cout<< " "<< endl;
                default:
                    cout<< "Seleccion incorrecta, reingrese"<< endl;
                    }
                    continue;
            }

    }


return 0;
}
