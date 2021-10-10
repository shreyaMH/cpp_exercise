#include<iostream>
using namespace std;

class Box{
    public:
    int l , b , h ;
    Box(){
        l = 0;
        b = 0 ;
        h = 0;
    }
    
    Box(int length , int breadth , int height ){
        l = length ;
        b = breadth ;
        h = height ;
    }
    
    Box(Box &B){
        l = B.l ;
        b = B.b;
        h = B.h;
    }
    
    
     int getLength(){
        return l ;
    }
    
    int getBreadth(){
        return b ;
    }
    
    
     int getHeight(){
        return h ;
    }
    
    long long calculateVolume(){
        return (l*b*h);
    }
};
int main()
{
	Box b1;
	Box b2(10, 2, 3);
int a = b2.getLength();
	int b = b2.getBreadth();
int c =	b2.getHeight();
int d =	b2.calculateVolume();
cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl;

Box b3(b2);
cout<<b3.getLength()<<endl;


	return 0;
}