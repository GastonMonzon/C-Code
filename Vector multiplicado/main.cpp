#include <iostream>

using namespace std;

int main()
{
    int numeros[]= {51,45,74,89,26,47,18};
    int multi = 1,i, suma =0;
    for (i=0; i<9; i++)
    {
        multi *= numeros [i];
        suma += numeros [i];
        cout<<"Multiplicacion: "<<multi<<". Suma: "<<suma<<"."<<endl;
    }
    return 0;
}
