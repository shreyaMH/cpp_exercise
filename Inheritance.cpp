#include <iostream>
using namespace std;

//Base class
class Employee
{
  public:
    int id;
    float salary;
    Employee(){};
    Employee(int inId)
    {
        id = inId;
        salary = 12;
    }

    void getdata()
    {
        cout << "The id is " << id<<endl;
    }
};

//Derived class
class Programmer : public Employee{
    public:
    int langcode ;
    Programmer(int inpID){
        id = inpID ;
        langcode =10;
    }
};


int main()
{
    cout<<"This is a employee class"<<endl;
    Employee a(1), b(2);
    a.getdata();
    cout<<"The salary is " << a.salary << endl;
    b.getdata();
    cout <<"The salary is " <<b.salary << endl;
    
    cout<<endl;
    cout<<"This is a programmer class"<<endl;
    Programmer c(3) , d(4) ;
    c.getdata();
    
    cout<<"The language code  is " << c.langcode<< endl;
    d.getdata();
    cout <<"The language code is " <<d.langcode<< endl;
    return 0;
}