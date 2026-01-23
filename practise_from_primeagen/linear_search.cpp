#include <iostream>
#include <string>
using namespace std;


bool linear_search(string arr[],int n){
  for (int i=0;i<n;i++){
    if (arr[i]=="ab"){
      return true;
    }
  }
  return false;
  }

  int main(){
    string names[]={"alice","bob","ab"};
    int size=sizeof(names)/sizeof(names[0]);
    bool res=linear_search(names,size);
    cout<<"The result is "<<res<<endl;
    return 0;
  }

  
