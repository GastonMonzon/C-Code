#include <iostream>

using namespace std;

int factorial (int n)
{
    int i, factor;
        factor=1;
        for(i=1; i<=n; i++)
    {
        factor*=i;
    }
    return factor;
}
int main()
{
    int n;

        cout<< "Ingrese el numero para calcular el factorial\n";
        cin>> n;
        cout<< n<< " factorial = "<< factorial(n)<<endl;
    return 0;
}
