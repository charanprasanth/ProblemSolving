//deleting duplicate elements from array

#include <iostream> 
#include <stdio.h>
using namespace std;
 
int main()
{
	int arr[10], i, j, k, Size;
	cin>>Size;
	cout<<"enter elements";
	for (i = 0; i < Size; i++){
    	cin>>arr[i];
   	}     
 
	for (i = 0; i < Size; i++){
		for(j = i + 1; j < Size; j++){
    		if(arr[i]==arr[j]){
    			for(k=j; k<Size; k++){
    				arr[k] = arr[k+1];
				}
				Size--;
				j--;
			}
		}
	}

 	for (i = 0; i < Size; i++){
 		cout<<arr[i];
  	}	     
 	return 0;
}