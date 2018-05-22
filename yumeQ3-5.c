#include <stdio.h>

int main(void){
    int a,b,i;
    i=1;
    printf("数字を入力");
    scanf("%d",&a);
    if(a>0){
        do{
            b=a%i;
            if(b==0){
                printf("%d",i);
        	    printf("|");
            }
            i++;
        }while(i<=a);
    }else{
        printf("error");
    }

    return(0);
}
