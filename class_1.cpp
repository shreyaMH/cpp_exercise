#include <iostream>
using namespace std;

class Student
{
  private:
    int a, b;

  public:
    int c, d;
    void setdata(int a1, int b1);
    void getdata();
};

void Student ::getdata()
{
    cout << "The value of a is " << a << endl;
    cout << "The value of b is " << b << endl;
    cout << "The value of c is " << c << endl;
    cout << "The value of d is " << d << endl;
}

void Student ::setdata(int a1, int b1)
{
    a = a1;
    b = b1;
}
int main()
{
    Student shreya;
    shreya.c = 500;
    shreya.d = 400;
    shreya.setdata(200, 300);
    shreya.getdata();
    return 0;
}