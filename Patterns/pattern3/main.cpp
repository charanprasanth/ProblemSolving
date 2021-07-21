#include <iostream>

using namespace std;

int main()
{
    int i, j, row, column, a;
    cout<<" enter a number";
    cin>>a;
    if(a>7){
        cout<<"please enter a number less than 8";
    }
    else{
        row = (a*2)-1;
        column = (a*2)-1;
        for(i=1; i<=row; i++){
            for(j=1; j<=column; j++){
                if(i==1 || j==1 || i==row || j==column){
                    cout<<a<<" ";
                }
                else if(i==2 || j==2 || i==row-1 || j==column-1){
                    cout<<a-1<<" ";
                }
                else if(i==3 || j==3 || i==row-2 || j==column-2){
                    cout<<a-2<<" ";
                }
                else if(i==4 || j==4 || i==row-3 || j==column-3){
                    cout<<a-3<<" ";
                }
                else if(i==5 || j==5 || i==row-4 || j==column-4){
                    cout<<a-4<<" ";
                }
                else if(i==6 || j==6 || i==row-5 || j==column-5){
                    cout<<a-5<<" ";
                }
                else{
                    cout<<"1 ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}
