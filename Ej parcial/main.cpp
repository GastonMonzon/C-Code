#include <iostream>

using namespace std;

int main()
{
    int n,menor=0, suma,h;
    for (int i=1;i<=5;i++)
    {
        suma=0;
        h=0;
        cout<< "Ingrese un valor\n";
        cin>> n;
        while (n!=0)
        {
            if (menor==0)
            {
                menor=n;
            }
            if (n<menor)
            {
                menor=n;
            }
            suma+=n;
            h++;
            cout<< "Ingrese un valor\n";
            cin>> n;
        }
        if (h==0)
        {
            cout<< "Juego vacio\n";
        } else
        {
            cout<< "El promedio del juego "<< i<< " es: "<< suma/h<< endl;
        }
    }
    if (menor!=0)
    {
        cout<< "El menor valor es: "<< menor<< endl;
    } else
    {
        cout<< "Todos los juegos quedaron vacios\n";
    }
    return 0;
}
