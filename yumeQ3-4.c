#include <stdio.h>

int main(void){
    int sum,x,i;
    for(i=0;i<=100;i++){
        sum = sum+i;
        printf("足し合わせた値は%d",sum);
        printf("足した回数は%d\n",i);
    }

    return(0);
}
