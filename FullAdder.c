#include <stdio.h>

int and(int a,int b);
int or(int a,int b);
int not(int a);
int nand(int a, int b);
int nor(int a, int b);
int exor(int a, int b);
void HA(int a,int b,int *s,int *c);
void FA(int a,int b,int pre_c,int *s,int *c);

int main(void){
    int a,b;
    int s0,c0;
    while(1){
        printf("\nINPUT A : ");
        scanf("%d",&a);
        if(a!=0 && a!=1){
            printf("\nerror!\n");
            break;
        }

        printf("\nINPUT B : ");
        scanf("%d",&b);
        if(b!=0 && b!=1){
            printf("\nerror!\n");
            break;
        }
        HA(a,b,&s0,&c0);
        printf("\ns0 = %d, c0 = %d\n",s0,c0);

    return 0;
    }
}

int and(int a, int b){
    int s = a&b;
    return s;
}

int or(int a, int b){
    int s = a|b;
    return s;
}

int not(int a){
    int s;
    if(a==1){
        s=0;
    }else{
        s=1;
    }
    return s;
}

int nand(int a, int b){
    int s = not(a&b);
    return s;
}

int nor(int a, int b){
    int s = not(a|b);
    return s;
}

int exor(int a,int b){
    int s=a^b;
    return s;
}

void HA(int a,int b,int *s,int *c){
    int or1, and1,not1,and2;
    or1 = or(a,b);
    and1 = and(a,b);
    not1 = not(and1);
    and2 = and(or1,not1);

    *s = and2;
    *c = and1; 
}

void FA(int a,int b,int pre_c,int *s,int *c){
    int or1, and1,not1,and2;
    or1 = or(a,b);
    and1 = and(a,b);
    not1 = not(and1);
    and2 = and(or1,not1);

    *s = and2;
    *c = and1; 
}
