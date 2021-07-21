//Printing hollow square with diagonal

// i/p : 6
// o/p : 
// * * * * * * 
// * *     * * 
// *   * *   * 
// *   * *   * 
// * *     * * 
// * * * * * * 

// i/p : 5
// o/p : 
// * * * * * 
// * *   * * 
// *   *   * 
// * *   * * 
// * * * * * 

#include <iostream>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==1 || i==j || j==1 || i==n || j==n || i+j==n+1){
                cout<<"* ";
            } else {
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    return 0;
}


