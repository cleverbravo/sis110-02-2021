#include <iostream>
using namespace std;
int main()
{
    int i=0;
    aqui:
    cout<<i<<" ";
    i=i+1;
    if(i<10)
        goto aqui;
    return 0;
}
