#include <iostream>

using namespace std;

int cantmulti3 (int x)
{
    int n=6, i=1;
    if (x%3!=0)
        return 0;
    while(n<=x)
    {
        if (x%n==0)
            i++;
        n+=3;
    }
    return i;
}

int cantmulti5 (int x)
{
    int n=10, i=1;
    if (x%5!=0)
        return 0;
    while (n<=x)
    {
        if (x%n==0)
            i++;
        n+=5;
    }
    return i;
}

int cantmulti3y5 (int x)
{
    int n=15, i=0;
    if (x%3!=0 && x%5!=0)
        return 0;
    while (n<=x)
    {
        if (x%n==0)
            i++;
        n+=15;
    }
    return i;
}
int factorial (int x)
{
    int factor=1;
        for(int i=1;i<=x;i++)
            factor *=i;
    return factor;
}

int main()
{
    cout<< "FACTORIAL Y MULTIPLOS DE 3 Y 5\n";
    int x;
    cout<< "Ingrese un numero\n";
    cin>> x;
    cout<< "El factorial de "<< x<< " es: "<< factorial(x)<< endl;
    cout<< "Cantidad de multiplos de 3 de "<< x<< " son: "<< cantmulti3(x)<< endl;
    cout<< "Cantidad de miltiplos de 5 de "<< x<< " son: "<< cantmulti5(x)<< endl;
    cout<< "Cantidad de multiplos de 3 y de 5 de "<< x<< " son: "<< cantmulti3y5(x)<< endl;

    return 0;
}
