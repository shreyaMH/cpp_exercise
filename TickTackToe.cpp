#include<iostream>
using namespace std;

class Board{
    public:
    void display(){
        cout<<" " <<" | " << " "<<" | "<<" "<<" | "
        <<endl<<"----------------"<<endl<<" " <<" | " << " "<<" | "<<" "<<" | "
        <<endl<<"----------------" <<endl<<" " <<" | " << " "<<" | "<<" "<<" | ";
    }
};
int main()
{
	Board b;
	b.display();
	return 0;
}