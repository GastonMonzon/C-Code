#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout<< "Ingrese 2 valores\n";
    cin>> x >> y;
    cout<< endl;
    if(x > y)
        cout<< x << " es mayor que " << y << endl;
    else
    {
        if(x == y)
        cout<< x << " es igual a " << y << endl;
        else
            cout<< y << " es mayor que " << x << endl;
    }
    return 0;
}
