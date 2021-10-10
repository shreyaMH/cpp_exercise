#include<iostream>
using namespace std;

int main()
{
	int n , a[1000] , i ,j ;
	cout<<"Enter the size of an array ";
	cin>>n;
	cout<<"Enter array elements "<<endl;
	for(i=1; i <=n ; i++)
	{
	    cin>>a[i];
	  }
	cout<<"The reverse order of an array elements :"<<endl;
	for(j=n ; j>=1 ; j--)
	{
	    cout<<a[j]<<"\t";
	}
	return 0;
}