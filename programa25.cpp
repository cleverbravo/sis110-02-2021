/**
escribir un programa para leer un numero entero y determinar
si es primo o no.
Input       Output
2           primo
3           primo
4           no primo
5           primo
6           no primo
7           primo
8           no primo
9           no primo
10          no primo
*/
#include <iostream>
using namespace std;
int main()
{
    int x,d;
    cout<<"introduzca un numero:\n";
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        int r=x%i;
        //cout<<"dividiendo entre "<<i<<",residuo="<<r<<endl;
        d+= r==0? 1:0;
        /*if(r==0)
            d+=1;//d=d+1;
        else
            d+=0;//d=d+0;*/
    }
    //cout<<x<<" tiene "<<d<<" divisores."<<endl;
    if(d==2)
        cout<<"primo";
    else
        cout<<"no primo";
    return 0;
}
