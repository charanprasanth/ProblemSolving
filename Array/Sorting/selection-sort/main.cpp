#include <iostream>
using namespace std;

int main()
{
  int n, a, i, j, min;
  cout<<"SELECTION SORT\n";
  cout << "Enter the number of values: ";
  cin >> n; 
  int arr[n];
  cout<<"\nEnter the values\n";
  for(i=0; i<n; i++){
      cin>>arr[i];
  }
  
  for(i=0; i<n; i++){
      min = i;
      for(j = i+1; j<n; j++){
          if(arr[min]>arr[j]){
               min = j;
          }
      }
      a = arr[min];
      arr[min] = arr[i];
      arr[i] = a;
  }
  
  for(i=0; i<n; i++){
      cout<<arr[i]<<" ";
  }

  return 0;
}



