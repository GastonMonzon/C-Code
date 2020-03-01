#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    cout << "INTERSECCION ENTRE 2 RETAS\n";
    float m1, m2, b1, b2, x, y;
    cout<< "Ingrese pendiente y oordenada al origen de la recta 1\n";
    cin>> m1>> b1;
    cout<< "Ingrese pendiente y oordenada al origen de la recta 2\n";
    cin>> m2>>b2;
    if (m1==m2)
        {
            if (b1==b2)
            {
                cout<< "Las rectas son iguales\n";
            }
            else
            {
                cout<< "Las rectas son paralelas\n";
            }
        }
    x=(b2-b1)/(m1-m2);
    y=m1*x+b1;
    cout<< "La interseccion de las rectas es: "<< "( "<< x<< ";"<< y<< " )\n";

    return 0;
}
