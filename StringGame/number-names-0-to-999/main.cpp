//i/p: 200  
//o/p: two hundred only   
//i/p: 234 
//o/p: two hundred and thirty four 
//constraints : range 0 - 999
#include<stdio.h>
int main()
{
    char one[21][10]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","ninteen"};
    char tens[10][9]={"","ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    int num;
    scanf("%d",&num);// 64 
    
    if(num>=0 && num<=99){
        if(num>=0&&num<=19){
            printf("%s",one[num]);    
        }
        else{
            printf("%s",tens[num/10]);// 64/10=6 sixty  
            if(num%10) //64%10=4 
            printf(" %s" , one[num%10]);
        }
    }
    else if(num/100){   //234/100=2 
        printf("%s hundred ",one[num/100]);//one[2] two hundred 
        if(num%100==0)//
        printf("only"); //
        else{
            int rem;
            rem=num%100;//234%100= 34 
            if(rem>=1 && rem<=19){
                printf(" and %s" ,one[rem]);
            }
            else{
                printf(" and %s" ,tens[rem/10]);// and thirty [34/10]=tens[3] 
                if(num%10)// 234%10=4 
                printf(" %s",one[rem%10]);//four 
            }
        }
    }
    return 0; 
    
}
