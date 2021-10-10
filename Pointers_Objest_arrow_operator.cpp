#include <iostream>
using namespace std;
class Complex
{
    int real, imaginary;

  public:
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }

    void getdata()
    {
        cout << "The real value " << real << endl;
        cout << "The imaginary value " << imaginary << endl;
    }
};
int main()
{
    Complex c1;
    Complex *ptr = &c1;
    (*ptr).setdata(1, 2);
    (*ptr).getdata();
    //c1.getadata() = (*ptr).getadata() Both the ways are same

Complex* ptr1 = new Complex;
ptr1->setdata(10, 20);//This is same as    (*ptr). setdata
ptr1->getdata(); //This is same as    (*ptr).getadta()
    return 0;
}