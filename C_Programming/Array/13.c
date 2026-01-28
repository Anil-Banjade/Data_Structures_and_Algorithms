#include<stdio.h>
void main(){
    int n,m,i,j,k;
    scanf("%d",&n);
    scanf("%d",&m);
    int a[n];
    int b[m];
    int c[m+n];

    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++){
        scanf("%d",&b[i]);
    }


    for(i=0;i<n;i++){
        c[i]=a[i];
    }
    for(j=0;j<m;j++){
        c[j+n]=b[j];
    } 
    for(i=0;i<(m+n);i++){
        printf("%d",c[i]);
    }
    
}