#include<iostream>
#include<cmath>
using namespace std;

void update(int *a , int *b){
    int x , y;
    x=*a;
    y=*b;
    *a=x+y;
    *b=abs(x-y);
}
int main()
{
	int c , d ;
	cout<<"Enter 2 numbers "<<endl;
	cin>>c>>d;
	update(&c , &d);
	cout<<"The sum is " <<c<<endl<<"|a-b| is "<<d;
	return 0;
}