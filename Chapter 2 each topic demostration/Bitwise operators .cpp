#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int y = 10;
    int z;

    // Bitwise OR
    z = x | y;
    cout << " Value of z is : " << z << endl ;

    // Bitwise AND
    z = x & y;
    cout << " Value of z is : " << z << endl ;

    // Bitwise XOR
    z = x ^ y;
    cout << " Value of z is : " << z << endl ;

    // Bitwise compliment
    z = ~x;
    cout << " Value of z is : " << z << endl ;

    // Bitwise left shift
    z = x << 2;
    cout << "Value of z is : " << z << endl ;

    // Bitwise right shift
    z = x >> 2;
    cout << " Value of z is : " << z << endl ;

    return 0;
}
