// reverse an array using recursion
// 1 2 3 4 2 into 2 4 3 2 1

#include<bits/stdc++.h>
using namespace std;
void f(int l,int a[],int r){ // here l and r are left and right pointers of the array.
    if(l>=r){
        return;
    }
    swap(a[l],a[r]);
    f(l+1,a,r-1);
}
// using single pointer
void reverseArray(int i,int a[],int n){
    if(i>=n/2)
        return;
    swap(a[i],a[n-i-1]);
    reverseArray(i+1,a,n); 
}

int main(){

    int n=5;
    int array[n]={1,2,3,4,2};
    
    f(0,array,n-1);
    for(int i=0;i<n;i++){
        std::cout<<array[i]<<" ";
    }
    std::cout<<"\n";
    reverseArray(0,array,n); 

    for(int i=0;i<n;i++){
        std::cout<<array[i]<<" ";
    }

}

