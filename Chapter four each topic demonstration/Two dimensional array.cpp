#include<iostream>

using namespace std;
int main()
{
int m,n, x[10][10];
  
  cout<<"Enter the number of row"<<endl;
  cin>>m;
  cout<<"Enter the number of column"<<endl;
  cin>>n;
  cout<<"Enter the elements"<<endl;
  for(int i=0; i<m; i++)
  {
    for(int j=0; j<n; j++)
    {
    	cin>>x[i][j];
    }
  }
  for(int i=0; i<m; i++)
  for(int j=0; j<n; j++)
  {
  cout<<"x["<<i<<"]["<<j<<"]=";
  cout<<x[i][j]<<endl;
  }
    return 0;
	
}
