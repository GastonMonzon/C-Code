#include <iostream>

using namespace std;

float CalcularPorcentajeDiferencia (int A, int B)
{
    float R;
    R=(B-A)*100/(A+B);
    return R;
}

int main()
{
    int A, B;
    cout<< "Ingrese dos valores\n";
    cin>> A>> B;
    cout<< "El pocentaje diferencia es: "<< CalcularPorcentajeDiferencia (A,B)<< endl;

    return 0;
}
