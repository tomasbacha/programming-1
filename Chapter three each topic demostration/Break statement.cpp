#include <iostream>
using namespace std;

int main() {
   for (int i=2; i < 15; i++) {
      if (i==10) {
         break;
      }
      cout << i <<"    ";
   }
   return 0;
}
