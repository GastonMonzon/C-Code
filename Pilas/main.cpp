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
void push(Nodo *&pila, int dato)
{
    Nodo *paux = NULL;
    if(pila == NULL)
    {
        pila = new Nodo;
        pila->info = dato;
        pila->sgte = NULL;
    }
    else
    {
        paux = obtenerUltimo(pila);
        paux->sgte = new Nodo;
        paux = paux->sgte;
        paux->info = dato;
        paux->sgte = NULL;
    }
}
void pop(Nodo *&pila)
{
    Nodo *paux = pila, *anterior = NULL;
    if(pila == NULL)
    {
        cout<< "Pila vacia, ingrese datos primero\n";
    }
    else
    {
        while (paux && paux->sgte)
        {
            anterior = paux;
            paux = paux->sgte;
        }
        cout<< "Dato " << paux->info << " removido\n" << endl;
        delete paux;
        if(anterior != NULL)
            anterior->sgte = NULL;
        else
            pila = NULL;
    }
}
void mostrar(Nodo *lista)
{
    while(lista)
    {
        cout<< lista->info << endl;
        lista = lista->sgte;
    }
}
int main()
{
    Nodo *pila = NULL;
//    int x;
//    cout<< "Ingrese un dato:\n";
//    cin>> x;
    push(pila, 5);
    push(pila, 13);
    push(pila, 7);
    push(pila, 4);
    pop(pila);
    mostrar(pila);
    mostrar(pila);
    return 0;
}
