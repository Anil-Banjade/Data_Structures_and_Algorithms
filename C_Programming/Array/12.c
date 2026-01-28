#include<stdio.h>
void main(){
    int a[3][4], b[3][4],c[3][4];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            c[i][j]=2*(a[i][j]+b[i][j]);
        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }


}