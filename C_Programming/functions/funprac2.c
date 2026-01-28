#include<stdio.h> 
int sum(int n);
void main(){
    int n; 
    scanf("%d",&n);
    sum(n);
    printf("sum is %d",sum(n));
} 
 
int sum(int n){
    int sum1=0;
    if(n==1){
        return 1;
    }else{
    sum1=n+sum(n-1);
    }
    
    return sum1;
}