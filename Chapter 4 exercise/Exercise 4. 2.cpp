/*Write the code required to declare an array of 10 Integers called
intArray .Then initialize the array so that each element contains the
value of its index.Hint: Use a loop*/
#include <iostream>
using namespace std;

int main() {
   int intArray[10];

   
   for (int i = 0; i < 10; i++) {
      intArray[i] = i;
   }

   
   for (int i = 0; i < 10; i++) {
      cout << "intArray[" << i << "] = " << intArray[i] << endl;
   }

   return 0;
}
