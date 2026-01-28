#include<stdio.h>
char str(char a[],char b[],char *p);

void main(){
    char a[10],b[10];
    char p[20];
    scanf("%s",&a); 
    scanf("%s",&b);
    str(a,b,p);
    
    printf("%s ",p);
}

char str(char a[], char b[],char *p){
    int c,d;
    int i,j,k;
    for(i=0;a[i]!='\0';i++){
        c=c+1; 
    }
    for(i=0;b[i]!='\0';i++){
        d=d+1;
    } 
    

    for(i=0;i<c;i++){
        *(p+i)=a[i];
    }
    // for(j=0,i=c;i<(c+d);i++,j++){
    //     *(p+i)=b[j];
    // }
    for(j=0;j<d;j++){
        *(p+i+j)=b[j];
    }

    return(*p);

}