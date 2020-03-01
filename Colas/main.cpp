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
void Queue(Nodo *&cola, int dato)
{
    Nodo *paux = NULL;
    if(cola == NULL)
    {
        cola = new Nodo;
        cola->info = dato;
        cola->sgte = NULL;
    }
    else
    {
        paux = obtenerUltimo(cola);
        paux->sgte = new Nodo;
        paux = paux->sgte;
        paux->info = dato;
        paux->sgte = NULL;
    }
}
void unQueue(Nodo *&cola)
{
    Nodo *paux = NULL;
    cout<< "Dato " << cola->info << " extraido\n\n";
    paux = cola->sgte;
    delete cola;
    cola = paux;
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
int main()
{
    Nodo *cola = NULL;
    Queue(cola, 9);
    Queue(cola, 16);
    Queue(cola, 3);
    Queue(cola, 12);
    Queue(cola, 48);
    mostrar(cola);
    unQueue(cola);
    mostrar(cola);
    unQueue(cola);
    mostrar(cola);

    return 0;
}
