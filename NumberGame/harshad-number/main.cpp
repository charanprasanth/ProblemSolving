//Harshad number
//i/p = 12 -> 1+2 = 3 -> 12%3 == 0 -> harshad no.

#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n, num, rem, result =0;
    cin>>n;
    num = n;
    while(n!=0){
        rem = n%10;
        result += rem;
        n/=10;
    }
    if(num%result==0){
        cout<<"Harshad number";
    } else {
        cout<<"not a harshad number";
    }
    return 0;
}
