#include <iostream>
#include <conio.h>
using namespace std;

int *mayoR(int vec[], int tam)
{
    int *maxi = vec;
    for(int i = 0; i < tam; i++)
    {
        if(*maxi < *(vec + i))
            *maxi = *(vec + i);
    }
    return maxi;
}
int main()
{
    int *mayor, tam;
    cout<< "Ingrese el tamano del vector\n";
    cin>> tam;
    int *vec = new int[tam];

    for(int i = 0; i < tam; i++)
    {
        cout<< "Ingrese el valor " << i + 1 << endl;
        cin>> *(vec + i);
    }
    cout<< endl;

    mayor = mayoR(vec, tam);
    cout<< "El mayor valor fue: " << *mayor << endl;
    return 0;
}
