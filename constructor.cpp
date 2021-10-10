#include <iostream>
using namespace std;

class sum
{
    int a, b;

  public:
    //constructor declaration
    sum(void);
    void display(void);
};

sum ::sum(void)
{
    cout << "Enter 2 numbers ";
    cin >> a >> b;
}

void sum ::display(void)
{
    cout << "The sum is " << a + b;
}
int main()
{
    sum c;
    c.display();
    return 0;
}