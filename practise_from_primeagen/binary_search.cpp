#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int binary_search(int arr[],int value,int n){
  int low=0;
  int high=n-1;

  while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]==value){
	return mid;
      }
    else if(arr[mid]>value){
      high=mid-1;
    }
    else{
      low=mid+1;
    }
  }
return -1;
}
int main(){
  int n;
  cout<<"Enter total elements in array :";
  cin>>n;
  int arr[n];
   for (int i=0; i<n;i++){
    cout<<"Enter "<< i+1 <<"th number:";
    cin>> arr[i];
  }
   int value;
   cout<<"Enter element to search: ";
   cin>>value;
   int res=binary_search(arr,value,n);
     if (res!=-1){
       cout<<"The result is found at "<<res+1<<endl;
     }else{
       cout<<"Value not found";
     }
   return 0;
}
