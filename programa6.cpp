/*
Tipos de datos en C++
*/
#include <iostream>
using namespace std;
int main()
{
    /*representacion en binario
    0 1 2 3 4 5 6 7 8 9 //decimal
    428 decimal
    0 1 //binario
    110101100 binario ~= 428 decimal
    1 bit 0-1
    1 Byte 8 bits max = 255 decimal
    (2^8)-1
    1 KiloByte = 1024 Bytes
        1 KibiByte = 1024 Bytes
    1 MegaByte = 1024 KiloBytes
    1 GigaByte = 1024 MegaBytes
    1 TeraByte = 1024 GigaBytes
    */
    int a;//integer,(2^32)-1=4,294,967,295
    cout<<"int ocupa:"<<sizeof(int)<<" Bytes\n";
    short b;//integer,(2^16)-1=65,535
    cout<<"short ocupa:"<<sizeof(short)<<" Bytes\n";
    a=2147483647;//min -2147483648
    cout<<"a="<<a<<endl;
    b=-32768;//max 32767
    cout<<"b="<<b<<endl;
    char c;//8 bits => 255  [-128,127]
    char16_t d;//16 bits
    char32_t e;//32 bits
    unsigned int f;//32 bits no existen negativos
    unsigned short g;//16 bits no existen negativos
    long long int h;//64 bits existen negativos
    unsigned long long int i;//64 bits sin negativos
    float j;//32 bits
    double k;//64 bits
    long double l;//96 bits
    j=4.5;
    cout<<"j="<<j<<endl;
    string n="sistemas";
    cout<<"n="<<n<<endl;
    char a1='s',a2='i',a3='s';
    cout<<"a1="<<a1<<endl;
    cout<<"a2="<<a2<<endl;
    cout<<"a3="<<a3<<endl;
    return 0;
}
