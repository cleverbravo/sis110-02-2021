#include <iostream>
#include <vector>
using namespace std;
int main()
{
    /*int n;
    cin>>n;
    int v[n];*/
    vector<int> v;//dinamico
    cout<<"size="<<v.size()<<endl;
    v.push_back(5);
    v.push_back(-9);
    v.push_back(-1);
    v.push_back(100);
    v.push_back(3);
    cout<<"size="<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        cout<<"v["<<i<<"]="<<v[i]<<endl;

    cout<<endl<<"pop_back\n";
    v.pop_back();
    for(int i=0;i<v.size();i++)
        cout<<"v["<<i<<"]="<<v[i]<<endl;

    cout<<endl<<"pop_back\n";
    v.pop_back();
    for(int i=0;i<v.size();i++)
        cout<<"v["<<i<<"]="<<v[i]<<endl;
    return 0;
}
