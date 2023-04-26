/*Write a C++ program that find the sum of the following
numbers by using Array and there by calculates their
average, it should display the sum and average on two lines.
{4, 3, 5, 2, 1}*/
#include <iostream>
using namespace std;

int main()
{
    int numbers[5] = {4, 3, 5, 2, 1};
    int sum = 0;
    
    
    for (int i = 0; i < 5; i++)
    {
        sum += numbers[i];
    }
    
    double average = sum / 5;
    
    cout << "The sum of the numbers is: " << sum << endl;
    cout << "The average of the numbers is: " << average << endl;
    
    return 0;
}
