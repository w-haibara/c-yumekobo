#include <stdio.h>
#define NUM 5

int main(void){
    int x;
    printf("x=");
    scanf("%d",&x);
    if(x>NUM){
        printf("x>%d\n",NUM);
    }

    return(0);
}
