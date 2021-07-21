//i/p: one two three four five 
//o/p: five four three two one 
#include<stdio.h>
int main()
{
    char str[1000];
    int len,ind;
    scanf("%[^\n]s",str);// one(null) two(null)three(null)four(null) 
    for(len=0;str[len];len++);
    for(ind=len-1;str[ind]>0;ind--)
    {
        if(str[ind]==' ')
        {
        str[ind]='\0';
        printf("%s ",&str[ind]+1);
        }
    }
    printf("%s",str);
}