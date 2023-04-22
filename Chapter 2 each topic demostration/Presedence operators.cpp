/*precedence of operators*/
#include <iostream>
using namespace std;

int main()
{
    int x = 12;
    int y = 5;
    int z = 4;
    int result;
 
    result = y + x / z;
    cout << "Result is: " << result << endl;
    result = x - y + z;
    cout<<"Results is:"<<result<<endl;
    result= x-y/(x*z);
    cout<<"Results is:"<<result<<endl;
    result = (x + z) / z;
    cout << "Result is: " << result << endl;
 
    result = x - (y * z);
    cout << "Result is: " << result << endl;
 
    return 0;
}
