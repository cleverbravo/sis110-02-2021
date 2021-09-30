/**
parametros de funciones
escribir un programa para sumar dos numeros enteros.
*usando funciones
Input       Output
2 4         6
3 3         6
0 1         1
*/
#include <iostream>
using namespace std;
///debemos tratar que la funcion sea generica.
///single reponsability, una sola responsabilidad

//(int x,int y) parametros por valor
int sumar(int x,int y)
{
    int z=x+y;
    return z;
}
//(int &x,int &y,int &z) parametros por referencia
void sumar2(int x,int y,int &z)
{
    z=x+y;
}
//int *z  -> es un puntero
void sumar3(int x,int y,int *z)
{
    *z=x+y;
    cout<<"&x="<<&x<<"\t&y="<<&y<<"\t&z="<<z<<endl;
}
int main()
{
    int a,b,c;
    cout<<"&a="<<&a<<"\t&b="<<&b<<"\t&c="<<&c<<endl;
    cout<<"Introduzca dos valores enteros:\n";
    cin>>a>>b;
    //c=sumar(a,b);
    //sumar2(a,b,c);
    sumar3(a,b,&c);
    cout<<"suma="<<c;
    return 0;
}
