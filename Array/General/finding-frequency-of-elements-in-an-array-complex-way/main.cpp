//program to find frequency of elements in an array
//IT IS A COMPLEX WAY
//creating two arrays, copying elements of first array to second array and 
//////deleting duplicate elements of the first array first and then comparing both the arrays and finding the count

#include <iostream> 
#include <stdio.h>
using namespace std;
 
int main()
{
	int arr[100], arr1[100], i, j, k, Size, n, count;
	cin>>Size;
	n = Size;
	cout<<"enter elements";
	for (i = 0; i < Size; i++){
    	cin>>arr[i];
   	}     
   	
   	for(i=0;i<Size;i++){
   	    arr1[i]=arr[i];
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
 	    count = 0;
 		for(j=0; j<n;j++){
 		    if(arr[i]==arr1[j]){
 		        count++;
 		    }
 		}
 		cout<<arr[i]<<" - "<<count<<"\n";
  	}	     
 	return 0;
}

