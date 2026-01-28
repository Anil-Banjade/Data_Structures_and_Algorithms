#include<stdio.h>
struct student{
    char name[20];
    int age;
};
void main(){
    struct student s[5];
    struct student *p=s;
    int i;
    for(i=0;i<5;i++){
        scanf("%s",(p+i)->name);
        scanf("%d",&((p+i)->age)); 
    }
    // p=&s;
    for(i=0;i<5;i++){
        printf("%s",(p+i)->name);
        printf("%d",((p+i)->age)); 
        
        
    } 
}  


