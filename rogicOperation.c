#include <stdio.h>

int and(int a,int b);
int or(int a,int b);
int not(int a);
int nand(int a, int b);
int nor(int a, int b);
int exor(int a, int b);

int main(void){
    int a,b;
    while(1){
        printf("\naの値を入力（0もしくは1）");
        scanf("%d",&a);
        if(a!=0 && a!=1){
            printf("\nerror!\n");
            break;
        }

        printf("\nbの値を入力（0もしくは1）");
        scanf("%d",&b);
        if(b!=0 && b!=1){
            printf("\nerror!\n");
            break;
        }

        printf("\na and b = %d\n",and(a,b));

        printf("\na or b = %d\n",or(a,b));

        printf("\n~a = %d\n",not(a));

        printf("\n~b = %d\n",not(b));

        printf("\n~(a and b) = %d\n",nand(a,b));

        printf("\n~(a or b) = %d\n",nor(a,b));

        printf("\na exor b = %d\n",exor(a,b));

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
    int s = 1-a;
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
