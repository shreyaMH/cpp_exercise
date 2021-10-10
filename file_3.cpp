#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream out ;
	out.open("sample4.txt");
	out<<"Hi.....!\n";
	out<<"I am  is Shreya\n";
	out.close();
	
	ifstream in ;
	in.open("sample4.txt");
	string st ;
	
	while(in.eof() == 0){
	    getline(in , st);
	    cout<<st<<endl;
	}
	in.close();
	return 0;
}