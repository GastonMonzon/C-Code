#include <iostream>

using namespace std;

void mostrarVectorOrdenado( int vec[], int tamano)
{
    int aux, i;
//    int vecaux[];
//    for(int i = 0; i <= tamano - 1; i++)
//    {
//        vecaux[i] = vec[i];
//    }
    for(i = 0; i < tamano - 1; i++)
    {
        for(int j = 0; j < tamano - 1 - i; j++)
        {
            if(vec[j+1] > vec[j])
            {
                aux = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = aux;
            }
        }
    }
    cout<< "El vector ordenado descendentemente es:" << endl << "{";
    for(i = 0; i <= tamano - 1; i++)
    {
        if(i != tamano -1)
            cout<< "["<< vec[i]<< "], ";
        else
            cout<< "["<< vec[i]<< "]}\n";
    }
    return;
}
int main()
{
    int vec1[100];
    int tamano,i;
    cout<< "Ingrese el tamano de su vector\n";
    cin>> tamano;
    for(i = 0; i <= tamano - 1; i++)
    {
        cout<< "Ingrese el valor "<< i + 1<< endl;
        cin>> vec1[i];
    }
    mostrarVectorOrdenado(vec1, tamano);

    return 0;
}
