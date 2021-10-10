#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	map<string , int> myMap;
	myMap["Shreya"] = 99 ;
	myMap["Cat"] = 36;
	myMap["Swapna"] = 82 ;
	
	myMap.insert({{"Jack" , 65} , {"Lizzie" , 92}});
	map<string , int> :: iterator iter ;
	for(iter = myMap.begin() ; iter != myMap.end(); iter++){
	    cout<<(*iter).first<<" "<<(*iter).second<<"\n";
	}
	return 0;
}