#include<iostream>
using namespace std;
class complex 
{
    int a , b ;
    public :
    void setdata(int v1 , int v2){
        a = v1 ;
        b = v2 ;
    }
    
    void sum(complex o1 , complex o2){
        a = o1.a + o2.a ;
        b = o1.b + o2.b ;
       
    }
    void print(void){
         cout<<"Complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
    
};
int main()
{
	complex c1 , c2 , c3 ;
	c1.setdata(1 , 2);
	c1.print();
	
	c2.setdata(3 , 4);
	c2.print();
	
	c3.setdata(c1 , c2);
	c3.print();
	return 0;
}