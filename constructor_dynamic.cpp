#include <iostream>
using namespace std;
class num
{
    int a;

  public:
    0num(){ }
    
    num(int b)
    {
        a = b;
    }

    void display()
    {
        cout << "The number is " << a;
    }
    
};


int main()
{
    num x ;
    
    int y ;
    cin>>y;
   x = y;
    x.display();

    return 0;
}