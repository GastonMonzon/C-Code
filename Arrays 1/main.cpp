#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int main()
{
    int i;
    int v[10];
    for(i = 0; i <= 9; i++) {
        cout<< "Ingrese el numero " << i << " de la lista\n";
        cin>> v[i];
    }
    for(i = 9; i >= 0; i--) {
        cout<< "Numero " << i + 1 << " : "<< v[i]<<endl;
    }
    return 0;
}
