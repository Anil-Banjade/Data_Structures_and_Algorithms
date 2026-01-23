#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int binary_search(const vector<int> &arr,int value){
  int low=0;
  int high=arr.size()-1;

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

  vector<int> arr;
  char choice;
  while(true){
    cout<<"Enter " <<arr.size()+1<<" th number / 'n' to stop: ";
    string input;
    cin>>input;
    if (input=="n"){
      break;
    }
    int elems=stoi(input);
    arr.push_back(elems);
  }
  sort(arr.begin(),arr.end());
   int value;
   cout<<"Enter element to search: ";
   cin>>value;
   int res=binary_search(arr,value);
     if (res!=-1){
       cout<<"The result is found at "<<res+1<<endl;
     }else{
       cout<<"Value not found";
     }
   return 0;
}
