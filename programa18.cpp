/*
Escribir un programa para calcular el valor de una
operacion aritmetica separada por espacios:
Input       Output
34 + 8      42
100 - 1     99
8 / 4       2
*/
#include <iostream>
using namespace std;
int main()
{
    double a,b,r;
    char op;
    cout<<"Introduzca una operacion aritmetica separada por espacios:\n";
    cout<<"(ej.4 + 4):";
    cin>>a>>op>>b;
    switch(op)
    {
        case '+':
            cout<<a+b;
            break;
        case '-':
            cout<<a-b;
            break;
        case '*':
            cout<<a*b;
            break;
        case '/':
            cout<<a/b;
            break;
    }
    return 0;
}
