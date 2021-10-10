#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string st = "Hello world !";
	//opening file using constructor and writing it
	ofstream out("sample.txt");//write Operation
	out<<st;
	
	//opening file using constructor and reading it

string st1 ;
	ifstream in("sample1.txt"); //read Operation
//	in>>st1; --> It only reads 1st word , it does not read spaces and special characters etc....
for(int i = 0 ; i < 3 ; i ++){
getline(in ,st1);
cout<<st1<<endl;
}

//getline() returns one entire line at a line if we want n number of lines than we can use for loop to read it.
	return 0;
}