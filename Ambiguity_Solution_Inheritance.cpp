#include <iostream>
using namespace std;

class Base1
{
  public:
    void greet()
    {
        cout << "How are you? " << endl;
    }
};

class Base2
{
  public:
    void greet()
    {
        cout << "ಹೇಗಿದ್ದೀರಾ? " << endl;
    }
};

class derived : public Base1, public Base2
{
    int a;

  public:
    //Ambiguity Solution
    void greet()
    {
        Base2 ::greet();
    }
};

class A
{
  public:
    void say()
    {
        cout << "Hello world !" << endl;
    }
};
class B : public A
{
  public:
    void say()
    {
        cout << "Hello  !" << endl;
    }
};
int main()
{
    Base1 a;
    Base2 b;
    a.greet();
    b.greet();

    derived d;
    d.greet();

    B b1;
    b1.say();
    return 0;
}