#include<iostream>
using namespace std;

int fib(int a){
    if( a < 2)
    {
        return 1 ;
    }
    return ( fib(a-2) + fib(a-1));//Recursion
}

int main()
{
	int n ;
	cout<<"Enter a number "<<endl;
	cin>>n;
	cout<<endl<<"The term in fibonacci series at position "<<n<<" is "<<fib(n);
	return 0;
}