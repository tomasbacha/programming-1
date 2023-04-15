#include<iostream>
using namespace std;
int main()
{
    int arr[5], i, j;
    cout<<"Enter the Size: ";
    cin>>i;
    
    for(j=0; j<i; j++)
        cin>>arr[j];
    cout<<"Array with Index\t it is Value"<<endl;
    for(j=0; j<i; j++)
        cout<<"arr["<<j<<"]"<<"\t\t\t\t"<<arr[j]<<endl;
    
    return 0;
}
