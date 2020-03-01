#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    FILE *f1, *f2, *f3;
    int x1, x2, x;
    if (f1 = fopen("Archivo1", "wb"))
    {
        for(int i = 1; i <=64 ; i*=2)
        {
            fwrite(&i, sizeof(int), 1, f1);
        }
        fclose(f1);
    }
    if (f2 = fopen("Archivo2", "wb"))
    {
        for(int i = 1; i <= 90; i*=3)
        {
            fwrite(&i, sizeof(int), 1, f2);
        }
        fclose(f2);
    }
    f1 = fopen("Archivo1", "rb");
    f2 = fopen("Archivo2", "rb");
    f3 = fopen("Archivo3", "wb");
    fseek(f1, (-1)*sizeof(int), SEEK_END);
    fseek(f2, (-1)*sizeof(int), SEEK_END);

    while(fread(&x1, sizeof(int), 1, f1) && fread(&x2, sizeof(int), 1, f2))
    {
        if(x1 >= x2)
        {
            fwrite(&x1, sizeof(int), 1, f3);
            fseek(f1, (-2)*sizeof(int), SEEK_CUR);
            fseek(f2, (-1)*sizeof(int), SEEK_CUR);
        }
        else
        {
            fwrite(&x2, sizeof(int), 1, f3);
            fseek(f2, (-2)*sizeof(int), SEEK_CUR);
            fseek(f1, (-1)*sizeof(int), SEEK_CUR);
        }
    }
    if(fseek(f1, (-1)*sizeof(int), SEEK_CUR))
    {
        while(fread(&x1, sizeof(int), 1, f1))
        {
            fwrite(&x1, sizeof(int), 1, f3);
            fseek(f1, (-2)*sizeof(int), SEEK_CUR);
        }
    }
    if(!feof(f2))
    {
        while(fread(&x2, sizeof(int), 1, f2))
        {
            fwrite(&x2, sizeof(int), 1, f3);
            fseek(f2, (-2)*sizeof(int), SEEK_CUR);
        }
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);

    f1 = fopen("Archivo3", "rb");
    while(fread(&x, sizeof(int), 1, f1))
        cout<< x << endl;

    return 0;
}
