#include<iostream>
using namespace std;

void func(int a){
    cout<<"I am fun() "<<a<<endl;
}

template <class T>
void func(T a){
    cout<<"I am templatised fun() "<<a<<endl;
}


template <class T>
void fun1(T b){
    cout<<"I am templatised fun1() "<<b<<endl;
}

int main()
{
	func(100); //Exact match takes the highest priority in function overloading

fun1(8.8);
	return 0;
}