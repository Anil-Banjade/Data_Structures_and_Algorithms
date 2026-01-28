#include<stdio.h>
#include<math.h>
void main(){ 
    int a[10][2];
    int i,j,distance[10][2];
    for (i=0;i<10;i++){
        for(j=0;j<2;j++){
            scanf("%d",&a[i][j]);

        }
    }

    for (i=0;i<10;i++){
        for(j=0;j<2;j++){
            distance[i][j]=pow(sqrt(a[i+1][j])-sqrt(a[i][j]),1/2);
            
            

        }
    }

    for (i=0;i<10;i++){
        for(j=0;j<2;j++){
            printf("%d ",distance[i][j]);
            
            

        }
    }

    
}