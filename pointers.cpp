#include<iostream>

using namespace std;

int main()
{
	int a =4 ;
	int* b= &a;
	// &  ------ adress of operator
	// * value at or dereference operator
	cout<<a<<endl;
	cout<<&a<<endl;
	cout<<b<<endl;
	cout<<*b<<endl;
	
	//Pointer to pointer
	int** c= &b;
	 cout<<"The adress of b is "<<&b<<endl;
	 cout<<"The adress of b is "<<c<<endl;
	 cout<<**c<<endl;
	 
	return 0;
}