#include<iostream>
using namespace std;

int main(){
int a[50][50];
int r,c;

cout<<"Enter number of rows of the matrix ";
cin>>r;
cout<<"Enter number of columns of the matrix ";
cin>>c;

for (int i = 0; i < r; i++)
{
  for (int j = 0; j < c; j++)
  {
    cout<<"Enter "<<i<<"x"<<j<<" ";
    cin>>a[i][j];
    
  }
  
}


cout<<"Before transpose "<<endl;
for (int i = 0; i < r; i++)
{
  for (int j = 0; j < c; j++)
  {
    
    cout<<a[i][j]<<"   ";
    
  }
  cout<<endl;
}

cout<<"After transpose "<<endl;
for (int j = 0; j < c; j++)
{
  for (int i = 0; i < r; i++)
  {
    
    cout<<a[i][j]<<" ";
    
  }
  cout<<endl;
}





return 0;
}