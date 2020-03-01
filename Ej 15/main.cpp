#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
    int tipo, h=0;
    char grav;
    string motivo;
    float valor, valorl=0, valorm=0, valorg=0;
    for (int i=0; i<20; i++)
    {
        do
        {
            cout<< "Ingrese el tipo de infraccion, 1 a 4\n";
            cin>> tipo;
            if(tipo>4 || tipo<1)
                cout<< "Dato incorrecto\n";
            else
            {
                cout<< "Ingrese valor de la multa\n";
                cin>> valor;
                cout<< "Ingrese motivo de la multa\n";
                cin>> motivo;
                do
                {
                    cout<< "Ingrese gravedad de la infraccion, l, m, o g\n";
                    cin>> grav;
                    if(grav!='l' && grav!='L' && grav!='m' && grav!='M' && grav!='g' && grav!='G')
                        cout<< "Dato incorrecto\n";
                }
                while(grav!='l' && grav!='L' && grav!='m' && grav!='M' && grav!='g' && grav!='G');
            }
        }
        while(tipo>4 || tipo<1);
        switch (grav)
        {
        case 'l':
        case 'L':
            valorl+= valor;
            break;
        case 'm':
        case 'M':
            valorm+= valor;
            break;
        case 'g':
        case 'G':
            valorg+= valor;
            if (tipo==3 || tipo==4)
            {
                h++;
            }
            break;
        }
    }
    cout<< "Valor total de las infracciones L: "<< valorl<< endl;
    cout<< "Valor total de las infracciones M: "<< valorm<< endl;
    cout<< "Valor total de las infracciones G: "<< valorg<< endl;
    if (h>3)
    {
        cout<< "Clausurar fabrica\n";
    }
    return 0;
}
