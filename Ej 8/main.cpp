#include <iostream>

using namespace std;

int main()
{
    int L1, L2, L3;
    cout<< "Ingrese la longitud de los lados de un triangulo\n";
    cin>> L1 >> L2 >> L3;
    if(L1==L2 && L1==L3 && L2==L3)
        cout<< "Equilatero\n";
    else
    {
        if(!((L1+L2)>L3 || (L1+L3)>L2 || (L2+L3)>L1))
            cout<< "No forman un triangulo\n";
        else
        {
            if(L1!=L2 && L1!=L3 && L2!=L3)
                cout<< "Escaleno\n";
            else
                cout<< "Isosceles\n";
        }
    }
    return 0;
}
