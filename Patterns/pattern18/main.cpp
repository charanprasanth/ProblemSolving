/******************************************************************************
i/p: 5
o/p:

55555
54444
54333
54322
54321

*******************************************************************************/
#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int size,num,col,row,inc,rep;
    scanf("%d",&size);
    for(row=0;row<size ;row++,printf("\n"))
    {
        num=size;
        for(inc=1;inc<=row;inc++)
            printf("%d",num--);
        for(rep=1;rep<=size-row;rep++)
            printf("%d",num);
    }
    return 0;
}
