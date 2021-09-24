#include <iostream>
#include <string>
#include <algorithm>
/**escribir un programa para contar la cantidad de consonantes
en una palabra
Input       Output
sistemas    m=1,s=3,t=1
clever      c=1,l=1,r=1,v=1
*/
using namespace std;
/*char minuscula(char c)
{
    return tolower(c);
}*/
int main()
{
    string palabra;
    cout<<"Introduzca una palabra:\n";
    cin>>palabra;
    //transform(palabra.begin(),palabra.end(),palabra.begin(), minuscula);
    for(int i=0;i<palabra.size();i++)
        palabra[i]=tolower(palabra[i]);
    cout<<"la palabra es:"<<palabra<<endl;
    int alfa[30]={0};
    for(int i=0;i<palabra.size();i++)
        //cout<<(int)palabra[i]<<" :: "<<palabra[i]-97<<endl;
        if(isalpha(palabra[i]))
            alfa[palabra[i]-97]++;

    bool primeracoma=false;
    for(int i=0;i<30;i++)
    {
        char letra=97+i;
        if(alfa[i]>0 &&
           letra!='a' &&
           letra!='e' &&
           letra!='i' &&
           letra!='o' &&
           letra!='u')
            {
                cout<<(primeracoma?",":"")<<letra<<"="<<alfa[i];
                primeracoma=true;
            }

    }
    return 0;
}
