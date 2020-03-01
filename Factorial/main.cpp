#include <iostream>

using namespace std;

int main()
{
    cout << "FACTORIAL Y SUMA DE FACTORIAL\n";
    int n,factorial,suma,i;
    while (n)
    {
        factorial=1;
        suma=0;
        cout<< "Ingrese el numero para calcular el factorial\n";
        cin>> n;
        for(i=1;i<=n;i++)
        {
            factorial *=i;
            suma+=factorial;
        }
        cout<< n<< " factorial = "<< factorial<<endl;
        cout<< "La suma de factoriales es = "<< suma<<endl;
        continue;
    }
    return 0;
}
