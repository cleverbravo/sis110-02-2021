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
    void leerDatos()
    {
        cout<<"Introduzca el nombre:\n";
        cin>>nombre;
        cout<<"Introduzca el apellido:\n";
        cin>>apellido;
        cout<<"Introduzca los 3 parciales del estudiante:\n";
        for(int i=0;i<3;i++)
            cin>>p[i];
    }
    void calcularPromedio()
    {
        promedio=0;
        for(int i=0;i<3;i++)
            promedio+=p[i];
        promedio/=(double)3;
    }
};

int main()
{
    Estudiante e,e2;
    e.leerDatos();
    e.calcularPromedio();
    e2.leerDatos();
    e2.calcularPromedio();
    cout<<"Promedio de "<<e.nombre<<" ="<<e.promedio<<endl;
    cout<<"Promedio de "<<e2.nombre<<"="<<e2.promedio<<endl;
    return 0;
}
