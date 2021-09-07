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
    int x;
    cout<<"introduzca un valor:\n";
    cin>>x;
    if(x%2==0)
    {
        cout<<"par";
    }
    else
    {
        cout<<"impar";
    }
    return 0;
}
