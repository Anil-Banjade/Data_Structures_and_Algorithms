#include<stdio.h>
void main(){
    int m,n,p,q;
    scanf("%d\n%d\n%d\n%d",&m,&n,&p,&q);
    int a[m][n], b[p][q];
    if(n!=p){
        printf("matrix cant be mul");
    }

    else{
        int c[m][q];
        int i,j,k;
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf("%d",&a[i][j]); 
            }
        }

        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                scanf("%d",&b[i][j]); 
            }
        }

        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                *(*(c+i)+j)=0;
                for(k=0;k<n;k++){
                    *(*(c+i)+j)=((*(*(c+i)+j))+(*(*(a+i)+k)))*(*(*(b+k)+j));

                }
            }
        }

        for(i=0;i<m;i++){
            for(j=0;j<m;j++){
                printf("%d ",(*(*(c+i)+j)));
            }
        printf("\n");
        }
    }
    
    
}