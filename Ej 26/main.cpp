#include <iostream>

using namespace std;

struct Contenedores
{
    string id;
    int peso;
    int puerto;
};
int main()
{
    Contenedores listaCont[100];
    int pesoTotal=0, mayorPeso=INT_MIN, cantP1=0, cantP2=0, cantP3=0;
    string idMayorPeso;
    for(int i=0; i<100; i++)
    {
        cout<< "Ingrese el Id del contenedor\n";
        cin>> listaCont[i].id;
        cout<< "Ingrese el peso del contenedor\n";
        cin>> listaCont[i].peso;
        pesoTotal+=listaCont[i].peso;
        if(listaCont[i].peso > mayorPeso)
            {
                mayorPeso=listaCont[i].peso;
                idMayorPeso=listaCont[i].id;
            }
        do
        {
            cout<< "Ingrese el puerto destino 1, 2 o 3\n";
            cin>> listaCont[i].puerto;
            if(listaCont[i].puerto > 3 || listaCont[i].puerto < 1)
                cout<< "Puerto incorrecto\n";
                else
                {
                    if(listaCont[i].puerto == 1)
                        cantP1++;
                    else
                    {
                        if(listaCont[i].puerto == 2)
                            cantP2++;
                        else
                            cantP3++;
                    }

                }
        }
        while(listaCont[i].puerto>3 || listaCont[i].puerto<1);
    }
    cout<< "El peso total que el buque debe trasladar es: " << pesoTotal<<endl;
    cout<< "El id del contenedor con mayor peso es: "<< idMayorPeso<< " con "<<mayorPeso<< " kg\n";
    cout<< "La cantidad de contenedores a trasladar a cada puerto son:\n";
    cout<< "Puerto 1: "<<cantP1<<endl;
    cout<< "Puerto 2: "<<cantP2<<endl;
    cout<< "Puerto 3: "<<cantP3<<endl;
    return 0;
}
