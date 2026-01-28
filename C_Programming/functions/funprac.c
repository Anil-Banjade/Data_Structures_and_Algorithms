#include<stdio.h>
void name(int count);
void main(){
    name(5);
}

void name(int count){
    if(count==0){
        return;
    }
    printf("anil");
    name(count-1);
}

