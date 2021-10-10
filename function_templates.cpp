#include<iostream>
using namespace std;

template <class T1 , class T2>

T1 average(T1 a , T2 b) {
    T2 avg = (a+b)/2.0;
    return avg ;
}

int main()
{
	int avg ;
	avg = average(10.7 , 20.1);
	cout<<"The average is "<<avg<<endl;
	return 0;
}