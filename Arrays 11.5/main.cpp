#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int M, N, P;
    cin>> M >> N >> P;
    int vx3[M][N][P];
//    vx1[M * N * P];
    int aux[M][N][P];

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
    for(int k = 0; k < P; k++)
    {
        cout<< "|";
        for(int i = 0; i < M; i++)
        {
            for(int j = 0; j < N; j++)
            {
                if(j == 0)
                {
                    cout<< "{";
                }
                if(j < N - 1)
                {
                    cout<< "[" <<vx3[i][j][k]<< "],";
                }
                else
                {
                    cout<<"[" <<vx3[i][j][k]<< "]} ";
                }
            }
        }
        cout<< "|\n";
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

    for(int i = 0; i < M - 1; i++)
    {
        for(int j = 0; j < M - 1 - i; j++)
        {
            if(vx3[j+1] < vx3[j])
            {
                for(int J = 0; J < N; J++)
                {
                    for(int K = 0; K < P; K++)
                    {
                        aux[j][J][K] = vx3[j][J][K];
                        vx3[j][J][K] = vx3[j+1][J][K];
                        vx3[j+1][J][K] = aux[j][J][K];
                    }
                }
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
