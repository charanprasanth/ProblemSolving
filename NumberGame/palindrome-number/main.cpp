#include<iostream>
using namespace std;

int main(){
    int n, num, rev=0;
    cin>>n;
    num = n;
    while(n!=0){
        int rem = n%10;
        rev = (rev*10)+rem;
        n/=10;
    }
    if(num==rev){
        cout<<"Palindrome number";
    } else {
        cout<<"not a palindrome number";
    }

    return 0;
}

