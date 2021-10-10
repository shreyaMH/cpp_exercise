#include<iostream>

using namespace std;
int main()
{
	int a[4]={1 , 2 , 3 ,4};
	int* p = a;
	cout<< "The adress of a[0] : "<< p<<endl;
	cout<< "The adress of a[1] : "<<(p+1)<<endl;
	cout<< "The adress of a[2] : "<< (p+2)<<endl;
	cout<< "The adress of a[3] : "<< (p+3)<<endl;
	
	
	
	cout<< "The value of a[0] : "<<* p<<endl;
	cout<< "The value of a[1] : "<<*(p+1)<<endl;
	cout<< "The value of a[2] : "<<* (p+2)<<endl;
	cout<< "The value of a[3] : "<<* (p+3)<<endl;
	return 0;
}