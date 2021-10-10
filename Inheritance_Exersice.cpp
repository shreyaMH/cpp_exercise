#include <iostream>
#include <math.h>
using namespace std;

class SimpleCal
{
  public:
    float a, b;
    void set_num1(float x, float y)
    {
        a = x;
        b = y;
    }

    void display1()
    {
        cout << a << " + " << b << " is " << a + b << endl;
        cout << a << " - " << b << " is " << a - b << endl;
        cout << a << " * " << b << " is " << a * b << endl;
        cout << a << " / " << b << " is " << a / b << endl
             << endl;
    }
};

class ScientificCal
{
  public:
    float a;
    int b;
    void set_num2(float x, int y)
    {
        a = x;
        b = y;
    }

    void display2()
    {
        cout << a << " raised to " << b << " is " << pow(a, b) << endl;
        cout << "The squre root of " << a << " is " << sqrt(a) << endl
             << "The square root of " << b << " is " << sqrt(b) << endl;
        cout << "|" << a << " - " << b << "|"
             << " is " << abs(a - b) << endl;
        cout << "The value of log(" << a << ")"
             << " is " << log(a) << endl
             << "The value of log(" << b << ")"
             << " is " << log(b) << endl
             << endl;
    }
};

class HybridCal : public SimpleCal, public ScientificCal
{
  public:
    void display()
    {
        set_num1(15.0, 12.2);
        set_num2(12.2, 3);
        display1();
        display2();
    }
};

int main()
{
    cout << "This is simple calculator " << endl;
    SimpleCal c1;
    c1.set_num1(10.0, 20.0);
    c1.display1();

    cout << "This is scientific calculator " << endl;
    ScientificCal c2;
    c2.set_num2(20.0, 2);
    c2.display2();

    cout << "This is hybrid calculator " << endl;
    HybridCal c3;
    c3.display();
    return 0;
}