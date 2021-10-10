#include <iostream>
using namespace std;

class bankdeposit
{
    int principal;
    int year;
    float rate;
    float returnvalue;

  public:
    bankdeposit() {}
    bankdeposit(int p, int y, float r);

    bankdeposit(int p, int y, int r);

    void show();
};

bankdeposit ::bankdeposit(int p, int y, float r)
{
    principal = p;
    year = y;
    rate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
      returnvalue = returnvalue * (1 + rate);
         
    }
}

bankdeposit ::bankdeposit(int p, int y, int r)
{
    principal = p;
    year = y;
    rate = float(r) / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + rate);
         //returnvalue = (p*y*rate)/100; -----> It only works when the rate of interest is integer(4%etc...)
    }
}

void bankdeposit ::show()
{
    cout << "The principal amount is " << principal << '.' << "After " << year << " years the principal amount will be " << returnvalue << endl;
}

int main()
{
    bankdeposit d1, d2;
    int p, y;
    float r;
    float R;

    cout << "Enter principal amount , year and rate of interest  " << endl;
    cin >> p >> y >> r;
    d1 = bankdeposit(p, y, r);
    d1.show();

    cout << "Enter principal amount , year and rate of interest  " << endl;
    cin >> p >> y >> R;
    d1.show();
    d2 = bankdeposit(p, y, R);
    return 0;
}