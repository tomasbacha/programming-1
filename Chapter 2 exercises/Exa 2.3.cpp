/*write the program that calculate and display the circumference */
#include<iostream>
using namespace std;
double pi=3.14;
int main()
{
    double radius , cr;
    cout<<"enter the radius of a circle";
    cin>>radius ;
    cout<<"the circumstances of a circle is : ";
    cr=2*radius*pi;
    cout<<cr;
    
    return 0;
}
