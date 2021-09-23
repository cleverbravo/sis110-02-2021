#include <iostream>
using namespace std;
int main()
{
    string nombre;
    cout<<"Introduzca un nombre:\n";
    //cin>>nombre;
    getline(cin,nombre);
    cout<<"El nombre es:"<<nombre;
    return 0;
}
