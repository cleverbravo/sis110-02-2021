/**
funciones lambda
*/
#include <iostream>
using namespace std;
int sumar(int x,int y)
{
    int z=x+y;
    return z;
}
int main()
{
    auto lambda=[](int x,int y)->int {int z=x+y;return z;};
    int a,b,c;
    cout<<"Introduzca dos valores enteros:\n";
    cin>>a>>b;
    //c=sumar(a,b);
    c=lambda(a,b);
    cout<<"c="<<c;
    return 0;
}
