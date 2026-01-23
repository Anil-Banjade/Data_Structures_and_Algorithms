// takes an element and place it in its current order

//TC O(n2) worst and average case
//TC O(n)best case if all are sorted

#include <bits/stdc++.h>

using namespace std;

void insertion_sort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        int j=i;
        while(j>0 &&arr[j-1]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }
    }
    
}

int main(){
    int arr[]={5,23,2,3,2,42,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,size);
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

