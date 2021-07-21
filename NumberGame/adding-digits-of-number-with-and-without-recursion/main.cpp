#include<iostream>

using namespace std;

//without recursion
int digiCount(long n,int noDigits){
    int a,sum=0;
    for(int i = 0; i < noDigits; i++){
        a=n%10;
        n/=10;
        sum+=a;
        a=0;
    }
    return sum;
}

//with recursion
int digiCountRec(long n){
    int a,sum=0;
    if(n==0){
       return 0; 
    }
    else {
        a = n%10;
        n/=10;
        sum=a+digiCountRec(n);
        return sum;
    }
}

int main(){
    long n;
    int x,noDigits;
    cout<<"enter a number\n";
    cin>>n;
    x=n;
    while(x!=0){
        x/=10;
        noDigits++;
    }
    cout<<"Without Recursion: "<<digiCount(n,noDigits)<<endl;
    cout<<"With Recursion   : "<<digiCountRec(n);
    return 0;
}








