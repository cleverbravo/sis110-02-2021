#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    /*char x='A';
    cout<<x<<endl;
    cout<<(char)tolower(x)<<endl;*/
    cout<<"Introduzca un nombre completo:\n";
    string nombre;
    getline(cin,nombre);
    int a,e,i,o,u;
    a=e=i=o=u=0;
    for(int i=0;i<nombre.size();i++)
        nombre[i]=tolower(nombre[i]);
    for(int i=0;i<nombre.size();i++)
    {
        switch(nombre[i])
        {
            case 'a':a++;break;
            case 'e':e++;break;
            case 'i':i++;break;
            case 'o':o++;break;
            case 'u':u++;break;
        }
    }
    cout<<"existen "<<a<<" vocales a\n";
    cout<<"existen "<<e<<" vocales e\n";
    cout<<"existen "<<i<<" vocales i\n";
    cout<<"existen "<<o<<" vocales o\n";
    cout<<"existen "<<u<<" vocales u\n";
    return 0;
}
