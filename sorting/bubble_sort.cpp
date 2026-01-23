#include <bits/stdc++.h>

// push the max to the last by adjacent swaps
void bubbleSort(int n, int arr[]){
    for(int i=0;i<=n-2;i++){
        for(int j=0;j<=n-i-2;j++){ 
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                
                
            }
        }
    }
}
// or
//run time error if we are accessing array above size. 
void bubble_sort(int n,int arr[]){
    for(int i=n-1;i>=1;i--){
        //optimization
        int didSwap=0;

        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                didSwap=1;
                
            }
        }
        if(didSwap==0){
            break;
        }
    } 
}

int main(){


    int array[]={5,17,3,18,2,45,55,1};
    bubbleSort(8,array);

    for(int i=0;i<8;i++){
        std::cout<<array[i]<<" ";
    }
    
}

//time complexit n+(n-1)+(n-2)+....   O(n2)

//O(n2) worst, average but can be optimized
//best 2, 3, 4, 15, 20 no swap means array is in ascending order
// if no swap done in first step then i stop so best case O(n).
// big o of n is best because loop runs to n times in first step ie first outer loop then stops.

