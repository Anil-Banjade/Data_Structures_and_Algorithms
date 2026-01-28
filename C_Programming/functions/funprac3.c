#include<stdio.h>
int fact(int n);
void main(){
    int n;
    scanf("%d",&n);
    printf("%d",fact(n));
}
int fact(int n){
    int fact1=1;
    if(n==1){
        return 1;
    }
    else{
        fact1=n*(fact(n-1));

    }

    return(fact1);
}

