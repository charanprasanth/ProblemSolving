#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
  int n;
  cout<<"PROGRAM TO CHECK WHETHER A NUMBER IS A POWER OF 2";
  cout<<"\nEnter the number:";
  cin>>n;
  
  cout<<8&7;
  
  if(n&(n-1)){
      cout<<n<<" is a power of 2";
  } else {
      cout<<n<<" is not a power of 2";
  }
  return 0;
}
