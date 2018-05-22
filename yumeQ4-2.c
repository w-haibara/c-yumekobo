#include <stdio.h>
#define h 2
#define w 2

int main(void){
    int x[h][w];
    int i,j;
    for(i=0;i<=h-1;i++){
        for(j=0;j<=w-1;j++){
            printf("(");
            printf("%d",i);
            printf(",");
            printf("%d",j);
            printf(")成分を入力");
            scanf("%d",&x[i][j]);
        }
    }
    printf("\n求める行列は\n");
    for(i=0;i<=h-1;i++){
        for(j=0;j<=w-1;j++){
            printf("%d ",x[i][j]);
        }
        printf("\n");
    }
}