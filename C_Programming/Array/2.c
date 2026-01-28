#include<stdio.h>
void main(){
    char sentence[255];
    fgets(sentence,255,stdin);
    printf("%s",sentence);
    int i,count=0,count1=0,total=0;
    for(i=0;sentence[i]!='\0';i++){
        if ((sentence[i]>='a'&& sentence[i]<='z')||(sentence[i]>='A'&& sentence[i]<='z')){
            count=count+1; 
        }

        if(sentence[i]==' '){
            count1=count1+1;
        }
    

    }
    for(i=0;sentence[i]!='\0';i++){
        total=total+1;

    }
    printf("%d ",count); 
    printf("%d ",count1);
    printf("%d",total-1);
}