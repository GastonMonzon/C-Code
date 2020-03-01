#include <iostream>

using namespace std;

int main()
{
    float valor;
    cout<< "Ingrese un valor\n";
    cin>> valor;
    cout<< "La quinta parte es:                     " << valor / 5 << endl;
    int n = (int)valor;
    //Se pasa a int porq el % no puede ser float, hay otras formas esta es la mas corta
    cout<< "El resto de dividir por 5 es:           " << (n % 5) << endl;
    cout<< "La septima parte de la quinta parte es: " << (valor / 5) / 7 << endl;

    return 0;
}
