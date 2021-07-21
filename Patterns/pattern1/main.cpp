#include <iostream>

using namespace std;

int main()
{
    int rows=5,i,j;
    
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    
    for(i=rows-1;i>=1;i--){
        for(j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
