#include<iostream>
using namespace std;
int main(){
	
	int matrix1[3][2]={{2,4},{8,4},{6,7}};
	int matrix2[2][3]={{5,3,8},{8,3,21}};
	cout<<"matrix x"<<endl;
	for(int i=0; i<3;i++){
		for(int j=0;j<2;j++){
			cout<<matrix1[i][j]<<"\t";
		}
		cout<<endl;
	}
		cout<<"matrix y"<<endl;
	for(int i=0; i<2;i++){
		for(int j=0;j<3;j++){
			cout<<matrix2[i][j]<<"\t";
		}
		cout<<endl;
	}
	int sum;
	cout<<"matrix multplication"<<endl;
	for(int i=0; i<3;i++){
		for(int j=0;j<3;j++){
			sum=0;
			for(int k=0;k<2;k++){//iterstion up to of columns in matrix y
			sum=sum+matrix1[i][k]*matrix2[i][k];
			}
			cout<<sum<<"\t";
			}
		
		cout<<endl;
	}
		return 0;
}
