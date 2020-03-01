#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    FILE *f1, *f2, *f3;
    int x1, x2, x;
//    if (f1 = fopen("Archivo1", "wb"))
//    {
//        for(int i = 1; i <= 10; i++)
//        {
//            fwrite(&i, sizeof(int), 1, f1);
//        }
//        fclose(f1);
//    }
//    if (f2 = fopen("Archivo2", "wb"))
//    {
//        for(int i = 11; i <= 20; i++)
//        {
//            fwrite(&i, sizeof(int), 1, f2);
//        }
//        fclose(f2);
//    }
//    f1 = fopen("Archivo1", "rb");
//    f2 = fopen("Archivo2", "rb");
//    f3 = fopen("Archivo3", "wb");
//    while(fread(&x1,sizeof(int),1,f1) && fread(&x2,sizeof(int),1,f2))
//    {
//        fwrite(&x1,sizeof(int),1,f3);
//        fwrite(&x2,sizeof(int),1,f3);
//    }
//    fclose(f1);
//    fclose(f2);
//    fclose(f3);

    f3 = fopen("Archivo3", "rb");
    while(fread(&x,sizeof(int),1,f3))
        cout<< x << endl;
    fclose(f3);

//    f1 = fopen("Archivo1","wb");
//    int v[] = {2,5,64,20,31};
//    fwrite(v, sizeof(int),5,f1);
//    fclose(f1);
//    int x;
//    f1 = fopen("Archivo1", "rb");
//    while(fread(&x,sizeof(int),1,f1))
//        cout<< x << endl;
//    fclose(f1);


    return 0;
}
