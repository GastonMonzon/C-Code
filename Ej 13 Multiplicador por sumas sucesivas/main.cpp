#include <iostream>

using namespace std;

int main()
{
    cout<< "MULTIPLICADOR POR SUMAS SUCESIVAS\n";
    int m, n, suma=0;
    cout<< "Ingrese 2 numeros enteros\n";
    cin>> m>> n;
    for (int i=1; i<=n; i++)
    {
        suma+=m;
        cout<< suma<<endl;
    }
    return 0;
}
