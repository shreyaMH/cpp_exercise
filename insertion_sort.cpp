#include<iostream>
using namespace std;
int main(){
  int a[10] , t ,n , i , j ;
  cout<<"Enter the size of the array : ";
  cin>>n;
  for(i = 0 ; i < n; i++){
      cin>>a[i];
  }

  for( i = 0; i < n-1; i++){
      for( j = (i+1) ; j < n ; j++){
          if(a[i] > a[j]){
              t = a[i];
              a[i] = a[j];
              a[j] = t ;
          }
      }
  }

  for( i = 0 ; i < n ; i++){
      cout<<a[i]<<"\t";
  }

  return 0;
}