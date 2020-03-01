#include <iostream>

using namespace std;

struct NodoCola
{
    int info;
    NodoCola *sgte;
};

struct Cola
{
    NodoCola *inicio;
    NodoCola *fin;
};

void Queue(Cola &cola, int dato)
{
    if(!cola.inicio)
    {
        cola.inicio = new NodoCola;
        cola.fin = cola.inicio;
        cola.inicio->info = dato;
        cola.inicio->sgte = NULL;
    }
    else
    {
        cola.fin->sgte = new NodoCola;
        cola.fin = cola.fin->sgte;
        cola.fin->info = dato;
        cola.fin->sgte = NULL;
    }
}
void unQueue(Cola &cola)
{
    if(!cola.inicio)
        cout<< "Cola vacia, ingrese datos primero\n";
    else
    {
        NodoCola *paux;
        cout<< "Dato " << cola.inicio->info << " extraido\n";
        paux = cola.inicio->sgte;
        delete cola.inicio;
        cola.inicio = paux;
        if(!paux)
            cola.fin = NULL;
    }
}
void mostrar(Cola lista)
{
    while(lista.inicio->sgte)
    {
        cout<< lista.inicio->info << endl;
        lista.inicio = lista.inicio->sgte;
    }
    cout<< endl;
}
int main()
{
    Cola cola;
    Queue(cola, 9);
    Queue(cola, 16);
    Queue(cola, 3);
    Queue(cola, 12);
    Queue(cola, 48);
//    mostrar(cola);
//    unQueue(cola);
//    mostrar(cola);
//    unQueue(cola);
//    mostrar(cola);
    return 0;
}
