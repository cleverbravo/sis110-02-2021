/**
escribir un programa para leer por teclado un numero entero
y mostrar por pantalla la suma de todos sus digitos.
Input       Output
34          7
10          1
100         1
11          2
5           5
374         14
*/
#include <iostream>
using namespace std;
int main()
{
    int x,suma=0;
    cout<<"Introduzca un numero entero\n";
    cin>>x;
    while(x!=0)
    {
        int u=x%10;
        //cout<<"ultimo digito="<<u<<endl;
        x=x/10;
        suma=suma+u;
    }
    cout<<"suma="<<suma;
    return 0;
}
