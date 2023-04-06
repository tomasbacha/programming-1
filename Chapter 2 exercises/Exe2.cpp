#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    int sum, diff,mul,div;
    cout<<"Enter two numbers"<<endl;
    cin>>x>>y;
    sum =x+y;
    diff=x-y;
    mul=x*y;
    div=x/y;
    cout<<sum<<endl<<diff<<endl<<mul<<endl<<div<<endl;
    cout<<"the smallest number is"<<endl<<x<<endl;
    cout<<"the greatest number is"<<endl<<y<<endl;
    return 0;
}
