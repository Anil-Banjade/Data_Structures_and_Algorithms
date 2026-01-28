#include<stdio.h>
int avg(int num);
void main(){ 
    int n[100];
    int num[255];
    int a,i,result;
    while(a=scanf("%d",&n)!=0){
        if (a==0){
            i=-1;
            }
        for (i=0;i!=-1;i++){
            result=avg(a);
            printf("%d",result);
    }

}


}
int avg(int a){
    int average,n;
    if((a%4==0)&(a>10)&(a<15)){
        average=a+average;
        n=n+1;
    }
    return(average/n);


}