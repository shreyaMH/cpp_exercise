#include <iostream>
using namespace std;

class Base1
{
  protected:
    int a1;

  public:
    void set_data1(int a)
    {
        a1 = a;
    }
};

class Base2
{
  protected:
    int a2;

  public:
    void set_data2(int b)
    {
        a2 = b;
    }
};

//Multiple Inheritance
class derived : public Base1, public Base2
{
  public:
    void show()
    {
        cout << "The value of Base 1 is " << a1 << endl;
        cout << "The value of Base 2 is " << a2 << endl;
        cout << "The sum is " << a1 + a2 << endl;
    }
};
int main()
{
    derived d;
    d.set_data1(100);
    d.set_data2(200);
    d.show();
    return 0;
}