#include <iostream>
using namespace std;

class CWH
{
  protected:
    string title;
    float rating;

  public:
    CWH(string t, float r)
    {
        title = t;
        rating = r;
    }

    virtual void display()
    {
        cout << "Base class" << endl;
    }
};

class CWHvideo : public CWH
{
  protected:
    float vlen;

  public:
    CWHvideo(string t, float r, float vl) : CWH(t, r)
    {
        vlen = vl;
    }

    void display()
    {
        cout << "This is an amazing video tutorial of tittle : " << title << endl;
        cout << "The rating is " << rating << " out of 5 " << endl;
        cout << "The video length is " << vlen << endl;
    }
};

class CWHtext : public CWH
{
  protected:
    int words;

  public:
    CWHtext(string t, float r, int w) : CWH(t, r)
    {
        words = w;
    }

    void display()
    {
        cout << "This is an amazing text tutorial of tittle : " << title << endl;
        cout << "The rating is " << rating << " out of 5 " << endl;
        cout << "The total words are " << words << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;
    title = "Django tutorials ";
    rating = 4.2;
    vlen = 5.3;
    words = 200;

    CWHvideo djvideo(title, rating, vlen);
    CWHtext djtext(title, rating, words);

    CWH *tut[2];
    tut[0] = &djvideo;
    tut[1] = &djtext;

    tut[0]->display();
    tut[1]->display();
    return 0;
}