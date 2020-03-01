#include <iostream>

using namespace std;

void sumaDeVectores(int vec1[], int vec2[], int tamano)
{
//    int suma[10];
    cout<< "{";
    for(int i = 0; i <= tamano - 1; i++)
    {
//        suma[i] = vec1[i] + vec2[i];
        if(i != tamano -1)
        cout<< "["<< vec1[i] + vec2[i]<< "], ";
        else
        cout<< "["<< vec1[i] + vec2[i]<< "]}\n";
    }
    return;
}

int productoVectorial(int vec1[], int vec2[], int tamano)
{
    int producto = 0;
    for(int i = 0; i<= tamano - 1; i++)
    {
        producto += vec1[i] * vec2[i];
    }
    return producto;
}

    int main()
{
    int vec1[10], vec2[10];
//    int suma[10];
    int tamano,i;
    cout<< "Ingrese el tamano de sus vectores\n";
    cin>> tamano;
    cout<< "Ingrese los valores del vector 1\n";
    for(i = 0; i <= tamano - 1; i++)
    {
        cin>> vec1[i];
    }
    cout<< "Ingrese los valores del vector 2\n";
    for(i = 0; i <= tamano - 1; i++)
    {
        cin>> vec2[i];
    }
    cout<< "La suma de vectores es el vector:\n";
    sumaDeVectores(vec1, vec2, tamano);
//    cout<< "{";
//    for(i = 0; i <= tamano - 1; i++)
//    {
//        suma[i] = vec1[i] + vec2[i];
//        if(i != tamano -1)
//        cout<< "["<< vec1[i] + vec2[i]<< "], ";
//        else
//        cout<< "["<< vec1[i] + vec2[i]<< "]}\n";
//    }
    cout<< "El producto vectorial es: "<< productoVectorial(vec1, vec2, tamano)<< endl;
//    int producto = 0;
//    for(i = 0; i<= tamano - 1; i++)
//    {
//        producto += vec1[i] * vec2[i];
//    }
//    cout<< producto;


    return 0;
}
