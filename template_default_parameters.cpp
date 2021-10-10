#include<iostream>
using namespace std;

template <class T1 = int , class T2 = float>

class num{
    public:
    T1 x ;
    T2 y;
    num(T1 a , T2 b){
        x = a ;
        y = b ;
    }
    
    void display(){
        cout<<"The value of x is "<<x<<endl;
        cout<<"The value of y is "<<y<<endl;
    }
};
int main()
{
	num  <>n(22 , 1.1);
	n.display();
	
	
	num <int , char> n1(15 , 'abc');
	n1.display();
	return 0;
}