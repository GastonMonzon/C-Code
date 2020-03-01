#include <iostream>

using namespace std;

struct Inspecciones
{
    int tipo;
    string motivo;
    float valor;
    char grav;
};

int main()
{
    int h=0;
    float valorl=0, valorm=0, valorg=0;
    Inspecciones infraccion[20];
    for (int i=0; i<20; i++)
    {
        do
        {
            cout<< "Ingrese el tipo de infraccion, 1 a 4\n";
            cin>> infraccion[i].tipo;
            if(infraccion[i].tipo>4 || infraccion[i].tipo<1)
                cout<< "Dato incorrecto\n";
            else
            {
                cout<< "Ingrese valor de la multa\n";
                cin>> infraccion[i].valor;
                cout<< "Ingrese motivo de la multa\n";
                cin>> infraccion[i].motivo;
                do
                {
                    cout<< "Ingrese gravedad de la infraccion, l, m, o g\n";
                    cin>> infraccion[i].grav;
                    if(infraccion[i].grav!='l' && infraccion[i].grav!='L' && infraccion[i].grav!='m' && infraccion[i].grav!='M' && infraccion[i].grav!='g' && infraccion[i].grav!='G')
                        cout<< "Dato incorrecto\n";
                }
                while(infraccion[i].grav!='l' && infraccion[i].grav!='L' && infraccion[i].grav!='m' && infraccion[i].grav!='M' && infraccion[i].grav!='g' && infraccion[i].grav!='G');
            }
        }
        while(infraccion[i].tipo>4 || infraccion[i].tipo<1);
        switch (infraccion[i].grav)
        {
        case 'l':
        case 'L':
            valorl+= infraccion[i].valor;
            break;
        case 'm':
        case 'M':
            valorm+= infraccion[i].valor;
            break;
        case 'g':
        case 'G':
            valorg+= infraccion[i].valor;
            if (infraccion[i].tipo==3 || infraccion[i].tipo==4)
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
