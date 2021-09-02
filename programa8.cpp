/*
escribir un programa para leer dos numeros
por teclado y mostrar por pantalla
los mismos valores en orden descendente.
Input           Output
4 9             9
                4

10 5            10
                5
*/
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Introduzca dos valores:\n";
    cin>>a>>b;
    cout<<"Los valores son:\n";
    if(a>b)
    {
        cout<<a<<endl<<b;
    }
    else
    {
        cout<<b<<endl<<a;
    }
    return 0;
}
