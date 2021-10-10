#include <iostream>
using namespace std;

int main()
{
    int a[100][100], i, j, n, k, q, n1, n2;
    cin >> n;
    cin >> k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < k; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> n1 >> n2;
    cout << a[n1][n2];
    cin >> n1 >> n2;
    cout << a[n1][n2];

    return 0;
}