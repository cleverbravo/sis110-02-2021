/**
Estructuras, son conjuntos de datos que pueden ser de diferentes tipos.
int v[5]; //todos los elementos son de tipo entero

*/
#include <iostream>
using namespace std;
struct Estudiante
{
    string nombre,apellido;
    int p[3];
    double promedio;
};

int main()
{
    Estudiante e;
    cout<<"Introduzca el nombre:\n";
    cin>>e.nombre;
    cout<<"Introduzca el apellido:\n";
    cin>>e.apellido;
    cout<<"Introduzca los 3 parciales del estudiante:\n";
    for(int i=0;i<3;i++)
        cin>>e.p[i];

    e.promedio=0;
    for(int i=0;i<3;i++)
            e.promedio+=e.p[i];
    e.promedio/=(double)3;

    cout<<"Promedio="<<e.promedio;
    return 0;
}
