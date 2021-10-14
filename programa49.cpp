/**
Estructuras, son conjuntos de datos que pueden ser de diferentes tipos.
int v[5]; //todos los elementos son de tipo entero

*/
#include <iostream>
using namespace std;
struct Estudiante
{
    string nombre,apellido;
    int p1,p2,p3,promedio;
};

int main()
{
    Estudiante e;
    e.nombre="pepe";
    e.apellido="perez";
    e.promedio=51;
    cout<<"Datos del estudiante:\n";
    cout<<e.nombre<<" "<<e.apellido<<endl;
    cout<<"Promedio="<<e.promedio;
    return 0;
}
