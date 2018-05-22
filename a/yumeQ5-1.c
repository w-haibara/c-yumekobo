#include <stdio.h>

int main(void){
    int a,b,c;
    int *p;
    int sum;
    printf("1番目の値を入力");
    scanf("%d",&a);
    printf("\n");
    printf("2番目の値を入力");
    scanf("%d",&b);
    printf("\n");
    printf("3番目の値を入力");
    scanf("%d",&c);
    printf("\n");
    sum = a+b+c;
    p = &sum;
    printf("合計値は%d\n",*p);
    printf("アドレスは%p\n",p);
}