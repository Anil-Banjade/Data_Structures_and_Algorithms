#include<stdio.h>

char rev(char word[], char *p); 
void main(){
    char word[255];
    char p[255];
    scanf("%s",&word);
    rev(word,p);
    printf("Reverse is %s",p);

}

char rev(char word[],char *p){
    int i=0,count=0;
    
    for(i=0;word[i]!='\0';i++){
        count=count+1;
    }
    //char reverse[count-1];
    int j;
    for(i=count-1,j=0;i<0,j<count;i--,j++){
        *(p+j)=word[i];
        
    }
    return (*p);

}