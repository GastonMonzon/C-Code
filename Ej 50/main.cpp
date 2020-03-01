#include <iostream>

using namespace std;

struct Usuarios
{
    int numero;
    char nombre[20];
    char direccion[25];
    int tiempo;
    char tipoDeAbono;
    int minLibres;
    int abono;

};
int tiempoEnMinutos(int hhmm)
{
    int minutos=((hhmm/100)*60) + hhmm%100;
    return minutos;
}
void montoExcedido(int &abono, int minLibres, float cargoXMinExc, int &cantMin)
{
    if(cantMin>minLibres)
    {
        cantMin-=minLibres;
        abono=abono + ((cantMin-minLibres)*cargoXMinExc) + (abono + ((cantMin-minLibres)*cargoXMinExc))*0.21;
    }
    else
    {
        cantMin=0;
        abono=abono + abono*0.21;
    }
}
int main()
{

    Usuarios usuariosTM[100], usuariosTT[100], usuariosTN[100];
    unsigned int cantTM=0, cantTT=0, cantTN=0, mayorAbonoTM=0, mayorAbonoTT=0, mayorAbonoTN=0, masCostosoTM, masCostosoTT, masCostosoTN,
                 mayorMinTM=0, mayorMinTT=0, mayorMinTN=0, masMinTM, masMinTT, masMinTN, total=0, menorMin=44640, menosMin;
    char f, turno='0';

    do
    {
        cout<< "Ingrese numero o 0 para finalizar datos del turno manana\n";
        cin>> usuariosTM[cantTM].numero;
        if(usuariosTM[cantTM].numero!=0)
        {
            cout<< "Ingrese nombre\n";
            cin>> usuariosTM[cantTM].nombre;
            cout<< "Ingrese direccion\n";
            cin>> usuariosTM[cantTM].direccion;
            cout<< "Ingrese tiempo utilizado en formato HHMM\n";
            cin>> usuariosTM[cantTM].tiempo;
            usuariosTM[cantTM].tiempo=tiempoEnMinutos(usuariosTM[cantTM].tiempo);
            if(usuariosTM[cantTM].tiempo<menorMin)
            {
                menorMin=usuariosTM[cantTM].tiempo;
                menosMin=cantTM;
                turno='M';

            }
            cout<< "Ingrese tipo de abono A, B, C, D o E\n";
            do
            {
                cin>> usuariosTM[cantTM].tipoDeAbono;
                f=usuariosTM[cantTM].tipoDeAbono;
                if(f!='A' && f!='B' && f!='C' && f!='D' && f!='E')
                    cout<< "Dato incorrecto\n";
                else
                {
                    if(usuariosTM[cantTM].tipoDeAbono=='A')
                    {
                        usuariosTM[cantTM].abono=70;
                        usuariosTM[cantTM].minLibres=300;
                        montoExcedido(usuariosTM[cantTM].abono, usuariosTM[cantTM].minLibres, 0.09, usuariosTM[cantTM].tiempo);
                    }
                    else if(usuariosTM[cantTM].tipoDeAbono=='B')
                    {
                        usuariosTM[cantTM].abono=55;
                        usuariosTM[cantTM].minLibres=200;
                        montoExcedido(usuariosTM[cantTM].abono, usuariosTM[cantTM].minLibres, 0.15, usuariosTM[cantTM].tiempo);
                    }
                    else if(usuariosTM[cantTM].tipoDeAbono=='C')
                    {
                        usuariosTM[cantTM].abono=40;
                        usuariosTM[cantTM].minLibres=100;
                        montoExcedido(usuariosTM[cantTM].abono, usuariosTM[cantTM].minLibres, 0.21, usuariosTM[cantTM].tiempo);
                    }
                    else if(usuariosTM[cantTM].tipoDeAbono=='D')
                    {
                        usuariosTM[cantTM].abono=28;
                        usuariosTM[cantTM].minLibres=60;
                        montoExcedido(usuariosTM[cantTM].abono, usuariosTM[cantTM].minLibres, 0.29, usuariosTM[cantTM].tiempo);
                    }
                    else
                    {
                        usuariosTM[cantTM].abono=19;
                        usuariosTM[cantTM].minLibres=40;
                        montoExcedido(usuariosTM[cantTM].abono, usuariosTM[cantTM].minLibres, 0.37, usuariosTM[cantTM].tiempo);
                    }
                }
            }
            while(f!='A' && f!='B' && f!='C' && f!='D' && f!='E');
            if(usuariosTM[cantTM].abono>mayorAbonoTM)
            {
                mayorAbonoTM=usuariosTM[cantTM].abono;
                masCostosoTM=cantTM;
            }
            if(usuariosTM[cantTM].tiempo>mayorMinTM)
            {
                mayorMinTM=usuariosTM[cantTM].tiempo;
                masMinTM=cantTM;
            }
            total+=usuariosTM[cantTM].abono;
        }
        cantTM++;
    }
    while(usuariosTM[cantTM-1].numero!=0);

    do
    {
        cout<< "Ingrese numero o 0 para finalizar datos del turno tarde\n";
        cin>> usuariosTT[cantTT].numero;
        if(usuariosTT[cantTT].numero!=0)
        {
            cout<< "Ingrese nombre\n";
            cin>> usuariosTT[cantTT].nombre;
            cout<< "Ingrese direccion\n";
            cin>> usuariosTT[cantTT].direccion;
            cout<< "Ingrese tiempo utilizado en formato HHMM\n";
            cin>> usuariosTT[cantTT].tiempo;
            usuariosTT[cantTT].tiempo=tiempoEnMinutos(usuariosTT[cantTT].tiempo);
            if(usuariosTT[cantTT].tiempo<menorMin)
            {
                menorMin=usuariosTT[cantTT].tiempo;
                menosMin=cantTT;
                turno='M';

            }
            cout<< "Ingrese tipo de abono A, B, C, D o E\n";
            do
            {
                cin>> usuariosTT[cantTT].tipoDeAbono;
                f=usuariosTT[cantTT].tipoDeAbono;
                if(f!='A' && f!='B' && f!='C' && f!='D' && f!='E')
                    cout<< "Dato incorrecto\n";
                else
                {
                    if(usuariosTT[cantTT].tipoDeAbono=='A')
                    {
                        usuariosTT[cantTT].abono=70;
                        usuariosTT[cantTT].minLibres=300;
                        montoExcedido(usuariosTT[cantTT].abono, usuariosTT[cantTT].minLibres, 0.09, usuariosTT[cantTT].tiempo);
                    }
                    else if(usuariosTT[cantTT].tipoDeAbono=='B')
                    {
                        usuariosTT[cantTT].abono=55;
                        usuariosTT[cantTT].minLibres=200;
                        montoExcedido(usuariosTT[cantTT].abono, usuariosTT[cantTT].minLibres, 0.15, usuariosTT[cantTT].tiempo);
                    }
                    else if(usuariosTT[cantTT].tipoDeAbono=='C')
                    {
                        usuariosTT[cantTT].abono=40;
                        usuariosTT[cantTT].minLibres=100;
                        montoExcedido(usuariosTT[cantTT].abono, usuariosTT[cantTT].minLibres, 0.21, usuariosTT[cantTT].tiempo);
                    }
                    else if(usuariosTT[cantTT].tipoDeAbono=='D')
                    {
                        usuariosTT[cantTT].abono=28;
                        usuariosTT[cantTT].minLibres=60;
                        montoExcedido(usuariosTT[cantTT].abono, usuariosTT[cantTT].minLibres, 0.29, usuariosTT[cantTT].tiempo);
                    }
                    else
                    {
                        usuariosTT[cantTT].abono=19;
                        usuariosTT[cantTT].minLibres=40;
                        montoExcedido(usuariosTT[cantTT].abono, usuariosTT[cantTT].minLibres, 0.37, usuariosTT[cantTT].tiempo);
                    }
                }
            }
            while(f!='A' && f!='B' && f!='C' && f!='D' && f!='E');
            if(usuariosTT[cantTT].abono>mayorAbonoTT)
            {
                mayorAbonoTT=usuariosTT[cantTT].abono;
                masCostosoTT=cantTT;
            }
            if(usuariosTT[cantTT].tiempo>mayorMinTT)
            {
                mayorMinTT=usuariosTT[cantTT].tiempo;
                masMinTT=cantTT;
            }
            total+=usuariosTT[cantTT].abono;
        }
        cantTT++;
    }
    while(usuariosTT[cantTT-1].numero!=0);

    do
    {
        cout<< "Ingrese numero o 0 para finalizar datos del turno noche\n";
        cin>> usuariosTN[cantTN].numero;
        if(usuariosTN[cantTN].numero!=0)
        {
            cout<< "Ingrese nombre\n";
            cin>> usuariosTN[cantTN].nombre;
            cout<< "Ingrese direccion\n";
            cin>> usuariosTN[cantTN].direccion;
            cout<< "Ingrese tiempo utilizado en formato HHMM\n";
            cin>> usuariosTN[cantTN].tiempo;
            usuariosTN[cantTN].tiempo=tiempoEnMinutos(usuariosTN[cantTN].tiempo);
            if(usuariosTN[cantTN].tiempo<menorMin)
            {
                menorMin=usuariosTN[cantTN].tiempo;
                menosMin=cantTN;
                turno='M';

            }
            cout<< "Ingrese tipo de abono A, B, C, D o E\n";
            do
            {
                cin>> usuariosTN[cantTN].tipoDeAbono;
                f=usuariosTN[cantTN].tipoDeAbono;
                if(f!='A' && f!='B' && f!='C' && f!='D' && f!='E')
                    cout<< "Dato incorrecto\n";
                else
                {
                    if(usuariosTN[cantTN].tipoDeAbono=='A')
                    {
                        usuariosTN[cantTN].abono=70;
                        usuariosTN[cantTN].minLibres=300;
                        montoExcedido(usuariosTN[cantTN].abono, usuariosTN[cantTN].minLibres, 0.09, usuariosTN[cantTN].tiempo);
                    }
                    else if(usuariosTN[cantTN].tipoDeAbono=='B')
                    {
                        usuariosTN[cantTN].abono=55;
                        usuariosTN[cantTN].minLibres=200;
                        montoExcedido(usuariosTN[cantTN].abono, usuariosTN[cantTN].minLibres, 0.15, usuariosTN[cantTN].tiempo);
                    }
                    else if(usuariosTN[cantTN].tipoDeAbono=='C')
                    {
                        usuariosTN[cantTN].abono=40;
                        usuariosTN[cantTN].minLibres=100;
                        montoExcedido(usuariosTN[cantTN].abono, usuariosTN[cantTN].minLibres, 0.21, usuariosTN[cantTN].tiempo);
                    }
                    else if(usuariosTN[cantTN].tipoDeAbono=='D')
                    {
                        usuariosTN[cantTN].abono=28;
                        usuariosTN[cantTN].minLibres=60;
                        montoExcedido(usuariosTN[cantTN].abono, usuariosTN[cantTN].minLibres, 0.29, usuariosTN[cantTN].tiempo);
                    }
                    else
                    {
                        usuariosTN[cantTN].abono=19;
                        usuariosTN[cantTN].minLibres=40;
                        montoExcedido(usuariosTN[cantTN].abono, usuariosTN[cantTN].minLibres, 0.37, usuariosTN[cantTN].tiempo);
                    }
                }
            }
            while(f!='A' && f!='B' && f!='C' && f!='D' && f!='E');
            if(usuariosTN[cantTN].abono>mayorAbonoTN)
            {
                mayorAbonoTN=usuariosTN[cantTN].abono;
                masCostosoTN=cantTN;
            }
            if(usuariosTN[cantTN].tiempo>mayorMinTN)
            {
                mayorMinTN=usuariosTN[cantTN].tiempo;
                masMinTN=cantTN;
            }
            total+=usuariosTN[cantTN].abono;
        }
        cantTN++;
    }
    while(usuariosTN[cantTN-1].numero!=0);

    if(usuariosTM[0].numero==0)
        cout<< "No se ingresaron datos en el turno manana\n";
    else
    {
        cout<< "Turno Manana\n";
        cout<< "Nombre del abonado   Direccion                 Minutos Libres  Minutos Excedidos  Monto Total a Abonar"<< endl;

        for(int i=0; i<cantTM; i++)
        {
            for(int r=0; r<24; r++)
            {
                if(usuariosTM[i].nombre[r]==NULL && r<19)
                {
                    usuariosTM[i].nombre[r]=95;
                    usuariosTM[i].nombre[r+1]=NULL;
                }
                if(usuariosTM[i].direccion[r]==NULL)
                {
                    usuariosTM[i].direccion[r]=95;
                    usuariosTM[i].direccion[r+1]=NULL;
                }
            }
            cout<< usuariosTM[i].nombre<< " "<< usuariosTM[i].direccion<< " "<< usuariosTM[i].minLibres<< " "<< usuariosTM[i].tiempo<< " "<< usuariosTM[i].abono<< endl;
        }
        cout<< "El abonado con la factura mas costosa de TM es "<< usuariosTM[masCostosoTM].nombre<< " y el monto es: "<< usuariosTM[masCostosoTM].abono<< endl;
        if(mayorMinTM==0)
            cout<< "No hubo excedentes\n";
        else
            cout<< usuariosTM[masMinTM].nombre<< ", numero "<< usuariosTM[masMinTM].numero<< " es el abonado con mayor excedente siendo "<< usuariosTM[masMinTM].tiempo<< endl;
    }

    if(usuariosTT[0].numero==0)
        cout<< "No se ingresaron datos en el turno tarde\n";
    else
    {
        cout<< "Turno Tarde\n";
        cout<< "Nombre del abonado   Direccion                 Minutos Libres  Minutos Excedidos  Monto Total a Abonar"<< endl;

        for(int i=0; i<cantTT; i++)
        {
            for(int r=0; r<24; r++)
            {
                if(usuariosTT[i].nombre[r]==NULL && r<19)
                {
                    usuariosTT[i].nombre[r]=95;
                    usuariosTT[i].nombre[r+1]=NULL;
                }
                if(usuariosTT[i].direccion[r]==NULL)
                {
                    usuariosTT[i].direccion[r]=95;
                    usuariosTT[i].direccion[r+1]=NULL;
                }
            }
            cout<< usuariosTT[i].nombre<< " "<< usuariosTT[i].direccion<< " "<< usuariosTT[i].minLibres<< " "<< usuariosTT[i].tiempo<< " "<< usuariosTT[i].abono<< endl;
        }
        cout<< "El abonado con la factura mas costosa de TT es "<< usuariosTT[masCostosoTT].nombre<< " y el monto es: "<< usuariosTT[masCostosoTT].abono<< endl;
        if(mayorMinTT==0)
            cout<< "No hubo excedentes\n";
        else
            cout<< usuariosTT[masMinTT].nombre<< ", numero "<< usuariosTT[masMinTT].numero<< " es el abonado con mayor excedente siendo "<< usuariosTT[masMinTT].tiempo<< endl;
    }

    if(usuariosTN[0].numero==0)
        cout<< "No se ingresaron datos en el turno noche\n";
    else
    {
        cout<< "Turno Noche\n";
        cout<< "Nombre del abonado  Direccion                 Minutos Libres  Minutos Excedidos  Monto Total a Abonar"<< endl;

        for(int i=0; i<cantTN; i++)
        {
            for(int r=0; r<24; r++)
            {
                if(usuariosTN[i].nombre[r]==NULL && r<19)
                {
                    usuariosTN[i].nombre[r]=95;
                    usuariosTN[i].nombre[r+1]=NULL;
                }
                if(usuariosTN[i].direccion[r]==NULL)
                {
                    usuariosTN[i].direccion[r]=95;
                    usuariosTN[i].direccion[r+1]=NULL;
                }
            }
            cout<< usuariosTN[i].nombre<< " "<< usuariosTN[i].direccion<< " "<< usuariosTN[i].minLibres<< " "<< usuariosTN[i].tiempo<< " "<< usuariosTN[i].abono<< endl;
        }
        cout<< "El abonado con la factura mas costosa de TN es "<< usuariosTN[masCostosoTN].nombre<< " y el monto es: "<< usuariosTN[masCostosoTN].abono<< endl;
        if(mayorMinTN==0)
            cout<< "No hubo excedentes\n";
        else
            cout<< usuariosTN[masMinTN].nombre<< ", numero "<< usuariosTN[masMinTN].numero<< " es el abonado con mayor excedente siendo "<< usuariosTN[masMinTN].tiempo<< endl;
    }

    cout<< "El monto total facturado es: "<< total<< endl;
    if(turno=='M')
        cout<< "El abonado con la menor cantidad de minutos es "<< usuariosTM[menosMin].nombre<< " en el puesto "<< menosMin+1<< " en el turno manana\n";
    if(turno=='T')
        cout<< "El abonado con la menor cantidad de minutos es "<< usuariosTT[menosMin].nombre<< " en el puesto "<< menosMin+1<< " en el turno tarde\n";
    if(turno=='N')
        cout<< "El abonado con la menor cantidad de minutos es "<< usuariosTN[menosMin].nombre<< " en el puesto "<< menosMin+1<< " en el turno noche\n";
    return 0;
}
