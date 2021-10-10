#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main()
{
	int arr[ ] = {3 , 90 , 22 , 4 , 77 , 12 };
	
//	sort(arr , arr+6); // Ascending order
	
	sort(arr , arr+6 , greater<int>()); // descending order
for(int i = 0; i < 6 ; i++){
    cout<<arr[i]<<" ";
}
		return 0;
}