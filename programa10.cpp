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
    int a,b,c,mayor,medio,menor;
    cout<<"introdusca tres valores por favor :D \n";
    cin>>a>>b>>c;
    cout<<"los valores son:"<<endl;
    if(a>b)
    {
        if(a>c)
            mayor=a,medio=b,menor=c;
        else
            mayor=c,medio=a,menor=b;
    }
    else
    {
        if(b>c)
            mayor=b,medio=a,menor=c;
        else
            mayor=c,medio=a,menor=b;
    }
    if(medio<menor)
    {
        int aux=medio;
        medio=menor;
        menor=aux;
    }
    cout<<mayor<<endl<<medio<<endl<<menor;
    return 0;
}
