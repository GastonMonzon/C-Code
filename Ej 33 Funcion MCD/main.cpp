#include <iostream>

using namespace std;

int mcd (int a,int b)
{
    int R;
    R=a%b;
    if (R==0)
    {
        return b;
    }
    a=b;
    b=R;
    return mcd (a,b);
}

int main()
{
    cout<< "MINIMO COMUN DIVISOR ENTRE DOS NUMEROS\n";
    int a, b;
    cout<< "Ingrese dos numeros\n";
    cin>> a>> b;
    cout<< "El MCD entre "<< a<< " y "<< b<< " es: "<< mcd(a,b)<<endl;

    return 0;
}
