// i/p = 6
// o/p
// 01 02 03 04 05 06 37 38 39 40 41 42 
//    07 08 09 10 11 32 33 34 35 36 
//       12 13 14 15 28 29 30 31 
//          16 17 18 25 26 27 
//             19 20 23 24 
//                21 22 

#include<iostream>
using namespace std;

int main()
{
    int n, value = 1, space, i ,j, temp, dec;
    cin>>n;

    temp = (n*n)+1;
    dec = (n+n)-1;
    
    for(i=1;i<=n;i++){
        for(space=1;space<i;space++){
            cout<<"   ";
        }    
        for(j=n;j>=i;j--){
            printf("%02d", value++);
            cout<<" ";
        }
        for(j=n;j>=i;j--){
            printf("%02d", temp++);
            cout<<" ";
        }
        temp = temp - dec;
        dec = dec - 2;
        cout<<"\n";
    }
    
    return 0;
}

