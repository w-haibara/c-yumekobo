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
    int pre_c,s_n,c_n;
    while(1){
        printf("\nINPUT A   : ");
        scanf("%d",&a);
        if(a!=0 && a!=1){
            printf("\nerror!\n");
            break;
        }

        printf("\nINPUT B   : ");
        scanf("%d",&b);
        if(b!=0 && b!=1){
            printf("\nerror!\n");
            break;
        }

        printf("\nCarry out : ");
        scanf("%d",&pre_c);
        if(b!=0 && b!=1){
            printf("\nerror!\n");
            break;
        }

        FA(a,b,pre_c,&s_n,&c_n);
        printf("\ns_n = %d, c_n = %d\n",s_n,c_n);

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
    int HAs1,HAc1,HAs2,HAc2,or1;
    HA(a,b,&HAs1,&HAc1);
    HA(HAs1,pre_c,&HAs2,&HAc2);
    or1 = or(HAc1,HAc2);
    *s = HAs2;
    *c = or1;
}