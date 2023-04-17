#include<iostream>
using namespace std;
int main()
{
	int no;
	cout<<"Enter any number\n";
	cin>>no;
	switch(no)
	{		
		case 1:
			cout<<"Monday\n";
			break;
		case 2:
			cout<<"Tuesday\n";
			break;	
		case 3:
			cout<<"Wednesday\n";
			break;
		case 4:
			cout<<"Thrusday\n";
			break;
		case 5:
			cout<<"Friday\n";
			break;
		case 6:
			cout<<"Saturday\n";
			break;
		case 7:
			cout<<"Sunday\n";
			break;
		default:
			cout<<"wrong number\n";
	}
	return 0;
}
