/*Store and retrieve the name of the students and obtained marks 
in c programming in 1st semester using structure.*/


#include<stdio.h>

#include<string.h>

#define max_students 50 
struct Student{
  char name[255];
  int marks;

};

int main(){

  struct Student students[max_students];
  int num_students;
  int i;

  printf("enter the no of students");
  scanf("%d",&num_students);

  for (int i=0;i<num_students; i++){
    printf("enter students name");
    scanf("%s",&students[i].name);

    printf("enter marks");
    scanf("%d",&students[i].marks);


  }

  printf("Name \t\ Marks \n");

  for(i=0;i<num_students;i++){
    printf("%s\t\%d",students[i].name,students[i].marks);

  }

  return 0;

}




