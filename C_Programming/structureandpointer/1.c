#include<stdio.h>
#include<string.h>

struct Student{
    char name[10];
    char cityaddr[10];
    int rollno;
};
struct Student person1;
void main(){

    scanf("%s",&person1.name);
    scanf("%s",&person1.cityaddr);
    scanf("%d",&person1.rollno);

    printf("%s ",person1.name);
    printf("%s ",person1.cityaddr);
    printf("%d",person1.rollno);


} 