//strong number 
//i/p 145 -> 1! + 4! + 5! = 1+24+125 = 145 -> o/p -> Strong number              (i/p == o/p)
//i/p 146 -> 1! + 4! + 6! = 1+24+750 = 775 -> o/p -> not a Strong number        (i/p != o/p)

#include<iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n, num, rem, result = 0;
    cin>>n;
    num = n;
    while(n!=0){
        int fact = 1;
        rem = n%10;
        for(int i=1;i<=rem;i++){
            fact = fact*i;
        }
        result = result + fact;
        n/=10;
    }
    
    if(num == result){
        cout<<"strong number";
    } else {
        cout<<"not a strong number";
    }

    return 0;
}
