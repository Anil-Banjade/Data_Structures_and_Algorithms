// #include<stdio.h>
// void fib(int n);
// void main(){
//     int n;
//     scanf("%d",&n);
//     fib(n);

// } 

// void fib(int n){
//     int i;
//     int a=1;
//     int b=1;
//     int c=0;
//     for(i=0;i<=n;i++){
//     printf("%d ",c);
//     a=b;
//     b=c;
//     c=a+b;
     
//     }
// }  

#include<stdio.h>    
int fib(int n);
void main(){
    int n;
    scanf("%d",&n);
    printf("%d ",fib(n));

} 

int fib(int n){
    int fib3=0;
   if(n==0){
    return 0;
   }
     if(n==1){
    return 1;
    
   }

    fib3=fib(n-1)+fib(n-2);  
    //printf("%d of no is %d",n,fib3); 
    
   return(fib3);

} 