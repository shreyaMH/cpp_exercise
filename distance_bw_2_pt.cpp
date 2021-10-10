#include <iostream>
#include <cmath>
using namespace std;

class point2;

class point1
{
    int x, y;
    friend int distance(point1, point2);

  public:
    point1(int a, int b)
    {
        x = a;
        y = b;
    }
};

class point2
{
    int u, v;
    friend int distance(point1, point2);

  public:
    point2(int c, int d)
    {
        u = c;
        v = d;
    }
};

int distance(point1 o1, point2 o2)
{
    int p1 = (o2.u - o1.x) * (o2.u - o1.x);
    int p2 = (o2.v - o1.y) * (o2.v - o1.y);

    int dis = sqrt(p1 + p2);
    cout << "The distance between 2 points "
         << "(" << o1.x << "," << o1.y << ")"
         << " and "
         << "(" << o2.u << "," << o2.v << ")"
         << " is " << dis;
}

int main()
{
    point1 c1(1 , 0);

    point2 c2(70 , 0);
    
    distance(c1, c2);
    return 0;
}