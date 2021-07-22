//i/p:  12 8
//12 -> number of values
//8 -> postion where numbers should start
//o/p:  6 7 8 9 10 11 12 1 2 3 4 5 

///example2
//i/p:  8 5
//o/p:  5 6 7 8 1 2 3 4 

#include <iostream>
using namespace std;
int main()
{
    int n, c, val;
    cin>>n>>c;
    val = n-c+2;
    for(int i=1;i<=n;i++){
        cout<<val++<<" ";
        if(val>n){
            val %= n;
        }
    }

    return 0;
}

////Alternate Program
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, c, val;
//     cin>>n>>c;
//     val = n-c+2;
//     if(c==1){
//         val = 1;
//     }
//     for(int i=1;i<=n;i++){
//         cout<<val++<<" ";
//         if(val>n){
//             val = 1;
//         }
//     }

//     return 0;
// }
