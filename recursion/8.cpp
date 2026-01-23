#include <iostream>

int fact(int n){
    if(n==1) // fine even if we write n==0 because mul by 1 doesn't matter
        return 1;
    return n*fact(n-1);

}

int main(){
    int res=fact(3);
    std::cout<<res<<" ";
}

// TC O(N) SC O(N)
// 8.jpg and 8a.jpg why not return 0