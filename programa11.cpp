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
    int a,b,c,mab,mbc,menor;
    cout<<"introdusca tres valores por favor :D \n";
    cin>>a>>b>>c;
    cout<<"los valores son:"<<endl;
    if(a>b)
        mab=a;
    else
        mab=b;
    if(b>c)
        mbc=b;
    else
        mbc=c;
    if(mab>mbc)
        cout<<mab<<endl<<mbc<<endl<<a+b+c-mab-mbc;
    else
        cout<<mbc<<endl<<mab<<endl<<a+b+c-mab-mbc;
    return 0;
}
