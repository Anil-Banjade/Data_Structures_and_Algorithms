#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
  void printGfg(int N){
    if(N==0){
      return;
    }
    cout<<"GFG"<<" ";
    printGfg(N-1);
  }

};

int main(){
  Solution s;
  s.printGfg(5);
  return 0;

}
