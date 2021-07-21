#include <iostream>

using namespace std;

int main()
{
    int arr1[2][2], arr2[2][2], i, j;
    int *ptr;
    cout<<"enter elements of first array";
    for(i=0; i < 2; i++){
        for(j=0; j < 2; j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"enter elements of second array";
    for(i=0; i < 2; i++){
        for(j=0; j < 2; j++){
            cin>>arr2[i][j];
        }
    }
    ptr = &arr1[0][0];
    for(i=0; i<4;i++){
        cout<<*(ptr+i);
    }

    return 0;
}

