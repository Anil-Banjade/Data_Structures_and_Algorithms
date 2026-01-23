#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


int jmp(vector <int>&arr){
  int length=arr.size();
  int jmpAmount=sqrt(length);
  int i=0;
  for(i;i<length;i+=jmpAmount){
    if(arr[i]){
      break;
    }
  }
  i-=jmpAmount;
  for(int j=0;j<=jmpAmount && i<length;++j,++i){
    if(arr[i]){
      return i;
    }
  }
  return -1;
}

int main(){
  vector<int> arr={0,0,0,0,1,1,1,1};
  int res=jmp(arr);
  if(res!=-1){
    cout<<"the result is found at "<<res+1<<endl;
  }else{
    cout<<"breaking floor not found";
  }
  return 0;
}
