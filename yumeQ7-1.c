#include <stdio.h>

int nogu(int a);

int main(void){
    int a,b;
    printf("aの値を入力 : ");
    scanf("%d",&a);
    printf("\n");
    b = nogu(a);
    printf("%dを階乗した値は%d\n",a,b);

    return 0;
}

int nogu(int a){
    int i,p;
    p=1;
    for(i=1;i<=a;i++){
        p = p*i;
    }

    return p;
}