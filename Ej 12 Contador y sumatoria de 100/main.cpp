#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int suma=0;
    cout<< "Los 100 primeros numeros naturales y su sumatoria:\n";
    for(int i=1; i<101; i++)
    {
        cout<< i<< endl;
        suma+=i;
    }
    cout<< "Sumatoria: "<< suma;
    return 0;
}
