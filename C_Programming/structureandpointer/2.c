#include<stdio.h>
struct Student{
    char name[20];
    char addr[20];
    int rollno;
    };

void display(struct Student *std, int n);
void main(){
    int n,i;
    scanf("%d",&n);
    struct Student std[n];
    
    for(i=0;i<n;i++){
    scanf("%s",&std[i].name);
    scanf("%s",&std[i].addr);
    scanf("%d",&std[i].rollno);
    
    
    }
    display(std,n);
}

void display(struct Student *std, int n){
    int i;
    for(i=0;i<n;i++){
    printf("%s\n",(std+i)->name);
    // printf("%s\n",std.ad);
    // printf("%d\n",std.rollno);
    }

}


