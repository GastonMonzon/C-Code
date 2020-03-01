#include <iostream>

using namespace std;

int main()
{
    int tabla[6][5] = {10,15,15,26,36,447,10,41,78,45,59,89,15,26,36,74,25,96,4,5,484,684,6,5,69,48,69,34,12,12};
    int v[30], i, j, k = 0, aux;
    for(i = 0; i < 6; i++)
    {
        for(j = 0; j < 5; j++)
        {
            v[k] = tabla[i][j];
            k++;
        }
    }
//    for(i = 0; i < 29; i++)
//    {
//        for(j = 0; j < 29 - i; j++)
//        {
//            for(int k =0; k < 6; k++)
//            {
//                for(int l = 0; l < 5; l++)
//                {
//                    if(tabla[l+1] > tabla[l])
//                    {
//                        aux = v[l];
//                        tabla[k][l] = tabla[k][l+1];
//                        tabla[k][l+1] = aux;
//                    }
//                }
//            }
//
//        }
//    }
    i = 0;
    j = 0;
    for(i = 0; i < 29; i++)
    {
        for(j = 0; j < 29 - i; j++)
        {
            if(v[j+1] > v[j])
            {
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
    cout<< "El vector ordenado descendentemente es:" << endl << "{";
    for(int x = 0; x < 30; x++)
    {
        if(x != 29)
            cout<< "["<< v[x]<< "], ";
        else
            cout<< "["<< v[x]<< "]}\n";
    }
    return 0;
}
