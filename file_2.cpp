#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream sout("sample2.txt");
	string st ;
	cout<<"What is your name ? ";
	cin>>st;
	sout<<"My name is " + st;
	sout.close();
	
	
	ifstream sin("sample2.txt");
	string st1 ;
	getline(sin,st1);
	cout<<st1;
	return 0;
}