#include<stdio.h>
char concat(char a[], char b[],char *p);
void main(){
    char a[30],b[30];
    char p[60]; 
    scanf("%s",&a);
    scanf("%s",&b); 
    concat(a,b,p); 
    printf("concat is %s",p);
        
}
char concat(char a[],char b[], char *p){ 
    int i=0,c1=0,c2=0;
    for(i=0;a[i]!='\0';i++){
        c1=c1+1; 
    }

    for(i=0;b[i]!='\0';i++){
        c2=c2+1;
    }
    
    for(i=0;i<c1-1;i++){
        *(p+i)=a[i];
    }
    for(i=0;i<c2-1;i++){
        *(p+c1-1+i)=b[i];
    }
    
    return(*p);
}