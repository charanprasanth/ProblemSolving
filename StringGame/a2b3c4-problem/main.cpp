#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main() {
    
    char str[100];
    int i=0, j;
    cin.get(str,100,'\n');
    
    while(str[i]!='\0'){ 
        if(str[i]>='a' && str[i]<='z') {
            i++;            
        }
        else if(str[i]>='A' && str[i]<='Z'){ 
            i++; 
        }
        else if(str[i]>='0' && str[i]<='9'){
            for(j=0;j<str[i]-'0';j++){
                cout<<str[i-1];
            }
            i++;
        }
    }
    
    return 0;
}