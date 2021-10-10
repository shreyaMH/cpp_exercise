#include<iostream>
 using namespace std;
 
 int main(){
 	int a = 5  ;
 	int & b = a ;
 //	b=10; If we change the value of b then the value of a will also be changed
 	cout<<a<<endl;
 	cout<<b;
 }