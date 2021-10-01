/**escribir un programa para leer dos numeros enteros
y mostrar por pantalla la suma y la resta de dichos valores
Input       Output
2 3         suma=5,resta=-1
*/
#include <iostream>
using namespace std;
int sumar(int a,int b)
{
    int c=a+b;
    return c;
}
int restar(int a,int b)
{
    int c=a-b;
    return c;
}
int main()
{
    int(*puntero)(int,int);
    auto *puntero2=sumar;
    int a,b,s,r;
    cout<<"Introduzca dos valores enteros:\n";
    cin>>a>>b;

    puntero=sumar;
    s=puntero2(a,b);

    puntero=restar;
    r=puntero(a,b);

    cout<<"suma="<<s<<",resta="<<r;
    return 0;
}
