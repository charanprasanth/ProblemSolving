/******************************************************************************
i/p: 8
o/p:

01 
02 03 
06 05 04 
07 08 09 10 
15 14 13 12 11 
16 17 18 19 20 21 
28 27 26 25 24 23 22 
29 30 31 32 33 34 35 36 

*******************************************************************************/
#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i, j, count, value, N;
    scanf("%d", &N);
    count = 0;
    for(i=1; i<=N; i++)
    {
        if(i%2==1)
            value=count+i;
        if(i%2==0)
            value=count+1;
        for(j=1; j<=i; j++)
        {
            printf("%02d ", value);
            if(i%2==1)
                value--;
            else
                value++;
                count++;
        }
        printf("\n");
    }
    return 0;
}

