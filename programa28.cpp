#include <iostream>
using namespace std;
int main()
{
    //Arrays
    //Colecciones de datos de un mismo tipo.

    int x[10];
    x[0]=9;
    x[1]=17;
    x[2]=24;
    x[3]=-8;
    x[4]=0;
    x[5]=55;
    x[6]=90;
    x[7]=14;
    x[8]=1;
    x[9]=-1;
    cout<<x[3]<<","<<x[6]<<","<<x[7]<<endl;
    for(int i=0;i<10;i++)
        cout<<x[i]<<",";
    return 0;
}
