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
    int row,col,num,inc,val=1,inc1;
    scanf("%d",&num);
    for(row=1;row<=num;row++)
    {
        for(col=1;col<=num;col++)
        {
            if(row%2==1)
            printf("%02d ",val++);
            else
            printf("%02d ",--val);
        }
        val+=num;
        if(row<num)
            printf("\n");
    }
    return 0;
}
