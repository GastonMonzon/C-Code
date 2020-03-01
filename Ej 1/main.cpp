#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    cout<< "SUMA, RESTA Y PRODUCTO"<< endl<< endl;
    int x, y;
    char opcion;
    do
    {
        cout<< "Ingrese un numero entero y presione Enter\n";
        cin>> x;
        cout<< "Ingrese otro numero entero y presione Enter\n";
        cin>> y;
        cout<< endl;
        cout<< "SUMA: "<< x+y<< endl;
        cout<< "RESTA: "<< x-y<< endl;
        cout<< "PRODUCTO: "<< x*y<< endl<< endl;
        cout<< "Presione una tecla para continuar o Esc para salir\n\n";
        opcion=getch();
    }
    while(opcion!=27);

return 0;
}
