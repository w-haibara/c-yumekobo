#include <stdio.h>

int main(void){
    int a,b,i;
    printf("数字を入力");
    scanf("%d",&a);
    for(i=1;i<=a;a++){
        b=a%i;
        if(b==0){
            printf("%d",i);
        }
６	printf("ほげ");
    }

    return(0);
}
