// i/p : 3
// o/p :
// a b c d e f g h i j k l m n o p q r s t u v w x y z 
// a b c d e f g h i j k l m n o p q r s t u v w x y z 
// a b c d e f g h i j k l m n o p q r s t u v w x y z 

//Method 1: typecasting the integers to character
//Method 2: looping with characters

#include <iostream>
using namespace std;

int main(){
    int i,n,c;
    cin>>n;
    for(i=1;i<=n;i++){
        for (c = 97; c <= 122; c++){
            cout<<char(c)<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

// ALTERNATE METHOD
// #include <iostream>
// using namespace std;

// int main(){
//     int i,n;
//     char c;
//     cin>>n;
//     for(i=1;i<=n;i++){
//         for (c = 'a'; c <= 'z'; c++){
//             cout<<c<<" ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }



