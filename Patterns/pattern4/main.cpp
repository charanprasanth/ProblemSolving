/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int i, j, n;
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%2==0){
            for(j=i;j>=1;j--){
                cout<<j<<"\t";
            }       
        } else {
            for(j=1;j<=i;j++){
                cout<<j<<"\t";
            }   
        }
        cout<<"\n";
    }
    return 0;
}

//input : 4
//output:
//1
//2 1
//1 2 3
//4 3 2 1