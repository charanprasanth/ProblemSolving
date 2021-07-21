#include<iostream>
using namespace std;

int count(int n){
    int result, s=0, remainder;
    while(n!=0){
        remainder = n%10;
        s+=remainder;
        n/=10;
    }
    return s;
}

int main()
{
    int n, result;
    cin>>n;
    result = count(n);
    while(result/10!=0){
        result=count(result);
    }

    cout<<result;
    return 0;
}

////SHORTCUT METHOD
// #include<iostream>
// using namespace std;
// int main(){
//  int num;
//  cin>>num;//18 21 
//  if(num%9==0)//18%9=0
//     cout<<9//9
//  else
//      cout<<num%9// 21%9=3 
// }
