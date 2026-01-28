/* Write a program to find the position of the character 'C' in the 
   sentence "idea without execution is worthless" using pointer and string. */


#include <stdio.h>
int main(){

  char sentence[]="idea without exeCution is worthless";
  char *ptr=sentence;
  int position=0;

  while(*ptr != '\0'){
    if (*ptr =='C'){
      printf("The position of 'C' is %d", position);
      break;

    }

    ptr++;

    position++;
  }

  if (*ptr=='\0'){
    printf("The character was not found");
  }

  return 0;

}

