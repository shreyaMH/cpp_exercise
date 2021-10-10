#include <iostream>
using namespace std;
class Student
{
  protected:
    int roll_num;

  public:
    void set_num(int r)
    {
        roll_num = r;
    }

    void get_num()
    {
        cout << "The roll number is " << roll_num << endl;
    }
};

class Test : virtual public Student
{
  protected:
    float maths, physics;

  public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    void display_marks()
    {
        cout << "The marks obtained in maths is " << maths << endl
             << "The marks obtained in maths is " << physics << endl;
    }
};

class Sports : virtual public Student
{
  protected:
    int score;

  public:
    void set_score(int sc)
    {
        score = sc;
    }

    void display_score()
    {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : virtual public Test, virtual public Sports
{
  public:
    void display_res()
    {
        get_num();
        display_marks();
        display_score();

        cout << "Your total marks is " << maths + physics + score;
    }
};
int main()
{
    Result shreya;
    shreya.set_num(171);
    shreya.set_marks(91.1, 88.8);
    shreya.set_score(7);
    shreya.display_res();
    return 0;
}