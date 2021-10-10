#include <iostream>
using namespace std;
class c2;

class c1
{
    int a;
    friend void exchange(c1 &, c2 &);

  public:
    void setdata(int n1)
    {
        a = n1;
    }

    void display(void)
    {
        cout << a << endl;
    }
};

class c2
{
    int b;
    friend void exchange(c1 &, c2 &);

  public:
    void setdata(int n2)
    {
        b = n2;
    }

    void display(void)
    {
        cout << b << endl;
    }
};

void exchange(c1 &x, c2 &y)
{
    int t = x.a;
    x.a = y.b;
    y.b = t;
}
int main()
{
    c1 oc1;
    oc1.setdata(12);

    c2 oc2;
    oc2.setdata(24);

    cout << "The values of classes c1 and c2 before exchange ";
    oc1.display();
    oc2.display();

    exchange(oc1, oc2);
    cout << "The values of classes c1 and c2 after exchange ";
    oc1.display();
    oc2.display();
    return 0;
}