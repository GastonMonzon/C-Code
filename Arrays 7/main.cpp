#include <iostream>
#define VACIO 0
using namespace std;

int cant(int v[], int tamano)
{
    int i = 0;
    while(i < tamano && v[i] != VACIO)
        i++;
    return i;
}

void apareo(int v1[], int tamv1, int v2[],int tamv2)
{

    int i = 0, j = 0, k = 0, v3[tamv1 + tamv2] = {0}, aux;
    while(i < tamv1 && j < tamv2)
    {
        if(v1[i] < v2[j])
        {
            v3[k] = v1[i];
            i++;
        }
        else
        {
            v3[k] = v2[j];
            j++;
        }
        k++;
    }
    for(int cont = i; cont < tamv1; cont++)
    {
        v3[k] = v1[cont];
        k++;
    }
    for(int cont = j; cont < tamv2; cont++)
    {
        v3[k] = v2[cont];
        k++;
    }
    for(i = 0; i < tamv1 + tamv2 - 1; i++)
    {
        for(int j = 0; j < tamv1 + tamv2 - 1 - i; j++)
        {
            if(v3[j+1] < v3[j])
            {
                aux = v3[j];
                v3[j] = v3[j+1];
                v3[j+1] = aux;
            }
        }

    }
    for(int x = 0; x < tamv1 + tamv2; x++)
    {
        cout<< v3[x]<< endl;
    }
    return;
}

int main()
{
    int v1[20] = {25,45,36,785,25,36,96,44,35,39,2,15,256,25,32,3,48};
    int v2[] = {15,3,6,4,5,75631,246,782,96,491,5151,391,50,553,62,5,2,75};
    apareo(v1, cant(v1,20), v2, cant(v2, 18));

    return 0;
}
