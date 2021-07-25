/******************************************************************************
i/p: 5
o/p:

1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
11 12 13 14 15
7 8 9 10
4 5 6
2 3
1

*******************************************************************************/
#include <iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int num,row,col,val=1;
    scanf("%d",&num);
    for(row=1;row<=num;row++,printf("\n"))
    {
    val=(row*(row-1))/2+1;
    for(col=1;col<row;col++)
        (val<=9)?printf("%d ",val++):printf("%d ",val++);
        printf("%d",val++);
    }
    for(row=num;row>=1;row--)
    {
        val=(row*(row-1))/2+1;
        for(col=1;col<row;col++)
            (val<=9)?printf("%d ",val++):printf("%d ",val++);
            printf("%d",val++);
        if(row>1)
            printf("\n");
    }
    return 0;
}

