//tc O(nlogn)
//sc O(n) no temp array so slightly better.

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;

    while(i<j){
        while(arr[i]<=pivot&&i<=high-1){
            i++;
        }
        while(arr[j]>pivot&&j>=low+1){
            j--;
        }

        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void quick_sort(vector<int> &arr,int low,int high){
    if(low<high){
        int partition_index=partition(arr,low,high); 
        quick_sort(arr,low,partition_index-1);
        quick_sort(arr,partition_index+1,high);

    }
}

int main(){
    vector<int> arr={5,3,34,1,6,3,5};
    int n=arr.size();
    
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

} 

