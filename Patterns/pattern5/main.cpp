#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<i+j+1<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
