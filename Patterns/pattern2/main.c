#include <stdio.h>

int main()
{
    int rows=5,i,j,ch=64;//ascii A=65 , putting 64 since we are adding 1 in printf
    
    printf("number right angle, columns equal\n");
    
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    
    printf("number right angle, rows equal\n");
    
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    
    printf("number right pyramid columns alike\n");
    
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    
    for(i=rows-1;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    
    printf("number right pyramid rows alike\n");
    
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    
    for(i=rows-1;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    
    printf("columns are alike\n");
    
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("%c ",(ch+j));
        }
        printf("\n");
    }
    
    for(i=rows-1;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%c ",(ch+j));
        }
        printf("\n");
    }
    
    printf("rows are alike\n");
    
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("%c ",(ch+i));
        }
        printf("\n");
    }
    
    for(i=rows-1;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%c ",(ch+i));
        }
        printf("\n");
    }
    
    printf("star pattern\n");
    
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    
    for(i=rows-1;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    
    printf("star opposite pattern\n");
    
    for(i=rows;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    
    for(i=2;i<=rows;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}

