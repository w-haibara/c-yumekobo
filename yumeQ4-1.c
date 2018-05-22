#include <stdio.h>
#define NUM 4

int main(void){
    int x[NUM+1];
    int i,j;
    int sum;
    sum=0;
    for(i=0;i<=NUM;i++){
        j=i+1;
        printf("%d番目の数字を入力",j);
        scanf("%d",&x[i]);
        printf("\n");
        sum=sum+x[i];
    }
    printf("%d個の数の",NUM+1);
    printf("平均は%f",sum/((double)NUM+1));
    
}