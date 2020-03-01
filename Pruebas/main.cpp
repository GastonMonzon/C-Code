#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int a;
    do
    {
        cout<< "Ingrese\n";
        cin>> a;
    if(a>0)
        cout<< a;
    }
    while(a<1);
//    char algo[20], algomas[25];
//    cin.getline(algo, 19);
//    cin.getline(algomas, 24);
//    for(int i=0; i<19; i++)
//    {
//        if(algo[i]==NULL)
//            {
//                algo[i]=32;
//                algo[i+1]=NULL;
//            }
//    }
//    cout<< algo << " " << algomas<< endl;
//    cout<< algomas<< " "<< algo<< endl;
    return 0;
}
