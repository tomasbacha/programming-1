/*Explicit conversion*/
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    float b = 3.14;
    double c = 5.67;

    // Explicit conversion
    int d = int(b);
    float e = float(c);
    double f = double(a);

    cout<<"d="<<d<<endl;
    cout<<"e="<<e<<endl;
    cout<<"f="<<f<<endl;
    
    return 0;
}
