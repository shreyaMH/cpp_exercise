#include<iostream>

using namespace std;

union student{
	int reg_num;

	int roll_num;
};

int main()
{
	union student s1;
	s1.reg_num=570;
	s1.roll_num=171;
	cout<<s1.reg_num;
	return 0;
}