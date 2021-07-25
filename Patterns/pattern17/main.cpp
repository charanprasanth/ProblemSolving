/******************************************************************************
i/p: 5
o/p:

12345
21234
32123
43212
54321

*******************************************************************************/
#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++,cout<<"\n")
    {
        for(j=1;j<=n;j++) {
            if(i<=j) printf("%d",(j-i)+1);
            else printf("%d",(i-j)+1); 
            
        } 
        
    }
    return 0;
}
