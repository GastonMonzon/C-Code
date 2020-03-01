#include <iostream>

using namespace std;

void simplif(int p, int q)
{
    int i=2, h=0;
    while (i<=p || i<=q)
    {

        if ((p%i)==0 && (q%i)==0)
        {
            cout<< p/i<< "/"<< q/i<< endl;
            p/=i;
            q/=i;
            i=1;
            h=1;
        }
        i++;
    }
    if (h==0)
        cout<< p<< "/"<<q<< endl;
    return;
}

int main()
{
    int p,q;
    cout<< "Ingrese 2 valores naturales\n";
    cin>> p>> q;
    simplif(p,q);

    return 0;
}
