/*Write the program to accept any character from keybroad and display whether it is vowel or not */
#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Enter a character:"<<endl;
	cin>>ch;
	switch(ch){
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
	cout<<ch<<endl<<"is the vowel";
	break;
	default:
	cout<<ch<<endl<<"it is not vowel";
	}
return 0;
}	
