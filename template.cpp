#include<iostream>
using namespace std;

template <class T>
class Vector{
    public:
    
    int size;
    T *arr ;
     
    Vector(int m){
        size = m ;
        arr = new T[size];
    }
    
    int dotProduct(Vector &v)//(Vector v)
    {
        T d = 0 ;
        for(int i = 0 ; i < size ; i++){
            d += this->arr[i]*v.arr[i]; // d+=arr[i]*v.arr[i]
        }
        return d ;
    }
};
int main()
{
	Vector  <int>v1(2);
	v1.arr[0] = 2 ;
	v1.arr[1] = 2 ;
	
	Vector  <int>v2(2);
	v2.arr[0] = 3 ;
	v2.arr[1] = 1 ;
	
int a =	v1.dotProduct(v2);
cout<<a;
	return 0;
}