#include <iostream>
using namespace std;
class num
{
    static int count;

  public:
    num()
    {
        count++;
        cout << "This is when constructor is called for the object " << count << endl;
    }

    ~num()
    {
        cout << "This is when destructor is called for the object " << count << endl;
        count--;
    }
};

int num ::count;

int main()
{
    cout << "Beginning of main" << endl;
    cout << "Creating a object n1 " << endl;
    num n1;
    {
        cout << "Entering this block " << endl;
        cout << "Creating 2 more objects" << endl;
        num n2, n3;
        cout << "Exiting this block" << endl;
    }
    cout << "Back to main"<<endl;
    return 0;
}