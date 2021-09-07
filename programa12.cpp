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
#include <algorithm>
using namespace std;
int main()
{
    int a,b,c,mab,mbc,menor,mayor;
    cout<<"introduzca tres valores por favor :D \n";
    cin>>a>>b>>c;
    cout<<"los valores son:"<<endl;
    mab=max(a,b);
    mbc=max(b,c);
    mayor=max(mab,mbc);
    cout<<mayor<<endl<<mab+mbc-mayor<<endl<<a+b+c-mab-mbc;
    return 0;
}

