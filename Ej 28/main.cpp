#include <iostream>

using namespace std;

int main()
{
    int cantPalabras=0, i=0, A=0, E=0, I=0, O=0, U=0, mayor=0, palabraMasLarga=0;
    char oracion[256];
    bool punto=false;
    do
    {
        cout<< "Escribi una oracion terminando con un punto\n";
        cin.getline(oracion, 256);
        for(int j=0; j<256;j++)
        {
            if(oracion[j]==46)
            {
                punto=true;
            }
        }
        if(!punto)
            cout<< "Falta el punto, reingrese\n";
    }while(!punto);

    while(oracion[i]!=46)
    {
        if(oracion[i]=='A' || oracion[i]=='a')
            A++;
        if(oracion[i]=='E' || oracion[i]=='e')
            E++;
        if(oracion[i]=='I' || oracion[i]=='i')
            I++;
        if(oracion[i]=='O' || oracion[i]=='o')
            O++;
        if(oracion[i]=='U' || oracion[i]=='u')
            U++;
        if(oracion[i]!=32)
        {
            mayor++;
            if(mayor>palabraMasLarga)
                palabraMasLarga=mayor;
        }
        else
            mayor=0;
        if(oracion[i]!=32 && oracion[i+1]==32 && oracion[i+1]!=46 || (oracion[i]!=32 && oracion[i+1]==46))
                cantPalabras++;
        i++;
    }

    cout<< "\nCantidad de veces que aparecio la vocal A: "<< A<< endl;
    cout<< "Cantidad de veces que aparecio la vocal E: "<< E<< endl;
    cout<< "Cantidad de veces que aparecio la vocal I: "<< I<< endl;
    cout<< "Cantidad de veces que aparecio la vocal O: "<< O<< endl;
    cout<< "Cantidad de veces que aparecio la vocal U: "<< U<< endl;
    cout<< "Cantidad de palabras: "<< cantPalabras<< endl;
    cout<< "Cantidad de letras que posee la palabra mas larga: "<< palabraMasLarga<< endl;

    return 0;
}
