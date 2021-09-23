/**
Escribir un programa para leer 10 numeros
enteros y mostrar por pantalla el mayor
y el menor;
Input                   Output
4 7 3 2 9 6 8 1 0 2     mayor=9,menor=0
*/
#include <iostream>
using namespace std;
int main()
{
    int v[10],mayor,menor;
    cout<<"Introduzca 10 numeros enteros:\n";
    for(int i=0;i<10;i++)
        cin>>v[i];

    mayor=menor=v[0];
    for(int i=0;i<10;i++)
    {
        if(v[i]>mayor)
            mayor=v[i];
        if(v[i]<menor)
            menor=v[i];
    }
    cout<<"mayor="<<mayor<<",menor="<<menor;
    return 0;
}
