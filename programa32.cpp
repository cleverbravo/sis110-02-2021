/**
Leer los las ganancias o perdidas de una empresa
en cada trimestre, durante 5 años. Mostrar
por pantalla el trimiste y año de mayor ganancia,
y el trimestre y año de mayor perdida.
Input               Output
4  8 -2  1          Max=>A:1, T:2, valor=8
0  1  4  5          Min=>A:1, T:3, valor=-2
8  7 -1  2
-1 0  0 -1
6  5  4  2

4  2 -2  1          Max=>A:5, T:3, valor=9
0  1  4  5          Min=>A:3, T:3, valor=-8
8  7 -8  2
-1 0  0 -1
6  4  9  2
*/
#include <iostream>
using namespace std;
int main()
{
    int m[5][4];
    cout<<"Introduzca las ganancias/perdidas de cada trimestre:\n";
    for(int i=0;i<5;i++)
        for(int j=0;j<4;j++)
            cin>>m[i][j];
    int mayor,fmayor,cmayor,menor,fmenor,cmenor;
    mayor=menor=m[0][0];
    fmayor=cmayor=fmenor=cmenor=0;
    for(int i=0;i<5;i++)
        for(int j=0;j<4;j++)
        {
            if(mayor<m[i][j])
            {
                fmayor=i+1;
                cmayor=j+1;
                mayor=m[i][j];
            }
            if(menor>m[i][j])
            {
                fmenor=i+1;
                cmenor=j+1;
                menor=m[i][j];
            }
        }
    //cout<<"mayor="<<mayor<<" menor="<<menor<<endl;
    cout<<"Max=>A:"<<fmayor<<", T:"<<cmayor<<", valor="<<mayor<<endl;
    cout<<"Mim=>A:"<<fmenor<<", T:"<<cmenor<<", valor="<<menor;
    return 0;
}
