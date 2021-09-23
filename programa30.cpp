/**
Escribir un programa para leer por teclado
5 numeros enteros y mostrar por pantalla
el mismo valor elevado al cuadrado
Input           Output
2 3 5 90 1      4,9,25,8100,1
*/
#include <iostream>
using namespace std;
int main()
{
    int x[5],r[5];
    cout<<"Introduzca 5 numeros enteros:\n";
    for(int i=0;i<5;i++)
    {
        cin>>x[i];
        r[i]=x[i]*x[i];
    }
    for(int i=0;i<5;i++)
        cout<<r[i]<<",";
    return 0;
}
