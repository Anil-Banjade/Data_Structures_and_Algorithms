#include<stdio.h> 
struct Employee{
    char name[30];
    int salary;
    int telephone;
};
struct Employee emp[3], tempemp;
void main(){
    
    int i,j,c;
    for(i=0;i<3;i++){
        scanf("%s",&emp[i].name);
        scanf("%d",&emp[i].salary);
        scanf("%d",&emp[i].telephone);
    }
    char d[30];
    int n;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if (emp[j].salary<emp[j+1].salary){

                tempemp=emp[j];
                emp[j]=emp[j+1];
                emp[j+1]=tempemp;
                // c=emp[j+1].salary;
                // //d=emp[j+1].name;
                // n=emp[j+1].telephone;

                // emp[j+1].salary=emp[j].salary;
                // //emp[j+1].name=emp[j].name;
                // emp[j+1].telephone=emp[j].telephone;

                // emp[j].salary=c; 
                // //emp[j].name=d;
                // emp[j].telephone=n;
                
                }
        }
    }
    int sum=0, average=0;
    for(i=0;i<3;i++){
        sum=sum+emp[i].salary;
        average=sum/3;

    }
    printf("average salary is %d \n",average);
    printf("highest salary is %s %d %d",emp[0].name,emp[0].salary,emp[0].telephone);
   


}