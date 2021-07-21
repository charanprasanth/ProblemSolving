// -1 is represent to end of the i/p .
// i/p: 10 5 3 2 1 -1 20 3 
//o/p: max = 10 
//     min = 1 
//    sum = 21 

// 2 3 -1 
// 100 -1 
// 32 4 7 9 1 2 3 0 7 4 59 56 2 90 87 56 -1


#include <iostream>
#include <limits.h>
using namespace std;
int main(){
    
    int n, max=INT_MIN, min=INT_MAX,sum=0;
    while(1){
        cin>>n;
        if(n==-1)
        break;
        if(n>max)
        max=n;
        if(n<min)
        min=n;
        sum=sum+n;
    }
    cout<<"MAX "<<max;
    cout<<"MIN "<<min;
    cout<<"SUM "<<sum;
    
    
    return 0;
}
