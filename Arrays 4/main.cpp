#include <iostream>

using namespace std;

int main()
{
    int vector[6], aux, i;
    for(i = 0; i <= 5; i++)
    {
        cout<<"Ingrese un valor: \n";
        cin>> vector[i];
    }
    i = 0;
    while(i < 6)
    {
        aux = vector[i];
        vector[i] = vector[6-1-i];
        vector[i] = aux;
        i++;
    }
    cout<< "El vector invertido es: \n";
    for(i = 0; i < 6; i++)
    {
        cout<<vector[i]<< endl;
    }

    return 0;
}
