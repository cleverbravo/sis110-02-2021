/**
escribir un programa para leer 5 valores enteros por
teclado y mostrar por pantalla el promedio.
Input          Output
1 2 3 4 5      promedio=3
*/
#include <iostream>
using namespace std;
void leerVector(int *x,int tam)
{
    cout<<"&x="<<x<<"\t&x[0]="<<&x[0]<<"\t&x[1]="<<&x[1]<<"\t&x[2]="<<&x[2]<<endl;
    for(int i=0;i<tam;i++)
        cin>>x[i];
}
double calcularPromedio(int *x,int tam)
{
    double sumaTotal=0;
    for(int i=0;i<tam;i++)
        sumaTotal+=x[i];
    double promedio=sumaTotal/tam;
    return promedio;
}
int main()
{
    int v[5];
    cout<<"&v="<<v<<"\t&v[0]="<<&v[0]<<"\t&v[1]="<<&v[1]<<"\t&v[2]="<<&v[2]<<"\t&v[3]="<<&v[3]<<"\t&v[4]="<<&v[4]<<endl;
    cout<<"Introduzca 5 numeros enteros:\n";
    leerVector(v,5);
    double promedio=calcularPromedio(v,5);
    cout<<"promedio="<<promedio<<endl;
    return 0;
}
