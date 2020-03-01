#include <iostream>

using namespace std;

int main()
{
    int edad;
    cout<< "Ingrese una edad\n";
    cin>> edad;
    if(edad<13)
        cout<< "Menor";
    else
    {
        if(edad>12 && edad<19)
            cout<< "Cadete\n";
        else
        {
            if(edad>18 && edad<27)
                cout<< "Juvenil\n";
            else
                cout<< "Mayor\n";
        }
    }
    return 0;
}
