#include <iostream>

using namespace std;

int main()
{
    int M, cantCero=0, antCero[100]= {0}, j=0, k=0, cantNegro=0, f=0, g=0, repet[100][2], h=0, alternados=0, l=0, sinSegundaDocena=0;
    bool repetidos=false;
    char color[100];
    int numero[100];

    cout<< "Ingrese la cantidad de tiros\n";
    cin>> M;
    for(int i=0; i<M; i++)
    {
        cout<< "Ingrese el color\n";
        cin>> color[i];
        cout<< "ingrese el numero\n";
        cin>> numero[i];
        //Cantidad de veces que salio el 0 y el anterior a cada uno, se guarda en otro vector
        if(numero[i]==0)
        {
            cantCero++;
            if(i!=0)
            {
                antCero[j]=numero[i-1];
                j++;
            }
        }
        //Cantidad de veces Seguidas que llego a repetirse el color negro
        if(color[i]==color[i-1])
        {
            k++;
            if(k>cantNegro)
                cantNegro++;
        }
        else
            k=0;
        //Veces seguidas que se repiten los numeros, se guarda en otro vector
        if(numero[i]==numero[i-1])
        {
            for(int a=0; a<f; a++)
            {
                if(numero[i]==repet[a][0])//busca en el vector si ya se repitio
                {
                    g++;
                    if(g>repet[a][1])
                        repet[a][1]++;
                    repetidos=true;
                }
            }
            if(!repetidos)
            {
                repet[f][0]=numero[i];
                f++;
            }
            else
                repetidos=false;
        }
        else
            g=0;

        //Mayor cqntidad de veces que salieron alternados rojo y negro
        if((color[i]=='N' && color[i-1]=='R') || (color[i]=='R' && color[i-1]=='N'))
        {
            h++;
            if(h>alternados)
                alternados++;
        }
        else
            h=0;
        //Mayor cantidad de veces que se negó la segunda docena
        if(numero[i]<12 && numero[i]>24)
        {
            l++;
            if(l>sinSegundaDocena)
                sinSegundaDocena++;
        }
        else
            l=0;
    }

    if(cantCero>1)
    {
        cout<< "El Cero salio " << cantCero<< " veces y los numeros anteriores fueron: \n";
        for(int q=0; q<j; q++)
            cout<< antCero[q] << endl;
    }
    else if(cantCero==1)
    {
        cout<< "El Cero salio 1 vez ";
        if(antCero[0]!=0)
            cout<< "y su anterior fue "<< antCero[0]<< endl;
        else
            cout<< "y no tuvo anterior\n";
    }
    else
        cout<< "No salio el 0\n";

    if(cantNegro>1)
        cout<< "La cantidad de veces que llego a repetirse el color negro fueron "<< cantNegro<< " veces\n";
    else if(cantCero==1)
        cout<< "La cantidad de veces que llego a repetirse el color negro fue 1 vez\n";
            else
                cout<< "No se repitio el color negro\n";

    if(f==0)
        cout<< "No hubo numeros reptidos"<< endl;
    else
    {
        if(f==1)
            cout<< "El unico numero repetido fue: "<< repet[0][0];
        else
        {
            cout<< "Los numeros repetidos fueron: \n";
            for(int q=0; q<f; q++)
            {
                cout<< repet[q][0]<< ", "<< repet[q][1]<< " veces\n";
            }
        }
    }

    if(alternados>1)
        cout<< "La mayor cantidad de veces que salieron alternados el Rojo y Negro fueron "<< alternados<< " veces\n";
    else if(alternados==1)
        cout<< "La mayor cantidad de veces que salieron alternados el Rojo y Negro fue 1 vez\n";
            else
                cout<< "No se alternaron el Rojo y Negro\n";

    if(sinSegundaDocena>1)
        cout<< "La cantidad de veces que se nego la segunda docena fueron "<< sinSegundaDocena<< " veces\n";
    else if(sinSegundaDocena==1)
        cout<< "La cantidad de veces que se nego la segunda docena fue 1 vez\n";
    else
        cout<< "No se nego la segunda docena\n";
    return 0;
}
