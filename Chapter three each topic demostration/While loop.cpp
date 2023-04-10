//while loop
/*Sum of first N Natural Numbers*/
#include <iostream>  
using namespace std;
 
int main() {  
   int x;
   int sum = 0;
 cout<<"enter one numbers"<<endl;
 cin>>x;
   int i = 1;
   while (i<=x) {
      sum += i;
      i++;
   }
 
   cout << sum;
   return 0;
}
