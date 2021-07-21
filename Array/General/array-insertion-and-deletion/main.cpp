#include <iostream>

using namespace std;

int main()
{
    int arr[20], i, n, item = 5, element, position,del_pos;
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"enter "<<n<<" elements: ";
    for(i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"\n elements are :";
    for(i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n Enter the position to Insert: ";
    cin>>position;
    cout<<"\nEnter Element to Insert: ";
    cin>>element;
    if(position > n){
        cout<<"Insertion not posssible";
    }else{
        for(i = n; i >= position; i--){
            arr[i] = arr[i-1];
        }
        arr[i] = element;
    }
    cout<<"\nThe New Array is:\n";
    for(i = 0; i < n+1; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    cout<<"\n Enter position to delete: ";
    cin>>del_pos;
    del_pos -= 1;
    if(del_pos > n){
        cout<<"Deletion not posssible";
    }else{
        for(i = del_pos; i < n-1; i++){
            arr[i] = arr[i+1];
        }
    }
    cout<<"\nThe New Array is:\n";
    for(i = 0; i < n; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}


