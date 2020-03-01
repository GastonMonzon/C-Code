#include <iostream>

using namespace std;

int main()
{
    int vec[5];
    int *p = vec;
    for(int i = 0; i < 5; i++)
    {
        cout<< "Ingrese el valor " << i + 1 << endl;
        cin>> *(p + i);
    }
    cout<< endl;
    for(int i = 4; i > -1; i--)
        cout<< "Valor " << i + 1 << " = " << *(p + i) << endl;
    cout<< endl;

    return 0;
}
