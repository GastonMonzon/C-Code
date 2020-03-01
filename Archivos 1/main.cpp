#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int c, pos;
    float valor, nuevoValor;
    cout<< "Ingrese la cantidad de valores a guardar\n";
    cin>> c;
    FILE *f;
    if (f = fopen("Prueba", "wb"))
    {
        cout<< "Ingrese " << c << " valores float\n";
        for(int i = 1; i <= c; i++)
        {
            cin>> valor;
            fwrite(&valor, sizeof(float), 1, f);
        }
        fclose(f);
    }
    cout<< endl;
    cout<< "Los valores ingresados son\n";
    if(f = fopen("Prueba", "rb"))
    {
        for(int i = 1; i <= c; i++)
        {
           fread(&valor, sizeof(float), 1, f);
           cout<< valor << endl;
        }
        fclose(f);
    }
    cout<< endl;
    cout<< "Ingrese la posicion del valor a cambiar\n";
    cin>> pos;
    if(f = fopen("Prueba", "rb+"))
    {
        fseek(f, sizeof(float)*(pos - 1), SEEK_SET);
        fread(&valor, sizeof(float), 1, f);
        cout<< "Ingrese el nuevo valor float\n";
        cin>> valor;
        fseek(f,(-1)*sizeof(float), SEEK_CUR);
        fwrite(&valor, sizeof(float), 1, f);
        fclose(f);
    }
        cout<< endl;
    cout<< "Los valores ingresados son\n";
    if(f = fopen("Prueba", "rb"))
    {
        for(int i = 1; i <= c; i++)
        {
           fread(&valor, sizeof(float), 1, f);
           cout<< valor << endl;
        }
        fclose(f);
    }
    return 0;
}
