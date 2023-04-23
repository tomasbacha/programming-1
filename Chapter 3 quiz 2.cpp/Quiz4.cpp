//while loop to calculate and print the average of numbers from 1 to 100:

#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    int count = 1;
    
    while (count <= 100) {
        sum += count;
        count++;
    }
    
    double average = static_cast<double>(sum) / 100;
    cout << "The average of numbers from 1 to 100 is: " << average << endl;
    
    return 0;
}
