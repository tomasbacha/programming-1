//multi way if-else
// Program to check whether an integer is positive, negative or zero

#include <iostream>
using namespace std;

int main() {

  int x;

  cout << "Enter an integer: ";
  cin >> x;

  if (x > 0) {
    cout << "You entered a positive integer: " << x << endl;
  } 
  else if (x < 0) {
    cout << "You entered a negative integer: " << x << endl;
  } 
  else {
    cout << "You entered 0." << endl;
  }

  return 0;
}
