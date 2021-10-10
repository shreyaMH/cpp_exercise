#include<iostream>
using namespace std;

class student{
    int age;
    string first_name;
      string last_name;
      int standard ;
      
      public:
      void getdata(void);
      void setdata(void);
};

void student :: getdata(void){
    cin>>age>>first_name>>last_name>>standard;
}

void student :: setdata(void){
    cout<<age<<endl;
    cout<<last_name<<", "<<first_name<<endl<<standard<<"\n"<<"\n";
    cout<<age<<","<<first_name<<","<<last_name<<","<<standard;
}
int main()
{
	student s ;
	s.getdata();
	s.setdata();
	return 0;
}