#include <iostream>

using namespace std;

int *Ordenar(int *vec, int tam)
{
    int aux;
    for(int i = 0; i < tam - 1; i++)
    {
        for(int j = 0; j < tam -1 - i; j++)
        {
            if(*(vec + j) < *(vec + j + 1))
            {
                aux = *(vec + j);
                *(vec + j) = *(vec + j + 1);
                *(vec + j + 1) = aux;
            }
        }
    }
    return vec;
}

int main()
{
    int tam;
    cout<< "Ingrese el tamano del vector\n";
    cin>> tam;
    int *vec = new int[tam];

    for(int i = 0; i < tam; i++)
    {
        cout<< "Ingrese el valor " << i + 1 << endl;
        cin>> *(vec + i);
    }
    cout<< endl;


    int *x = Ordenar(vec, tam);

    for(int i = 0; i < tam; i++)
        cout<< *(x + i) << endl;
    return 0;
}
