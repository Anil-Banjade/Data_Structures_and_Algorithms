#include<stdio.h>
int count(int num);
void main(){ 
    int n[5];
    scanf("%d",&n);
    printf("%d",count(n));
}

int count(int a){
    int x, e, o;
    while(a!=0){
        x=a%10;
        if (x%2==0){
            e=e+1;
        }
        else{
            o+1;
        }
        x=x/10;
    }
    return(e);

}