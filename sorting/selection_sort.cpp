#include <bits/stdc++.h>

// select minimum and swap
void selectionSort(int n,int arr[]){
    for(int i=0;i<=n-2;i++){

        int min=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
            
        }

        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}

int main(){

    // int n;
    // std::cin>>n;
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     std::cin>>arr[i];
    // }
    int array[3]={5,17,3};
    selectionSort(3,array);

    for(int i=0;i<3;i++){
        std::cout<<array[i]<<" ";
    }
    
}


// once we enter inside i loop at first n times then n-1 time and so on though (n-2) at first then so (n-2) but that's fine n+(n-1)+(n-2)+... so n(n+1)/2 so O(n2) 
// n2 is the best, worst and average case for selection sort.

