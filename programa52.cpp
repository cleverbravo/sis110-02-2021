/**
Escribir un programa para registrar los parciales de un estudiante
y mostrar por pantalla el promedio de cada estudiante.
*/
#include <iostream>
using namespace std;
struct Estudiante
{
    string nombre,apellido;
    int p[3];
    double promedio;
};
void calcularPromedio(Estudiante &x)
{
    x.promedio=0;
    for(int i=0;i<3;i++)
        x.promedio+=x.p[i];
    x.promedio/=(double)3;
}
void leerDatos(Estudiante &x)
{
    cout<<"Introduzca el nombre:\n";
    cin>>x.nombre;
    cout<<"Introduzca el apellido:\n";
    cin>>x.apellido;
    cout<<"Introduzca los 3 parciales del estudiante:\n";
    for(int i=0;i<3;i++)
        cin>>x.p[i];
}

int main()
{
    Estudiante e,e2;
    leerDatos(e);
    calcularPromedio(e);
    leerDatos(e2);
    calcularPromedio(e2);
    cout<<"Promedio de "<<e.nombre<<" ="<<e.promedio<<endl;
    cout<<"Promedio de "<<e2.nombre<<"="<<e2.promedio<<endl;
    return 0;
}
