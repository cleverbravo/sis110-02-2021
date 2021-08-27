/*
Se desea cortar una pizza (con los cortes
característicos) en n partes iguales, cuantos
trazos se debe realizar?
*/
#include <iostream>
using namespace std;
int main()
{//1.Inicio
    int n,c;
    cout<<"introduzca un numero entero:";
    cin>>n;//2.Leer n
    if(n%2==0)//3.Si n es par
        c=n/2;//3.1. c=n/2
    if(n%2==1)//4.Si n es impar
        c=n;//4.1. c=n
    if(n==1)//5.Si n es igual a 1
        c=0;//5.1. c=0
    cout<<"los cortes que se deben hacer a la pizza son:";
    cout<<c;//6.Mostrar c
    return 0;
}//7.Fin
