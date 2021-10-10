#include <iostream>
using namespace std;
//Forward declaration
class complex;

class calculator
{
  public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumrealcomplex(complex, complex); int sumcompcomplex(complex , complex);
};

class complex
{
    int a, b;
    /*//Individully declaring function as friend

 //   friend int calculator ::sumrealcomplex(complex, complex);
  //   friend int calculator ::sumcompcomplex(complex, complex);
*/

//Declaring whole class as friend
friend calculator ;
  public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void print(void)
    {
        cout << "Complex number is " << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int calculator ::sumcompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;
    c1.setdata(1, 2);
    c2.setdata(4, 5);

    calculator c , s;
    int res = s.sumrealcomplex(c1, c2);
    cout << "The sum of real pasrt is "<<res<<endl;
    
    int resc = c.sumcompcomplex(c1 , c2);
    cout<<"The sum of complex part is "<<resc;
    return 0;
}