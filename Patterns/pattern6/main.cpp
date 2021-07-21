#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((i+j)%2==0){
                cout<<"1"<<"\t";
            } else {
                cout<<"0"<<"\t";
            }
        }
        cout<<"\n";
    }
    return 0;
}

