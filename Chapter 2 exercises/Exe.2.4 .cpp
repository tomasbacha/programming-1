//solve quadratic equation
#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int a,b,c,d;
    float r1,r2;
    cout<<"Enter the cofficients"<<endl;
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if (d==0) {
        cout<<"The roots are equal"<<endl;
        r1=r2=-b/(2.0*a);
        cout<<"The roots are r1=r2="<<r1<<endl;
    }
    else if (d>0) {
        cout<<"The roots are real and unequal"<<endl;
        r1=(-b+sqrt(d))/(2.0*a);
        r2=(-b-sqrt(d))/(2.0*a);
        cout<<"r1="<<r1<<"r2="<<r2;
    }
    else {
        cout<<"The roots are real and imaginery"<<endl;
        r1=(-b+sqrt(abs(d))/2.0*a);
        r2=(-b-sqrt(abs(d))/2.0*a);
        cout<<"r1="<<r1<<"i and r2"<<r2<<"i";
    }
    return 0;
}
