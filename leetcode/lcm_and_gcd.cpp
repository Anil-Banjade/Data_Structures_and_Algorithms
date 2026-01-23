#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
  vector<int> lcmAndGcd(int a, int b){
    int gcd=1;
    int lcm=1;
    for(int i=min(a,b); i>0; i--){
      if(a%i==0 && b%i==0){
	gcd=i;
	break;
      }
    }
    lcm=(a*b)/gcd;
    return {lcm,gcd};

  }

};

int main(){
  Solution s;
  // printf("GCD is %d",s.lcmAndGcd(5,10));
  vector<int> result=s.lcmAndGcd(12,18);
  cout<<"LCM is "<<result[0]<<endl;
  cout<<"GCD is "<<result[1]<<endl;
  return 0;
  
}

