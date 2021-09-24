#include <iostream>
using namespace std;
//leer un entero positivo sin usar funciones
int main()
{
    int a;
    do
    {
        cout<<endl<<"Introduzca un numero positivo (ej. 5) :"<<endl;
        cin>>a;
    }while(a<0);
    cout<<"a="<<a;

    int b;
    do
    {
        cout<<endl<<"Introduzca un numero positivo (ej. 5):"<<endl;
        cin>>b;
    }while(b<0);
    cout<<"b="<<b;

    int c;
    do
    {
        cout<<endl<<"Introduzca un numero positivo (ej. 5):"<<endl;
        cin>>c;
    }while(c<0);
    cout<<"c="<<c;
    //instrucciones*/
    return 0;
}
