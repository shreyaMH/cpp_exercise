#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a ,b , new_string;
	cin>>a;
	cin>>b;
	int len1 = a.size();
	int len2 = b.size();
	new_string = a + b;
	char c1 = a[0] ;
	char c2 = b[0] ;
	a[0] = c2 ;
	b[0] = c1;
	cout<<len1<<" "<<len2<<endl;
	cout<<new_string<<endl;
	cout<<a<<" "<<b;
	return 0;
}