/*
Escribir un programa para determinar si un numero
es par.
Input       Output
2           par
3           impar
4           par
5           impar
*/
#include <iostream>
using namespace std;
int main()
{
    string mensaje;
    int x;
    cout<<"introduzca un numero entero:";
    cin>>x;
    mensaje= x%2==0? "par":"impar";
    cout<<mensaje;
    return 0;
}
