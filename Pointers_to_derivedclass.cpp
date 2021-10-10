#include <iostream>
using namespace std;
class Base
{
  public:
    int var_base;
    void display()
    {
        cout << "The value of base class var_base " << var_base << endl;
    }
};

class Derived : public Base
{
  public:
    int var_derived;
    void display()
    {
        cout << "The value of base class var_base " << var_base << endl;
        cout << "The value of derived class var_derived " << var_derived << endl;
    }
};
int main()
{
    Base *base_obj_ptr;
    Base obj_base;

    Derived derived_obj;

    base_obj_ptr = &derived_obj;
    base_obj_ptr->var_base = 90;
    base_obj_ptr->display(); // This will display base clas function

    Derived *derived_obj_ptr;
    derived_obj_ptr = &derived_obj;
    derived_obj_ptr->var_base = 100;
    derived_obj_ptr->var_derived = 111;

    derived_obj_ptr->display();
    return 0;
}