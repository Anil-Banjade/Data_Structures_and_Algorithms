#include<stdio.h>
struct Student{
    char name[255];
    int rollno;
    int age;
};
void main(){
    struct Student s[10];
    
    
    int i; 
    for(i=0;i!=-1;i++){
        scanf("%s",&s[i].name);
        if(s[i].name[i]=='n'||s[i].name[i]=='N'){
            i=-2; 
        
        }
        else{
        scanf("%d",&s[i].rollno);
        scanf("%d",&s[i].age);
        } 
        
    }
}