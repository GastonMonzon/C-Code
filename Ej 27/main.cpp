#include <iostream>
#include <string.h>

using namespace std;

//int combi(int k)
//{
//    if(k==0)
//        return 0;
//    if(k==1)
//        return 0;
//    k=k-1+combi(k-1);
//    return k;
//}
int main()
{
    int k, suma;
    cout<< "Ingrese la cantidad de equipos que participan\n";
    cin>> k;
    char torneo[k][k];
    for(int i=0; i<k-1; i++)
    {
        for(int j=1; j<k; j++)
        {
            if(j<i)
                j=i+1;
            cout<< "Ingrese resultado del equipo "<<i+1<< " contra "<<j+1<< "G ganado, P perdido o E empatado\n";
            cin>> torneo[i][j];
            if(torneo[i][j]=='G')
                torneo[j][i]='P';
            else
                {
                    if(torneo[i][j]=='P')
                       torneo[j][i]='G';
                       else
                        torneo[j][i]='E';
                }
        }
    }
    for(int i=0; i<k-1; i++)
    {
        suma=0;
        for(int j=1; j<k; j++)
        {
            if(j<i)
                j=i+1;
            if(torneo[i][j]=='G')
               suma+=3;
            if(torneo[i][j]=='E')
                suma+=1;
            if(j==k-1)
                cout<< "El equipo "<<i+1<< " obtuvo "<<suma<< " puntos\n";
        }
    }
    return 0;
}
