#include<iostream>
using namespace std;

int main()
{
    cout << "Introduzca 3 números"<<endl;
    int a,b,c;
    cin>>a>>b>>c;
    if(c>b&&c>a&&b>a)
    {
        cout<<c<<"\n"<<b<<"\n" <<a<<"\n"<<endl;
    }
    else{
        if(b>a&&b>c&&c>a)
        {
            cout <<b <<"\n"<<c<<"\n"<<a<<"\n"<<endl;
        }
        else{
            if(a>b&&a>c&&b>c)
            {
                cout<<a <<"\n"<<b <<"\n"<<c<<"\n"<<endl;
            }
            else{
                if(c>b&&c>a&&a>b){
                    cout<<c <<"\n"<<a<<"\n"<<b<<"\n"<<endl;
                }
                else{
                    if(b>c&&b>a&&a>c){
                        cout<<b<<"\n"<<a<<"\n"<<c<<"\n"<<endl;
                    }
                    else{
                        if(a>c&&a>b&&c>b){
                            cout<<a<<"\n" <<c<<"\n" <<b<<"\n"<<endl;
                        }
                        else{
                            cout<<"Introduzca valores diferentes"<<endl;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
