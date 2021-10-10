#include<iostream>
using namespace std;
class A{
    int a ;
    int b ;
    public:
    A(int i , int j) : a(i) , b(j){
        cout<<"The value of a is "<<a<<endl;
         cout<<"The value of b is "<<b<<endl;
    }
};

int main()
{
	A c (1 , 2);
	return 0;
}