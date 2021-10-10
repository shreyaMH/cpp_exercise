#include <iostream>
using namespace std;

int main()
{
    //new keyword
    int *a = new int(10);
  
    cout << "The value of a is " << *(a) << endl;
    
    int *arr = new int[3];
   delete arr;
    arr[0] = 100;
    *(arr + 1) = 200; // -------->This is equal to arr[1]
    arr[2] = 300;
    
  
     
    cout << "The value of arr[0] " << arr[0] << endl;
    cout << "The value of arr[1] " << *(arr + 1) << endl;
    cout << "The value of arr[2] " << arr[2] << endl;
    
    

    return 0;
}