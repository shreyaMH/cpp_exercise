#include<iostream>
using namespace std;

/*void swap(int a , int b)
{
    int temp = a;
    a = b; ------------> This will not work
    b = temp ;
}*/
void swapPointer(int * a , int * b)
{
    int temp = *a;
    *a = *b;
    *b = temp ;
}

int main()
{
	int x=10 , y=20 ;
	cout<<" x and y before swap: "<<x  << " and " <<y <<endl;
//	swap(x , y); -----> This will not work
//	cout<<" x and y after swap: "<< x <<" and "<< y<<endl;
swapPointer(&x , &y);
cout<<" x and y after swap: "<< x <<" and "<< y<<endl;
	return 0;
}