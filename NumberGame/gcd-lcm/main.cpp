#include<iostream>
using namespace std;

int main()
{
    int n1, n2, i, gcd, lcm;
    cin>>n1>>n2;
    
    for(i=1;i<=n1;i++){
        if(n1%i==0 && n2%i==0){
            gcd = i;
        }
    }
    lcm = (n1*n2)/gcd;//formula
    cout<<"gcd: "<<gcd<<"\n"<<"lcm: "<<lcm;
    return 0;
}
