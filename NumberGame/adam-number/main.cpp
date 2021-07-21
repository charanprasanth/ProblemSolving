#include<iostream>
#include <stdio.h>
using namespace std;

int
main ()
{
  int n, sq1, sq2;

  cin >> n;
  sq1 = n * n;


  int n1 = n, rn = 0, rem1, rem2, rnsq = 0;
  while (n1 != 0)
    {
      rem1 = n1 % 10;
      rn = rn * 10 + rem1;
      n1 /= 10;
    }
  sq2 = rn * rn;
  int n2 = sq2;
  while (n2 != 0)
    {
      rem2 = n2 % 10;
      rnsq = rnsq * 10 + rem2;
      n2 /= 10;
    }
    
    if(sq1==rnsq){
        cout<<"Adam no";
    } else {
        cout<<"not an adam no";
    }

  return 0;
}
