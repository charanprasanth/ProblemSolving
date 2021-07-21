#include<iostream>
#include<string.h>

using namespace std;
int main ()
{   char str[80], str2[80];
    int i, length, j, root, statRoot, x=0;
    cout << "Enter a string : ";
    cin.get(str, 80, '\n');
    length = strlen(str);
    for( i = 0; i < length; i++)
    {
        if (str[i] == ' ')
        {
            for (j = i; j < length; j++)
                str[j] = str[j+1];
            length--;
        }
    }
    for(root=1;root*root<length;root++);
    statRoot = root;
    for(i=0;i<length;i++){
        if(i==root){
            int k;
            for(k=length;k>i;k--){
                str[k] = str[k-1];
            }
            str[k] = ' ';
            length++;
            root+=(statRoot+1);
        }
    }
    
    //not my code
    int y=0;
    for(i=0;i<root;i++){
        str2[x++] = str[i];
        int r=statRoot+1+i;
        for(int a=0;a<root-1;a++){
            if(r<length){
                str2[y++]=str[r];
            }
            r=r+statRoot+1;
        }
        str2[y++]=' ';
    }
    str2[length]='\0';
      
    cout<<str2;
    return 0;
}