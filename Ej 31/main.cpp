#include <iostream>

using namespace std;

struct EstudiosCompletos
{
    char estudiosAlcanzados;
    char completos;
};
struct Integrantes
{
    string nombre;
    string apellido;
    unsigned int edad;
    char sexo;
    bool primComp=true;
    EstudiosCompletos estudios;
};
struct Encuesta
{
    string domicilio;
    char tipoDeVivienda;
    unsigned int cantIntegrantes;
    float promedioEdad;
    Integrantes familia[10];
};


int main()
{
    Encuesta miEncuesta[100];
    unsigned int i=0, j, cant, deptoLleno=0, sumaFamilia, sumaTotal=0, cantTotal=0, cantMasc=0, cantFem=0, cantAnalf=0, cantPriIncom=0, cantSecIncom=0, cantTerIncom=0, cantUniIncom=0;
    float promedioTotal, porcentajeSexoM, porcentajeSexoF, porcentajeAnalf;
    char h, g;
    cout<< "Ingrese la cantidad de encuestados\n";
    cin>> cant;
    do
    {
        j=0, sumaFamilia=0;
        cout<< "Ingrese domicilio\n";
        cin>> miEncuesta[i].domicilio;
        do
        {
            cout<< "Ingrese tipo de vivienda, C casa o D departamento\n";
            cin>> miEncuesta[i].tipoDeVivienda;
            if(miEncuesta[i].tipoDeVivienda!='C' || miEncuesta[i].tipoDeVivienda!='D')
                cout<< "Dato incorrecto\n";
        }
        while(miEncuesta[i].tipoDeVivienda!='C' || miEncuesta[i].tipoDeVivienda!='D');
        cout<< "Ingrese cantidad de integrantes\n";
        cin>> miEncuesta[i].cantIntegrantes;
        if(miEncuesta[i].tipoDeVivienda!='D' && miEncuesta[i].cantIntegrantes>deptoLleno)
            deptoLleno=i;
        cantTotal+=miEncuesta[i].cantIntegrantes;
        do
        {
            cout<< "Ingrese nombre\n";
            cin>> miEncuesta[i].familia[j].nombre;
            cout<< "Ingrese apellido\n";
            cin>> miEncuesta[i].familia[j].apellido;
            cout<< "Ingrese edad\n";
            cin>> miEncuesta[i].familia[j].edad;
            do
            {
                cout<< "Ingrese sexo, M masculino o F femenino\n";
                cin>> miEncuesta[i].familia[j].sexo;
                if(miEncuesta[i].familia[j].sexo!='M' || miEncuesta[i].familia[j].sexo!='F')
                    cout<< "Dato incorrecto\n";
            }
            while(miEncuesta[i].familia[j].sexo!='M' || miEncuesta[i].familia[j].sexo!='F');
            if(miEncuesta[i].familia[j].sexo=='M')
                cantMasc++;
            else
                cantFem++;
            do
            {
                cout<< "Ingrese nivel de estudios alcanzados, N no posee, P primario, S secundario, T terciario o U universitario\n";
                cin>> miEncuesta[i].familia[j].estudios.estudiosAlcanzados;
                h=miEncuesta[i].familia[j].estudios.estudiosAlcanzados;
                if(h!='N' || h!='P' || h!='S' || h!='T '|| h!='U')
                    cout<< "Dato incorrecto\n";
            }
            while(h!='N' || h!='P' || h!='S' || h!='T' || h!='U');
            if(h!='N')
            {
                unsigned int x;
                string nivel;
                switch(h)
                {
                case 'P':
                    x=1;
                    break;
                case 'S':
                    x=2;
                    break;
                case 'T':
                    x=3;
                    break;
                case 'U':
                    x=4;
                    break;
                }
                for(unsigned int r=0; r<x; r++)
                {
                    switch(r)
                    {
                    case 0:
                        nivel="Primario";
                        break;
                    case 1:
                        nivel="Secundario";
                        break;
                    case 2:
                        nivel="Terciario";
                        break;
                    case 3:
                        nivel="Universitario";
                        break;
                    }
                    do
                    {
                        cout<< "Ingrese si "<< nivel << " esta completo, I incompleto o C completo\n";
                        cin>> miEncuesta[i].familia[j].estudios.completos;
                        g=miEncuesta[i].familia[j].estudios.completos;
                        if(g!='I' || g!='C')
                            cout<< "Dato incorrecto\n";
                    }
                    while(g!='I' || g!='C');
                }
                if(g=='I')
                {
                    if(h=='U')
                        cantUniIncom++;
                    else
                    {
                        if(h=='T')
                            cantTerIncom++;
                        else
                        {
                            if(h=='S')
                                cantSecIncom++;
                            else
                                {
                                    cantPriIncom++;
                                    miEncuesta[i].familia[j].primComp=false;
                                }
                        }
                    }
                }
            }
            else
            {
                miEncuesta[i].familia[j].primComp=false;
                if(miEncuesta[i].familia[j].edad>10)
                    cantAnalf++;
            }
            j++;
            sumaFamilia+=miEncuesta[i].familia[j].edad;
            sumaTotal+=miEncuesta[i].familia[j].edad;
        }
        while(j<miEncuesta[i].cantIntegrantes);
        miEncuesta[i].promedioEdad=sumaFamilia/j;
        i++;
    }
    while(i<cant);
    promedioTotal=sumaTotal/i;
    porcentajeSexoF=(cantFem*100)/cantTotal;
    porcentajeSexoM=(cantMasc*100)/cantTotal;
    porcentajeAnalf=(cantAnalf*100)/cantTotal;

    return 0;
}
