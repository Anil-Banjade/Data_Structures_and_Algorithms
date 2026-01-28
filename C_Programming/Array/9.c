#include<stdio.h>
void main(){
    char persons[10];
    int i;
    for(i=0;i<10;i++){
        scanf("%s",&persons[i]);

    }

    for(i=0;i<10;i++){
        char a[10];
       if(persons[i]>persons[i+1]){
        a[i]=persons[i+1];
        persons[i+1]=persons[i];
        persons[i]=a[i];

       }
       }

       printf("%s",persons[0]);
}