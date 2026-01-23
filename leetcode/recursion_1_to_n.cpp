#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
  void printNos(int n){ 
    if (n==0){
      return;
    }
    printNos(n-1);
    cout<<n<<endl;

  }
};

int main(){
  Solution s;
  s.printNos(3);
  return 0;

}
