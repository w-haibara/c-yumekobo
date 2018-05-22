#include <stdio.h>

int main(void){
    int i,sum;
    sum=0;
    for(i=0;i<=10;i++){
        sum=sum+i;
    }
    printf("１から１０までの和は%d\n",sum);

    return(0);
}
