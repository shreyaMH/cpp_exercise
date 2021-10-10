#include <iostream>
using namespace std;

long int fact(long int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int main()
{
   long int a;
    cout << "Enter an integer : " << endl;
    cin >> a;
    cout << "The factorial of " << a << " is " << fact(a) << endl;
    return 0;
}