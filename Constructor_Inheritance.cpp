#include <iostream>
using namespace std;

class Base1
{
    int data1;

  public:
    Base1(int a)
    {
        data1 = a;
        cout << "Base1 constructor is called" << endl;
    }

    void print1()
    {
        cout << "The value of Base1 " << data1 << endl;
    }
};

class Base2
{
    int data2;

  public:
    Base2(int a)
    {
        data2 = a;
        cout << "Base2 constructor is called" << endl;
    }

    void print2()
    {
        cout << "The value of Base2 " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int der1, der2;

  public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        der1 = c;
        der2 = d;
    }

    void printder()
    {
        cout << "The value of derived1 " << der1 << endl;
        cout << "The value of derived2 " << der2 << endl;
    }
};

int main()
{
    Derived d(1, 2, 3, 4);
    d.print1();
    d.print2();
    d.printder();
    return 0;
}