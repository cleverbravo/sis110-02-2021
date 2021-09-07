#include <iostream>
using namespace std;
int main()
{
    int x;
    x= 1>10 ? 5:3;
    cout<<"x="<<x<<endl;
    if(1>10)
    {
        x=5;
    }
    else
    {
        x=3;
    }
    cout<<"x="<<x;
    return 0;
}
