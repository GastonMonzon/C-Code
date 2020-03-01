#include <iostream>

using namespace std;

int main()
{
    cout << "CONTADOR DE VALORES POSITIVOS\n";
    int valor, i=0;
    do
    {
        cout<< "Ingresar un valor"<< endl;
        cin>> valor;
        i++;
    }
    while (valor>=0);
    cout<< "Cantidad de valores: "<< i<< endl;

    return 0;
}
