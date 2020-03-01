#include <iostream>

using namespace std;

int main()
{
    unsigned int L1, L2, L3;
    cout<< "Ingrese 3 valores\n";
    cin>> L1>> L2>> L3;
    if(L1==L2 && L1==L3 && L2==L3)
        cout<< "Forman un triangulo\n";
    else
    {
        if((L1+L2)>L3 || (L1+L3)>L2 || (L2+L3)>L1)
            cout<< "Forman un triagulo\n";
        else
            cout<< "No forman un triangulo\n";
    }
    return 0;
}
