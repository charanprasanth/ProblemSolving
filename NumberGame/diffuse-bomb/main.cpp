/*
Defuse Bomb

During the war, the enemy battalion has planted a bomb in your bunker. Your informer
has sent you a message of the enemy which contains a list having N numbers and key(K) . 
The numbers have to be used to construct a sequence to diffuse the bomb.
According to your informer, the logic to extract the sequence from the whole 
message is to replace each number with the sum of the next k elements , if the value of
k is positive. When the value of K is negative, the number replaced by the sum of previous K
numbers. The series of numbers is considered in a cyclic fashion for the last K numbers
Write an algorithm that

nds the sequence to defuse the bomb

Input Format
Input to the function consist of three arguments
size , no of elements in the sequence
key , represents the K value
message, represents the sequence
Output Format
Return a list of integers representing the sequence to diffuse the bomb
Constraints
0<= size <= 10^5
-10^6 <= message[i] <= 10^6
0<= i <= size
*/

#include<iostream>
using namespace std;
int main(){
    int bomb[10],diff[10]={0};
    int bind,size=5,key=3,dind;
    
    for(bind=0;bind<size;bind++){
        cin>>bomb[bind];
    }
    for(dind=0;dind<size;dind++){
        for(bind=1;bind<=key;bind++)
        diff[dind]=diff[dind]+bomb[(bind+dind)%size];
    }
    for(dind=0;dind<size;dind++){
        cout<<diff[dind]<<" ";
    }
    return 0;
}


