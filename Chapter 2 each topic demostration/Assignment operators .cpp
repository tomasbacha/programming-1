/*assignment operates */
#include <iostream>
using namespace std;

int main() {
    int a, b;

    // 15 is assigned to a
    a = 55;

    // 23 assigned to b
    b = 23;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "After a += b;" << endl;

    // assigning the sum of a and b to a
    a += b;  // a = a +b
    cout << "a = " << a << endl;

    return 0;
}
