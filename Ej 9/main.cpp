#include <iostream>

using namespace std;

int main()
{
    int anio, mes;
    do
    {
        cout<< "Ingrese un anio o 0 para salir\n";
        cin>> anio;
        if(anio!=0)
        {
            if(anio<0)
                cout<< "Anio invalido\n";
            else
            {
                do
                {
                    cout<< "Ingrese un numero de mes o 0 para salir\n";
                    cin>> mes;
                    if(mes!=0)
                    {

                        if(mes<1 || mes>12)
                            cout<< "Mes invalido\n";
                        else
                        {
                            if(mes==4 || mes==6 || mes==9 || mes==11)
                            {
                                cout<< "Tiene 30 dias\n";
                                break;
                            }
                            else
                            {
                                if(mes!=2)
                                {
                                    cout<< "Tiene 31 dias\n";
                                    break;
                                }
                                else
                                {
                                    if((anio%400==0 || (anio%4==0 && anio%100!=0)))
                                    {
                                        cout<< "Tiene 29 dias\n";
                                        break;
                                    }
                                    else
                                    {
                                        cout<< "Tiene 28 dias\n";
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
                while(mes!=0);
            }
        }
    }
    while(anio!=0 && mes!=0);
    return 0;
}
