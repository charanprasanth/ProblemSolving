#include <iostream>
using namespace std;

int main()
{
  int n, a, i, j;
  cout<<"BUBBLE SORT - Sorting in reverse and printing in reverse order\n";
  cout << "Enter the number of values: ";
  cin >> n; 
  int arr[n];
  cout<<"enter the values";
  for(i = 0; i<n; i++){
      cin>>arr[i];
  }
  
  for(i = n-1; i>=0; i--){
      for(j = i-1; j>=0; j--){
          if(arr[i]<arr[j]){
               a = arr[i];
               arr[i] = arr[j];
               arr[j] = a;
          }
      }
  }
  
  for(i=n-1; i>=0; i--){
      cout<<arr[i]<<"\t";
  }

  return 0;
}
