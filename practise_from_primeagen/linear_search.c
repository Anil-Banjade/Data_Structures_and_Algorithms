#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool linear_search(char* arr[],int n){
  for (int i=0;i<n;i++){
    if (strcmp(arr[i],"ab")==0){
      return true;
    }
  }
  return false;
  }

  int main(){
    char* names[]={"alice","bob","ab"};
    int size=sizeof(names)/sizeof(names[0]);
    bool res=linear_search(names,size);
    printf("The result is %d ",res);
    return 0;
  }
