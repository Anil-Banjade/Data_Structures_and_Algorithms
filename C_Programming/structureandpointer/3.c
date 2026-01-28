#include<stdio.h>

void main(){
    struct Date{
        int dd;
        int mm;
        int yy;
    };
    struct Person{
        char name[10];
        char addr[10];
        int tel;
        struct Date dob;
    };

    struct Person p1;

    scanf("%s",&p1.name); 
    scanf("%s",&p1.addr);
    scanf("%d",&p1.tel);
    scanf("%d",&p1.dob.dd);
    scanf("%d",&p1.dob.mm);
    scanf("%d",&p1.dob.yy);
    
    printf("%s,%s,%d,%d,%d,%d",p1.name,p1.addr,p1.tel,p1.dob.dd,p1.dob.mm,p1.dob.yy);
    


}

