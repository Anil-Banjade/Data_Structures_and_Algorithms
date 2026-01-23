#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    int rob(std::vector<int>& nums) {
        std::vector<int> evenIndices;
        std::vector<int> oddIndices;
        
        for(int i = 0; i < nums.size(); i++) {
            if(i % 2 == 0) {
                evenIndices.push_back(nums[i]);
            } else {
                oddIndices.push_back(nums[i]);
            }
        }

        int s_even = 0;
        int s_odd = 0; 
        
        for (int num : evenIndices) {
            s_even += num;
            std::cout<<"even nos are"<<num<<"\n";
        }

        for (int num : oddIndices) {
            s_odd += num;
            std::cout<<"odd nos are"<<num<<"\n";
        } 

       int max1 = 0;
        for(int i = 0; i < evenIndices.size(); i++) {
            int s1 = 0;
            for(int j = 0; j < oddIndices.size(); j++) {
                if(j != i && j != i-1) {
                    s1 +=oddIndices[j];
                    std::cout<<"even Indices no are"<<evenIndices[i]<<"\n";
                    std::cout<<"odd indices no are"<<oddIndices[j]<<"\n";
                    
                } 
                
                
            }
            s1=s1+evenIndices[i];
            max1 = std::max(max1, s1);
            std::cout<<"max inside is"<<max1<<"\n";
        }

        int max=std::max(s_even,s_odd);
        return std::max(max,max1);
    }
};

int main() {
    std::vector<int> nums = {6,3,10,8,2,10,3,5,10,5,3}; 
    Solution sol;
    std::cout << sol.rob(nums) << std::endl; // Output: 4
    return 0;
}
