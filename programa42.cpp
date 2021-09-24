#include <iostream>
using namespace std;
//leer un entero positivo usando funciones
int leerEntero()
{
    int x;
    do
    {
        cout<<endl<<"Introduzca un numero positivo (ej. 5):"<<endl;
        cin>>x;
    }while(x<0);
    return x;
}
int main()
{
    int a=leerEntero();
    int b=leerEntero();
    int c=leerEntero();
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;
    //instrucciones*/
    return 0;
}
