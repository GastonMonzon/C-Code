#include <iostream>

using namespace std;

int main()
{
    float sueldo;
    int comun=0, semi=0, rapido=0, directo=0;
    do
    {
        cout<< "Ingrese sueldo o 0 para finalizar\n";
        cin>> sueldo;
        if(sueldo!=0)
        {
            if(sueldo<0)
                cout<< "Valor invalido\n";
            else
            {
                if(sueldo>0 && sueldo<1520)
                    comun++;
                else if(sueldo<2780)
                    semi++;
                else if(sueldo<5999)
                    rapido++;
                else
                    directo++;
            }
        }
    }
    while(sueldo!=0);

    if(comun!=1)
        cout<< comun<< " empleados ganan menos de $1520\n";
    else
        cout<< comun<< " empleado gana menos de $1520\n";

    if(semi!=1)
        cout<< semi<< " empleados ganan entre $1520 y $2780 \n";
    else
        cout<< semi<< " empleado gana entre $1520 y $2780 \n";

    if(rapido!=1)
        cout<< rapido<< " empleados ganan entre $2780 y $5999\n";
    else
        cout<< rapido<< " empleado gana entre $2780 y $5999\n";

    if(directo!=1)
        cout<< directo<< " empleados ganan mas de $5999\n";
    else
        cout<< directo<< " empleado gana mas de $5999\n";

    return 0;
}

