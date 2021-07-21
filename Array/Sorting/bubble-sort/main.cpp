#include <iostream>
using namespace std;

int main()
{
  int n, a, i, j;
  cout<<"BUBBLE SORT";
  cout << "Enter the number of values: ";
  cin >> n; 
  int arr[n];
  cout<<"enter the values";
  for(i = 0; i<n; i++){
      cin>>arr[i];
  }
  
  for(i = 0; i<n; i++){
      for(j = i+1; j<n; j++){
          if(arr[i]>arr[j]){
               a = arr[i];
               arr[i] = arr[j];
               arr[j] = a;
          }
      }
  }
  
  for(i=0; i<n; i++){
      cout<<arr[i]<<"\t";
  }

  return 0;
}