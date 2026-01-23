#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }else if(n==1){
            return 1;
        }else{
            return fib(n-1)+fib(n-2);
        }
        
    }
};

int main(){
    Solution f1;
    printf("%d\n",f1.fib(0));
    printf("%d\n",f1.fib(1));
    printf("%d\n",f1.fib(2));
    printf("%d\n",f1.fib(5));


}