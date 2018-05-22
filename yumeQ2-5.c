#include <stdio.h>

int main(void){
    int a;
    printf("a=");
    scanf("%d",&a);

    if(a==1){
        printf("ルーキー");
    }

    if(a==2){
        printf("中間管理職");
    }

    if(a==3){
        printf("色々と頑張れ");
    }

    if(a==4){
        printf("現役引退");
    }

    if(a>4){
        printf("OBかな？");
    }
    return(0);
}
