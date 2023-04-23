#include <iostream>

using namespace std;

int main() {
    int x= 10;
    int *ptr = &x;

    cout << "Value of x is: " << x<< endl;
    cout << "Address of x is: " << &x << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;
    
    *ptr = 20;
    
    cout << "New value of x is " << x<< endl;
    
    return 0;
}
