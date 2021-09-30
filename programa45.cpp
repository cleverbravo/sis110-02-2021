/**
escribir un programa para leer 5 valores enteros por
teclado y mostrar por pantalla el promedio.
Input          Output
1 2 3 4 5      promedio=3
*/
#include <iostream>
#include <vector>
using namespace std;
void leerVector(vector<int> &v,int tam)
{
    int x;
    for(int i=0;i<tam;i++)
    {
        cin>>x;
        v.push_back(x);
    }
}
double calcularPromedio(vector<int> x)
{
    double sumaTotal=0;
    for(int i=0;i<x.size();i++)
        sumaTotal+=x[i];
    double promedio=sumaTotal/x.size();
    return promedio;
}
int main()
{
    vector<int> v;
    cout<<"Introduzca 5 numeros enteros:\n";
    leerVector(v,5);
    double promedio=calcularPromedio(v);
    cout<<"promedio="<<promedio<<endl;
    return 0;
}
