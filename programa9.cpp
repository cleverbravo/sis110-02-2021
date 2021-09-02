/*
escribir un programa para leer tres numeros
por teclado y mostrar por pantalla
los mismos valores en orden descendente.
Input           Output
4 9  10         10
                9
                4

10 1 5          10
                5
                1
*/
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"introdusca tres valores por favor :D \n";
    cin>>a>>b>>c;
    cout<<"los valores son:"<<endl;
    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<endl;
            if(b>c)
                cout<<b<<endl<<c;
            else
                cout<<c<<endl<<b;
        }
        else
        {
            cout<<c<<endl;
            if(a>b)
                cout<<a<<endl<<b;
            else
                cout<<b<<endl<<a;
        }
    }
    else
    {
        if(b>c)
        {
            cout<<b<<endl;
            if(a>c)
                cout<<a<<endl<<c;
            else
                cout<<c<<endl<<a;
        }
        else
        {
            cout<<c<<endl;
            if(a>b)
                cout<<a<<endl<<b;
            else
                cout<<b<<endl<<a;
        }
    }
    return 0;
}
