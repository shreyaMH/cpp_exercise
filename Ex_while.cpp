#include<iostream> 
using namespace std;

int main()
{
	int i , marks[5]={90 , 98 ,90 ,72 , 91};
	while(i<5)
	{
		cout<<"The marks of student "<<(i+1)<<" is "<<marks[i]<<endl;
		i++;
	}
	return 0;
}