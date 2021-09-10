/**
escribir un programa para mostrar los numeros pares
por pantalla desde 2 hasta 100
*/
#include <iostream>
using namespace std;
int main()
{
    /*for(int i=2;i<=100;i+=2)
    {
        cout<<i<<" ";
    }*/
    int i=0;
    while(i<=100)
    {
        if(i%2==0)
            cout<<i<<" ";
        i++;
    }
    /*while(i<=100)
    {
        cout<<i<<" ";
        i+=2;//i=i+2;
    }*/
    /*while(i++<100)
    {
        cout<<++i<<" ";
    }*/
    return 0;
}
