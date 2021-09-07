/*
leer una letra por teclado, y mostrar por pantalla
si la letra introducida es una vocal o es consonante.
Input       Output
a           vocal
b           consonante
e           vocal
z           consonante
@           error
*/
#include <iostream>
using namespace std;
int main()
{
    char c;//letra
    cout<<"introduzca una letra del alfabeto:\n";
    cin>>c;
    if(isalpha(c))
        switch(c)
        {
        case 'a':
            cout<<"vocal";
            break;
        case 'e':
            cout<<"vocal";
            break;
        case 'i':
            cout<<"vocal";
            break;
        case 'o':
            cout<<"vocal";
            break;
        case 'u':
            cout<<"vocal";
            break;
        default:
            cout<<"consonante";
        }
    else
    {
        cout<<"error";
    }
    return 0;
}
