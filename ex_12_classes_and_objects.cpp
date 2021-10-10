#include <iostream>
using namespace std;

class Student
{
     int totalscore = 0 ;
    int scores;
    int n;

  public:
    void input()
    {
       
        int i, j;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < 5; j++)
            {
                cin >> scores;
                totalscore += scores;
            }
           
        }
    }
    
    int calculateTotalscore(){
        return totalscore ;
    }
    
};
int main()
{
    Student a;
    a.input();
    a.calculateTotalscore();
    return 0;
}