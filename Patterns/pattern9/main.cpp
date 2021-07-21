#include<iostream>
#include<stdio.h>
 
using namespace std;

int main(){
    
    int i, j, rows = 3, columns = 5,k=1;
    cout<<"Rect pattern\n";
    for(i=1; i<=rows; i++){
        for(j=1; j<=columns; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    cout<<"Hollow rect pattern\n";
    for(i=1; i<=rows; i++){
        for(j=1; j<=columns; j++){
            if(i==1 || i==rows){
                cout<<"* ";
            }else if(j==1 || j==columns){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
    cout<<"Rect pattern with nos\n";
    for(i=1; i<=rows; i++){
        for(j=1; j<=columns; j++){
            printf("%02d ",k);
            k++;
        }
        cout<<endl;
    }
    
    cout<<endl;
    
    cout<<"Hollow rect pattern with nos\n";
    k=0;
    for(i=1; i<=rows; i++){
        for(j=1; j<=columns; j++){
            if(i==1 || i==rows || j==1 || j==columns){
                printf("%02d ",k);
                k++;
            }else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}