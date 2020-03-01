#include <iostream>

using namespace std;

struct Nodo
{
    int info;
    Nodo *sgte;
};

Nodo *obtenerUltimo(Nodo *lista)
{
    while(lista && lista->sgte)
    {
        lista = lista->sgte;
    }
    return lista;
}
void insertarAlFinal(Nodo *&lista, int dato)
{
    Nodo *paux = NULL;
    if(lista == NULL)
    {
        lista = new Nodo;
        lista->info = dato;
        lista->sgte = NULL;
    }
    else
    {
        paux = obtenerUltimo(lista);
        paux->sgte = new Nodo;
        paux = paux->sgte;
        paux->info = dato;
        paux->sgte = NULL;
    }
}
void insertarOrdenado(Nodo *&lista, int dato)
{
    Nodo *paux = NULL, *anterior = NULL;
    paux = lista;

    if(lista == NULL)
    {
        lista = new Nodo();
        lista->info = dato;
        lista->sgte = NULL;
    }
    else
    {
        while (paux && paux->info < dato)
        {
            anterior = paux;
            paux = paux->sgte;
        }
        anterior->sgte = new Nodo();
        anterior->sgte->info = dato;
        anterior->sgte->sgte = paux;
    }
}
void mostrar(Nodo *lista)
{
    while(lista)
    {
        cout<< lista->info << endl;
        lista = lista->sgte;
    }
    cout<< endl;
}
void mayor(Nodo *lista)
{
    int dato;
    if(lista == NULL)
        cout<< "Lista vacia, ingrese datos\n";
    else
    {
        while(lista)
        {
            dato = lista->info;
            lista = lista->sgte;
        }
        cout<< "El mayor dato es: " << dato << endl << endl;
    }
}
void promedio(Nodo *lista)
{
    float suma = 0, i = 0;
    if(lista == NULL)
        cout<< "Lista vacia, ingrese datos\n";
    else
    {
        while(lista)
        {
            suma += lista->info;
            lista = lista->sgte;
            i++;
        }
        cout<< "El promedio es: " << suma/i << endl << endl;
    }
}
int main()
{
    Nodo *lista = NULL;
    insertarOrdenado(lista, 3);
    insertarOrdenado(lista, 67);
    insertarOrdenado(lista, 52);
    insertarOrdenado(lista, 23);
    insertarOrdenado(lista, 4);
    mostrar(lista);
    mayor(lista);
    promedio(lista);



    return 0;
}
