#include <iostream>
using namespace std;
int main()
{
    cout<<'A'<<endl;
    char c=65;
    cout<<c<<endl;
    //char nombre[10];
    string nombre;
    cin>>nombre;
    cout<<"nombre="<<nombre<<endl;
    for(int i=0;i<nombre.size();i++)
        cout<<"nombre["<<i<<"]="<<nombre[i]<<endl;
    return 0;
}

