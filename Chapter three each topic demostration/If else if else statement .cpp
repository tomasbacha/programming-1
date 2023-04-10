//multi way
#include <iostream>

using namespace std;
int main()

{

 int mark;

 cout<<"Enter student's mark: ";
 cin>>mark;

 

 if (mark < 40)

 cout<<"Student grade = F";

 else if (mark < 50)

 cout<<"Student grade = E";

 else if (mark < 60)

 cout<<"Student grade = D";

 else if (mark < 70)

 cout<<"Student grade = C";

 else if (mark < 80)

 cout<<"Student grade = B";

 else

 cout<<"Student grade = A";

 cout<<"\n";

 system("pause");

return 0;

}

 

