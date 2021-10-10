#include <iostream>
using namespace std;
class Student
{
  protected:
    int roll_num;

  public:
    void set_roll_num(int);
    void get_roll_num();
};

void Student ::set_roll_num(int r)
{
    roll_num = r;
}

void Student ::get_roll_num()
{
    cout << "The roll number is : " << roll_num << endl;
}

class Exam : public Student
{
  protected:
    float maths, computer;

  public:
    void set_marks(float, float);
    void get_marks();
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    computer = m2;
}

void Exam ::get_marks()
{
    cout << "The marks obtained in maths is : " << maths << endl;
    cout << "The marks obtained in computer science is : " << computer << endl;
}
class Result : public Exam
{
  protected:
    float percentage;

  public:
    void display()
    {
        get_roll_num();
        get_marks();
        cout << "The percentage is : " << (maths + computer) / 2 << endl;
    }
};

int main()
{
    Result Shreya;
    int a;
    cout << "Enter your roll number : ";
    cin >> a;
    Shreya.set_roll_num(a);
    Shreya.set_marks(90.0, 91.0);
    Shreya.display();
    return 0;
}