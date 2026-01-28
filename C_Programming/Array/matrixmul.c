#include<stdio.h>
void main(){ 
    int n1, m1,n2,m2;
    scanf("%d\n%d\n%d\n%d",&n1,&n2,&m1,&m2);
    int a[n1][n2],b[m1][m2],c[n1][m2];
    if(n2!=m1){
        printf("not possible"); 
    }
    else{
        int c[n1][m2];
        int i,j,k;
        for(i=0;i<n1;i++){
            for(j=0;j<n2;j++){
                scanf("%d",&a[i][j]);

            } 
        }

        for(i=0;i<m1;i++){
            for(j=0;j<m2;j++){
                scanf("%d",&b[i][j]);

            } 
        }
        
        for(i=0;i<n1;i++){
            for(j=0;j<m2;j++){
                c[i][j]=0;
                for(k=0;k<n2;k++){
                c[i][j]=c[i][j]+a[i][k]*b[k][j];

                }

            } 
        }
        

        for(i=0;i<n1;i++){
            for(j=0;j<m2;j++){
                printf("%d ",c[i][j]);

            }
            printf("\n");

        }

    }

    

}