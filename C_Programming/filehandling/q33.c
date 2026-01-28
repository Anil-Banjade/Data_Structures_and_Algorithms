#include<stdio.h>
#include<string.h>

struct Student {
    char Name[30];
    int roll;
    int age;
};

void main()
{
    char choice,gName[30];
    FILE *fp;
    struct Student std,temp[10];
    fp=fopen("stduent.dat","a+b");
    while (choice !='n')
    {
        printf("Enter the Name : ");
        scanf("%s",std.Name);
        printf("Enter the roll no : ");
        scanf("%d",&std.roll);
        printf("Enter the age : ");
        scanf("%d",&std.age);
        fwrite(&std,sizeof(std),1,fp);
        printf("Do you want to add again : ");
        scanf("\n%c",&choice);  
    }
    fclose(fp); 
    fp=fopen("student.dat","rb");
    fread(temp,sizeof(temp[0]),3,fp);
    printf("Enter a name to search : ");
    scanf("%s",gName);
    for(int i=0;i<3;i++)
    {
    if(strcmp(temp[i].Name,gName)==0){
            printf("Name : %s\nAge : %d\nRoll :%d\n",temp[i].Name,temp[i].age,temp[i].roll);
        }
    }
    fclose(fp);
     
}