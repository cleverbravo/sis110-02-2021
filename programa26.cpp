/**
escribir un programa para mostrar los 10 primeros elementos
de la serie de fibonacci.
Input       Output
            1,1,2,3,5,8,13,21,34,55
            a b c
              a b c
                a b c
                  a b c
*/
#include <iostream>
using namespace std;
int main()
{
    int a=1,b=1,c;
    cout<<a;
    for(int i=1;i<10;i++)
    {
        cout<<","<<b;
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
