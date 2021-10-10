#include <iostream>
using namespace std;
class number{
    int a ;
    public :
        number(){}
        number(int b){
            a = b ;
        }
        
        //Copy constructor
        number(number &obj ){
            cout<<"The copy constructor invoked "<<endl;
            a = obj.a;
        }
        
        void display(){
            cout<<"The number is "<<a<<endl;
        }
};

int main()
{
    number x = 1 , y = 2 , z = 3;
    x.display();
    
    number z1(x);// Copy constructor invoked
    z1.display();
    
    z1 = z ; //Copy constructor not invoked
    z1.display();
    
    number z2 = y; //Copy constructor invoked
    z2.display();
    return 0;
}

// When no copy constructor is found , compiler supplies its own copy constructor