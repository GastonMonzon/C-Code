#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char c;
    string letras[20];
    int contador = 0;
    cout<< "Ingrese una palabra y finalize con /"<< endl;
    while (c != '/'){
        c = getche();
        letras[contador] = c;
        contador++;
        }
    cout<< "\n";
    cout<< "La palabra al reves es: \n";
    for(int i = contador-1; i >= 0; i--){
        cout<< letras[i];
    }

    return 0;
}
