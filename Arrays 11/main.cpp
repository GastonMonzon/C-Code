#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int M, N, P, R = 0, aux;
    cin>> M >> N >> P;
    int vx3[M][N][P], vx1[M * N * P];

    srand(time(0));
    for (int i = 0; i< M; i++)
    {
        for (int j=0; j < N; j++)
        {
            for(int k = 0; k < P; k++)
            {
                vx3[i][j][k]= rand()%100;
            }
        }
    }

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            for(int k = 0; k < P; k++)
            {
                if(k == 0)
                {
                    cout<< "{";
                }
                if(k < P - 1)
                {
                    cout<< "[" <<vx3[i][j][k]<< "],";
                }
                else
                {
                    cout<<"[" <<vx3[i][j][k]<< "]}"<< endl;
                }
            }
        }
    }
    cout<<endl;

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            for(int k = 0; k < P; k++)
            {
                vx1[R] = vx3[i][j][k];
                R++;
            }
        }
    }
    for(int i = 0; i < (M * N * P) - 1; i++)
    {
        for(int j = 0; j < (M * N * P) - 1 - i; j++)
        {
            if(vx1[j+1] > vx1[j])
            {
                aux = vx1[j];
                vx1[j] = vx1[j+1];
                vx1[j+1] = aux;
            }
        }
    }
    R = 0;

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            for(int k = 0; k < P; k++)
            {
                vx3[i][j][k] = vx1[R];
                R++;
            }
        }
    }

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < N; j++)
        {
            for(int k = 0; k < P; k++)
            {
                if(k == 0)
                {
                    cout<< "{";
                }
                if(k < P - 1)
                {
                    cout<< "[" <<vx3[i][j][k]<< "],";
                }
                else
                {
                    cout<<"[" <<vx3[i][j][k]<< "]}"<< endl;
                }
            }
        }
    }
    return 0;
}
