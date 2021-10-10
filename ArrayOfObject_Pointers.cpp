#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

  public:
    void setdata(int x, float y)
    {
        id = x;
        price = y;
    }

    void getdata()
    {
        cout << "The code is " << id << endl;
        cout << "The price is " << price << endl;
    }
};
int main()
{
    int size;
    cout << "Enter the number of itmes ";
    cin >> size;
    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    int i, p;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the ID of item " << i + 1 << endl;
        cin >> p;
        cout << "Enter the price of item " << i + 1 << endl;
        cin >> q;
        ptr->setdata(p, q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        ptrTemp->getdata();
        ptrTemp++;
    }
    return 0;
}