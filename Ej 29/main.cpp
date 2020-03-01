#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
    cout<< "Convertidor de numeros romanos\n";
    int x,y,u,d,c,m;
    do
    {
        cout<< "Ingrese un numero entre 0 y 3999\n";
        cin>> x;
        if (x<0 || x>3999)
        {
            cout<< "Numero ingresado incorrecto\n";
        }
    }
    while (x<0 || x>3999);
    y=x;
    u=x%10;
    x/=10;
    d=x%10;
    x/=10;
    c=x%10;
    x/=10;
    m=x%10;
    x/=10;
    if (y>1000)
    {
        switch(m)
        {
        case 1:
            cout<< "M";
            break;
        case 2:
            cout<< "MM";
            break;
        case 3:
            cout<< "MMM";
            break;
        }
    }
    if (y>100)
    {
        switch(c)
        {
        case 1:
            cout<< "C";
            break;
        case 2:
            cout<< "CC";
            break;
        case 3:
            cout<< "CCC";
            break;
        case 4:
            cout<< "DC";
            break;
        case 5:
            cout<< "D";
            break;
        case 6:
            cout<< "DC";
            break;
        case 7:
            cout<< "DCC";
            break;
        case 8:
            cout<< "DCCC";
            break;
        case 9:
            cout<< "MC";
            break;
        }
    }
    if (y>10)
    {
        switch(d)
        {
        case 1:
            cout<< "X";
            break;
        case 2:
            cout<< "XX";
            break;
        case 3:
            cout<< "XXX";
            break;
        case 4:
            cout<< "XL";
            break;
        case 5:
            cout<< "L";
            break;
        case 6:
            cout<< "LX";
            break;
        case 7:
            cout<< "LXX";
            break;
        case 8:
            cout<< "LXXX";
            break;
        case 9:
            cout<< "XC";
            break;
        }
    }
    {
        switch(u)
        {
        case 1:
            cout<< "I";
            break;
        case 2:
            cout<< "II";
            break;
        case 3:
            cout<< "III";
            break;
        case 4:
            cout<< "IV";
            break;
        case 5:
            cout<< "V";
            break;
        case 6:
            cout<< "VI";
            break;
        case 7:
            cout<< "VII";
            break;
        case 8:
            cout<< "VIII";
            break;
        case 9:
            cout<< "IX";
            break;
        }
    }
    return 0;
}
