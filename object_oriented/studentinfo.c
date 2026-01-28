#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

typedef struct{

  char name[255];
  int rollno;
  char address[255];
  char phone[10];
   

}Student;


int compare(const void *a, const void *b){
  Student* s1=(Student*)a;
  Student* s2=(Student*)b;
  return strcmp(s1->name, s2->name);

}

void writeToFile(Student students[], int count){
  FILE *fp;
  fp=fopen("students.txt","w");
  if (fp==NULL){
    printf("unable to create file");
    exit(1);
  }
  fwrite(&count,sizeof(int),1,fp);
  fwrite(students,sizeof(Student),count,fp);

  fclose(fp);
}

void readFromFile(Student students[], int *count){
  FILE *fp;
  fp=fopen("students.txt","r");
  if(fp==NULL){
    printf("unable to open file");
    exit(1);
  }
  fread(count,sizeof(int),1,fp);
  fread(students,sizeof(Student), *count,fp);

  fclose(fp);
  qsort(students, *count,sizeof(Student),compare);

}


int main(){

  Student students[MAX_SIZE];
  int count=0, choice;

  while(1){
    printf("enter your choice:\n");
    printf("1 add student \n");
    printf("2 save and exit \n");
    scanf("%d",&choice);

    if (choice==1){
      if(count==MAX_SIZE){
	printf("Maximum limit reached\n");

	continue;
      }

      printf("Enter student name");
      scanf("%s",&students[count].name);
      printf("Enter roll numver");
      scanf("%d",&students[count].rollno);
      printf("Enter address");
      scanf("%s",&students[count].address);
      printf("enter phone no");
      scanf("%s",&students[count].phone);
      count++;

    }else if(choice==2){
      writeToFile(students, count);
      printf("data saved successfully\n");
      break;
    }else{
      printf("invalid choice \n");
    }
  }

    readFromFile(students,count);
    printf("student information \n");

    for (int i=0;i<count;i++){
      printf("Name %s \n",students[i].name);
      printf("Roll no %s \n",students[i].rollno);
      printf("Address %s \n",students[i].address);
      printf("phone number %s \n",students[i].phone);
      printf("\n");

    }

    return 0;
    }
