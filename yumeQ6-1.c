#include <stdio.h>

int sum(int a,int b);
double average(int a, int b);

int main(void){
    int a,b;
    printf("aの値を入力 : ");
    scanf("%d",&a);
    printf("\n");

    printf("bの値を入力 : ");
    scanf("%d",&b);
    printf("\n");

    printf("合計の値は%d\n",sum(a,b));

    printf("平均の値は%f\n",average(a,b));

    return(0);
}

int sum(int a,int b){
    int x;
    x = a+b;
    return(x);
}

double average(int a,int b){
    double y;
    y = (a+b)/2.0;
    return(y);
}