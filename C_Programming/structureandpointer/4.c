#include<stdio.h>
void main(){
    int i,j;
    int a[3][2],b[3][2],c[3][2];
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            scanf("%d",*(a+i)+j);

        }
    }

    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            scanf("%d",*(b+i)+j);

        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            //printf("%d ",*(*(c+i)+j)=*(*(a+i)+j)+*(*(b+i)+j));
        printf("%d ",*(*(a+i)+j)+*(*(b+i)+j));
        
        }

        printf("\n");
    }
} 