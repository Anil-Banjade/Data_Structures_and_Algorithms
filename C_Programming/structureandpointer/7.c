#include<stdio.h>
char vowel(char *p);
void main(){
    char a[255];
    char p[255];
    scanf("%s",&a);
    vowel(a);
    printf("vowel character are %s",a);
    
} 
char vowel(char *p){
    int i,count=0;
    for(i=0;*(p+i)!='\0';i++){
        if (*(p+i)=='a'||*(p+i)=='e'||*(p+i)=='i'||*(p+i)=='o'||*(p+i)=='u'){
            count=count+1;
        }

    }
    printf("%d\n",count);
    return(count);
}