// multiple recursion calls
// f(n)=f(n-1)+f(n-2)

#include <bits/stdc++.h>
using namespace std;

int f(int n){
    if(n<=1) // if 1 then 1 is returned if 0 then 0 is returned
        return n;
    int last=f(n-1);
    int second_last=f(n-2);
    return last+second_last;

}

int main(){

    int res=f(4);
    cout<<res<<" ";
}

// https://www.youtube.com/watch?v=kvRjNm4rVBE&list=PLgUwDviBIf0oF6QL8m22w1hIDC1vJ_BHz&index=11&ab_channel=takeUforward

// TC O(2^n) ie exponential SC O(2^n) first called 2 next called again 2 and goes on

// 2^4 is 16 but here 9 but still close and we can say exponential.
