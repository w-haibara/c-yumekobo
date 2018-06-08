#include <stdio.h>

int nogu(int a);

int main(void){
    int a,b;
    printf("aの値を入力 : ");
    scanf("%d",&a);
    printf("\n");
    b = nugu(a);
    printf("２乗した値は%d\n",b);

    return 0;
}

int nogu(int a){
    int b;
    b = a*a;
    return b;
}