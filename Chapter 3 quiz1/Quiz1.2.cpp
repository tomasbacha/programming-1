/*write a program that gives grade by using if else */ 
#include<iostream>
using namespace std;
int main(){
	int grade;
	cout<<"Enter the grade"<<endl;
	cin>>grade;
	if(grade >=90)
	cout<<"The grade is A+";
else if (grade>=85)
cout<<"The grade is A";
else if (grade>=80)
cout<<"The grade is A-";
else if(grade>=75)
cout<<"The grade is B+";
else if(grade>=70)
cout<<"The grade is B";
else if(grade>=65)
cout<<"The grade is B-";
else if(grade>=60)
cout<<"The grade is C+";
else if(grade>=50)
cout<<"The grade is C";
else {
cout<<"The grade is F";
}
return 0;
}
