#include <bits/stdc++.h>
using namespace std;



bool isPrime(int n){
  int count=0;
  for (int i=1;i*i<=n;i++){
    if (n%i==0){
      count++;
      if(i!=n/i){
	count++;
    }
    }
  }
  if (count==2){
    return true;
  }
  else{
    return false;
  }
  
};


int main(){

  int res=isPrime(43);
  cout<<"No. is "<<res<<endl;
  int res1=isPrime(1);
  cout<<"No. is "<<res1<<endl;

  return 0;
}
