/*

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    return true;
                }

            }
        }
        return false;
        
    }
};


*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> freq;
        for(auto i:nums ){
            freq[i]++;
            if(freq[i]==2){
            return true;
        }
        }
        return false;
        
    }
};




/* class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
            {
                return true;
            }
        }
        return false;
    }
};*/