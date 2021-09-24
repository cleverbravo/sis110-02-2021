#include <iostream>
using namespace std;

int funcion()
{
	cout<<"hola desde la funcion"<<endl;
	return 10;
}

int main()
{
    cout<<"llamaremos a la funcion"<<endl;
	int x=funcion();
    cout<<"x="<<x;
    return 0;
}
