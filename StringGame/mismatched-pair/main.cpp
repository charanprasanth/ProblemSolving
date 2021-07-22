//i/p: abcdefgh
//i/p: abdcfegh

//printing mismatched pair with comma(int first input, a,b;c,d;e,f;g,h are pairs)
//o/p: c,d d,c e,f f,e 

#include<stdio.h>
int main()
{
    char str1[50];
    char str2[50];
    int ind;
    scanf("%s %s",str1,str2);
    for(ind=0;str1[ind];ind++)
    {
        if(str1[ind]!=str2[ind])
        printf("%c,%c ",str1[ind],str2[ind]);
    }
    return 0;
}