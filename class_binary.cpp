#include <iostream>
#include <string>
using namespace std;

class bin
{
    string s;


  public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void bin ::read(void)
{
    cout << "Enter a binary number " << endl;
    cin >> s;
}

void bin ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void bin ::ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void bin ::display(void)
{
    cout << "Ones compliment of the binary number is  "<<s1 << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}
int main()
{
    bin b;
    b.read();
    b.chk_bin();
    b.ones_compliment();
    b.display();
    return 0;
}