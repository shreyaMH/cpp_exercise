#include<iostream>

using namespace std;

typedef struct student{
	int rollno;
	string name;
	float marks;
}st;

int main(){
	st s1;
	s1.name="Shreya";
	s1.rollno=171;
	s1.marks=171.5;
	
	cout<<s1.name<<endl<<s1.rollno<<endl<<s1.marks<<endl;
}