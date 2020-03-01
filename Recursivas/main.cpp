#include <iostream>

using namespace std;

int factorial (int n)
{
    if (n==0)
        return 1;
    else
        n*=factorial(n-1);
    return n;
}

int sumar (int a)
{
    if (a==1)
        return 1;
    else
        a+=sumar(a-1);
    return a;
}

int fibonnacci (int f)
{
    if (f<=0)
        return 0;
    if (f==1)
        return 1;
    return fibonnacci(f-1)+fibonnacci(f-2);
}

int main()
{
    int x;
    cout << "Ingrese un valor" << endl;
    cin>> x;
    cout<< "El factorial es: "<< factorial(x)<< endl;
    cout<< "La suma es: "<< sumar(x)<< endl;
    cout<< "El numero en la serie fibonancci es: "<< fibonnacci(x)<< endl;
    return 0;
}
