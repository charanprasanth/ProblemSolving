#include<iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n, sum = 0, num;
    scanf("%d",&n);
    num = n;
    while(n>0){
        int rem = n%10;
        sum = sum +(rem*rem*rem);
        n/=10;
    }
    if(num==sum){
        cout<<"Armstrong number";
    } else {
        cout<<"not an armstrong number";
    }

    return 0;
}
