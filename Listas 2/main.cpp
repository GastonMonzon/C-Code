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
    Nodo *lista1 = NULL, *lista2 = NULL, *paux = NULL;
    insertarAlFinal(lista1, 14);
    insertarAlFinal(lista1, 6);
    insertarAlFinal(lista1, 5);
    insertarAlFinal(lista1, 23);
    insertarAlFinal(lista1, 45);
    insertarAlFinal(lista2, 5);
    insertarAlFinal(lista2, 8);
    insertarAlFinal(lista2, 87);
    insertarAlFinal(lista2, 42);
    paux = obtenerUltimo(lista1);
    paux->sgte = lista2;
    mostrar(lista1);




    return 0;
}
