#include <stdio.h>

int main(void){
    int a,b;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);
    if(a%2==0 && b%3==0){
        printf("aとbは2,3で割り切れる");
    }

    return(0);
}
