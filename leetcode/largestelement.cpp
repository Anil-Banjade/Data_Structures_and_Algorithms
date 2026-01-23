#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int highest=nums[0];
        for (int i=1;i<nums.size();i++){
            if (nums[i]>highest){
                highest=nums[i];
            }
        
        }
        return highest;
    }
};

int main(){

	
	Solution s1;
	Solution s2;
	vector<int> arr1={2,7,1,0};
	vector<int> arr2={-50,10,-40,30};
	cout<<"Largest element in array is"<<s1.largestElement(arr1);
	cout<<"Largest element in array is"<<s2.largestElement(arr2);
	return 0;
}
