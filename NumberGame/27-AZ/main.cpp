// i/p: 27 
//o/p: AA 

//i/p: 52
//o/p: AZ 

//I/P: 53 
//O/P: BA 

//i/p: 3 
//o/p:c 
#include<stdio.h>
int main()
{
    int num,ind=0,rem,i;
    char str[1000];
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%26;
        if(rem==0)
        {
        str[ind++]='Z';
        num=num/26;
        num=num-1;
        }
        else
        {
            str[ind++]=rem+64;
            num=num/26;
        }
        
    }
    str[ind]='\0';
    for(i=ind-1;i>=0;i--)
    printf("%c",str[i]);
}