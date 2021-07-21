#include<iostream>
#include<stdio.h>
using namespace std;
int main(){		
    int num,pv=1,series=0;		
    cin>>num;	//	8
    while(num!=0){		
        if(num%2==0){	//	8%2=0 
            series=4*pv+series;	//	4*1+0=4 
            pv=pv*10;	//	1*10=10 
            num=num/2;	//	8/2=4 
            num=num-1;	//	4-1=3 
        }		
        else{		
            series=3*pv+series;	//	3*10+4=34 
            pv=pv*10;	//	10*10=100
            num=num/2;	//	3/2=1 
        }		
    }		
    cout<<series;		
}