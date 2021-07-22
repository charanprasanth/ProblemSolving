//pair swap problem
//i/p: 7
//  1 2 3 4 5 6 7
//o/p:
//  2 1 4 3 6 5 7
//i/p: 6
//  1 2 3 4 5 6 
//o/p:
//  2 1 4 3 6 5 

#include <iostream>
using namespace std;

int main(){
    int arr[100],i,n,temp;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n%2==0){
        for(i=0;i<n;i+=2){
            temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;
        }
    }
    else {
        for(i=0;i<n;i+=2){
            if(i!=(n-1)){
                temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

////ALTERNATE METHOD
// #include<stdio.h>
// int main()
// {
// int size,arr[100],ind;
// scanf("%d",&size);
// for(ind=0;ind<size;ind++)
// scanf("%d",&arr[ind]);
// for(ind=0;ind<size-1;ind=ind+2)
// arr[ind]=(arr[ind]+arr[ind+1])-(arr[ind+1]=arr[ind]);
// for(ind=0;ind<size;ind++)
// printf("%d ",arr[ind]);
// return 0;
// }
