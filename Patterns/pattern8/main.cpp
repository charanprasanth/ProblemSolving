/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int rows=5,i,j,k=1;
    for(i=rows; i>=1; i--){
        for(j=1; j<=i; j++){
            if(j==1){
                cout<<k<<" ";
                k++;
            }else if(i==rows){
                cout<<j<<" ";
            }else if(i==j){
                cout<<rows;
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
