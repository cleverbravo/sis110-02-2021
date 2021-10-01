/**
Leer un vector de 5 numeros enteros, a cada elemento
multiplicarlo por 2
mostrar por pantalla el vector resultante

a cada elemento multiplicarlo por 3
mostrar por pantalla el vector resultante

a cada elemento sumar 4
mostrar por pantalla el vector resultante

Input       Output
1 2 3 4 5   2 4 6 8 10
            6 12 18 24 30
            10 16 22 28 34
*/
#include <iostream>
using namespace std;
void leerVector(int *x,int tam)
{
    for(int i=0;i<tam;i++)
        cin>>x[i];
}
void mostrarVector(int *x,int tam)
{
    for(int i=0;i<5;i++)
        //cout<<"v["<<i<<"]="<<x[i]<<endl;//<<"\t&="<<&x[i]<<endl;
        cout<<x[i]<<" ";
}
void modificar(int *x,int tam,int multiplicador)
{
    int *p=x;
    for(int i=0;i<5;i++)
    {
        *p=*p *multiplicador;
        //cout<<"p="<<*p<<"\t&="<<p<<endl;
        p++;
    }
}
void modificacion(int *x,int tam,void(*f)(int *pv,int a),int valor)
{
    int *p=x;
    for(int i=0;i<5;i++)
    {
        f(p,valor);
        p++;
    }
}

void multiplicar(int *p,int multiplicador)
{
    *p=*p * multiplicador;
}
void sumar(int *p,int adicionar)
{
    *p=*p + adicionar;
}
int main()
{
    int v[5];
    cout<<"Introduzca 5 elementos:\n";
    leerVector(v,5);

    cout<<endl;
    modificacion(v,5,multiplicar,2);
    mostrarVector(v,5);

    cout<<endl;
    modificacion(v,5,multiplicar,3);
    mostrarVector(v,5);

    cout<<endl;
    modificacion(v,5,sumar,4);
    mostrarVector(v,5);
    return 0;
}
