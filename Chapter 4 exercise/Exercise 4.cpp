/*Write a C++ program that accepts three numbers by using One Dimensional 
Array and then displays the accepted numbers to the screen.
*/
#include <iostream>
using namespace std;

int main() {
   int arr[3];

   // Accept three numbers from the user
   cout << "Enter three numbers:\n ";
   for (int i = 0; i < 3; i++) {
      cout<<"Enter a ["<<i<<"]"<<endl;
      cin >> arr[i];
   }

   // Display the accepted numbers to the screen
   cout << "\nThe accepted numbers are: ";
   for (int i = 0; i < 3; i++) {
      cout << arr[i] << "\t ";
   }
   cout << endl;

   return 0;
}
