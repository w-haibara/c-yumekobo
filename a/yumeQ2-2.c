#include <stdio.h>

int main(void){
    int x;
    printf("x=");
    scanf("%d",&x);
    if(x<60){
        printf("不可");
    }
    if(x>=60 && x<70){
        printf("可");
    }
    if(x>=70 && x<80){
        printf("良");
    }
    if(x>=80 && x<90){
        printf("優３");
    }
    if(x>90 && x<=100){
        printf("優４");
    }     
                
    return(0);
}
