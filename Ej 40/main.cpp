#include <iostream>

using namespace std;

string Tendecia(int A, int B)
{
    if((B-A)<0)
        return "Decreciente";
    if((B-A)<(A/0.02))
        return "Estable";
    if((B-A)<(A/0.05))
        return "Leve ascenso";
    return "En ascenso";
}
int main()
{
    return 0;
}
