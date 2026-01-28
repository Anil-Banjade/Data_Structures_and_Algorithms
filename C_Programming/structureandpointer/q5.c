#include<stdio.h>
int second(int n, int *p);
void main(){
    int *p;
    int n;
    scanf("%d",&n);
    int num[n];
    int i,j;
    for(i=0;i<n;i++){
        scanf("%d",&num[i]); 
    }
    second(n,num);

}
int second(int n,int *p){ 
 
 int c,i,j; 

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            //if(num[j]<num[j+1]){
                if(*(p+j)<*(p+j+1)){
                // c=p[j]; 
                // num[j]=num[j+1];
                // num[j+1]=c;

                c=*(p+j);
                *(p+j)=*(p+j+1);
                *(p+j+1)=c;
         
            }
        }
    }

    // for(i=0;i<n;i++){
    //     printf("%d ",num[i]);
    // }
    printf("\n%d",*(p+1));

}