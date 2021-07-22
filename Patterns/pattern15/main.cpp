/*

i/p: 4 3

4 -> no. of rows
3 ->from which the no. has to print

o/p:
3 
4 4 
5 5 5 
6 6 6 6 
6 6 6 6 
5 5 5 
4 4 
3 

*/

#include<iostream>
using namespace std;

int main()
{
    int n,s,tot;
    cin>>n>>s;
    tot = n + s -1;
    for(int i=s;i<=tot;i++){
        for(int j=s;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    for(int i=tot;i>=s;i--){
        for(int j=s;j<=i;j++){
            cout<<i<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
