#include<iostream>
#include<vector>
using namespace std;

template <class t >

void display(vector<t> &v){
    for(int i = 0 ; i < v.size() ; i ++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main()
{
	vector<int> vec1;
	int size , ele ;
	cout<<"Enter the size of your vector ";
	cin>>size;
	for(int i = 0 ; i < size ; i++){
	    cout<<"Enter an element to add vector ";
	    cin>>ele;
	    vec1.push_back(ele);
	}
//	vec1.pop_back(); --> Removes last element
display(vec1);
//vector<int> :: iterator iter = vec1.begin();
//vec1.insert(iter+1 , 0);
//vec1.insert(iter+1 , 0);
//vec1.insert(iter , 5 , 7);
//display(vec1);


vector <int> vec ; // zero length integer vector
vector <char> vec2(4) ;//4-element character vector

vector<char> vec3(vec2) ;// 4- element character vector from vec2 

vector<int> vec4(5 , 2); // 5 - element vector of 2s
display(vec4);
	return 0;
}