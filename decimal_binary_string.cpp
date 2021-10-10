#include <iostream>

using namespace std;
int main()
{
	int a, b, sum, r, i, r2;
	string r1 = "\0";

	cout << "Enter values for a and b " << endl;
	cin >> a >> b;
	sum = a + b;

	while (sum > 0)
	{
		r = sum % 2;
		r1 = r1 + to_string(r);
		sum = sum / 2;
	}
	r2 = r1.length();

	for (i = r2; i >= 0; i--)
	{
		cout << r1[i];
	}

	return 0;
}