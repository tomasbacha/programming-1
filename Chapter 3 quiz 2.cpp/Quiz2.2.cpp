//displays numbers between 0-100 that are divisible by 2, 3, and 5 without remainder:

#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i <= 100; i++) {
        if (i % 2 == 0 && i % 3 == 0 && i % 5 == 0) {
            cout << i << endl;
        }
    }
    return 0;
}
