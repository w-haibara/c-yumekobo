#include <stdio.h>

int main(void){
    int i,sum;
    i=0;
    sum=0;
    while(i<=10){
        sum=sum+i;
        i++;
    }
    printf("１から１０までの和は%d\n",sum);

    return(0);
}
