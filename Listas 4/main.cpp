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
int contarNodos(Nodo *lista)
{
    int i = 0;
    while(lista)
    {
        lista = lista->sgte;
        i++;
    }
    return i;
}
Nodo *nodoAnterior(Nodo *inicio, Nodo *paux)
{
    if(inicio != paux)
    {
        while(inicio && (inicio->sgte != paux))
            inicio = inicio->sgte;
        return inicio;
    }
    return NULL;
}
void ordenarConInt(Nodo *&lista)
{
    Nodo *paux = NULL;
    int aux, aux2, tam = contarNodos(lista);
    for(int i = 0; i < tam - 1; i++)
    {
        paux = lista;
        for(int j = 0; j < tam - 1 - i; j++)
        {
            if(paux->info > paux->sgte->info)
            {
                aux = paux->info;
                aux2 = paux->sgte->info;
                paux->info = aux2;
                paux->sgte->info = aux;
            }
            paux = paux->sgte;
        }
    }
}
void ordenarConPunteros(Nodo *&lista)
{
    Nodo *pant = NULL, *paux = NULL, *pprox = NULL;
    int tam = contarNodos(lista);
    for(int i = 0; i < tam - 1; i++)
    {
        paux = lista;
        for(int j = 0; j < tam - 1 - i; j++)
        {
            if(paux->info > paux->sgte->info)
            {
                if(paux == lista)
                {
                    lista= paux->sgte;
                    pprox = lista->sgte;
                    lista->sgte = paux;
                    paux->sgte = pprox;
                }
                else
                {
                    pant = nodoAnterior(lista, paux);
                    pprox = paux->sgte;
                    pant->sgte = pprox;
                    paux->sgte = pprox->sgte;
                    pprox->sgte = paux;
                }
            }
            else
                paux = paux->sgte;
        }
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
    Nodo *lista = NULL;
    insertarAlFinal(lista, 2);
    insertarAlFinal(lista, 5);
    insertarAlFinal(lista, 9);
    insertarAlFinal(lista, 21);
    insertarAlFinal(lista, 34);
    insertarAlFinal(lista, 77);
    insertarAlFinal(lista, 86);
    insertarAlFinal(lista, 14);
    insertarAlFinal(lista, 7);
    insertarAlFinal(lista, 49);
    insertarAlFinal(lista, 31);
    ordenarConPunteros(lista);
    mostrar(lista);
    return 0;
}
