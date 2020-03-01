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
Nodo *intercalarListas(Nodo *lista1, Nodo *lista2)
{
    Nodo *lista3 = NULL;
    while(lista1)
    {
        insertarAlFinal(lista3, lista1->info);
        lista1 = lista1->sgte;
        if(lista2)
        {
            insertarAlFinal(lista3, lista2->info);
            lista2 = lista2->sgte;
        }
    }
    while(lista2)
    {
        insertarAlFinal(lista3, lista2->info);
        lista2 = lista2->sgte;
    }
    return lista3;
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
    Nodo *lista1 = NULL, *lista2 = NULL, lista3 = NULL;
    insertarAlFinal(lista1, 2);
    insertarAlFinal(lista1, 5);
    insertarAlFinal(lista1, 9);
    insertarAlFinal(lista1, 21);
    insertarAlFinal(lista2, 34);
    insertarAlFinal(lista2, 77);
    insertarAlFinal(lista2, 86);
    insertarAlFinal(lista2, 14);
    insertarAlFinal(lista2, 7);
    insertarAlFinal(lista2, 49);
    insertarAlFinal(lista2, 31);
    lista3 = intercalarListas(lista1, lista2);
    mostrar(lista3);

    return 0;
}
