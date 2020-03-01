#include <iostream>

using namespace std;

void inc3 (int &x)
{
    x+=3;
    return;
}
void inc1 (int x)
{
    x+=1;
    inc3(x);
    return;
}

bool mmm (int x)
{
    1=true
    if (x>1)
        return 8;
    return 0;
}
int main()
{
    int x=6;
    inc1(x);
    cout<< x<< endl;
    cout<< mmm(x)<< endl;


    return 0;
}
