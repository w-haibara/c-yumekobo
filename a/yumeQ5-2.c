#include <stdio.h>

int main(void){
    int x[3];
    int *p,*q,*r;
    printf("第1成分を入力 : ");
    scanf("%d",&x[0]);
    printf("\n");
    printf("第2成分を入力 : ");
    scanf("%d",&x[1]);
    printf("\n");
    printf("第３成分を入力 : ");
    scanf("%d",&x[2]);
    printf("\n");

    printf("入力された行列は ");
    printf("%d %d %d\n\n",x[0],x[1],x[2]);

    p = &x[0];
    q = &x[1];
    r = &x[2];
    printf("第１成分のアドレスは%p\n",p);
    printf("第２成分のアドレスは%p\n",q);
    printf("第３成分のアドレスは%p\n",r);
}