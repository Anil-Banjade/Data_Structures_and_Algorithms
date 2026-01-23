#include <bits/stdc++.h>
using namespace std;

int singleDivisorSum(int n){
 int res=0;
    for(int i=1;i*i<=n;i++){
      if(n%i==0){
        res=res+i;
        if (i!=n/i){
          res=res+n/i;
        }
      }
    }
    return res;
}

class Solution{
public:
  int sumOfDivisors(int n){
    int sum=0,res;
    for (int j=1;j<=n;j++){
      res=singleDivisorSum(j);
      cout<<res<<endl;
      sum+=res;
  }
    return sum;
  }
};

int main(){
  Solution s;
  int result;
  result=s.sumOfDivisors(4);
  printf("%d \n",result);
  return 0;
}
