#include "bits/stdc++.h";
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        unordered_map<int, int> hashMap;
        
        for(int i=0;i<n;i++){
            int compliment = target - nums[i];

            if(hashMap.find(compliment) != hashMap.end()){
                return {i, hashMap[compliment]};
            }

            hashMap[nums[i]] = i;
        }

        return {-1, -1};
    }
};

int main(){
    vector<int>exp1={2, 7, 11, 15};
    vector<int>exp2={3, 2, 4};
    vector<int>exp3={3, 3};
    
    Solution sol;
    vector<int>ans1=sol.twoSum(exp1, 9);
    vector<int>ans2=sol.twoSum(exp2, 6);
    vector<int>ans3=sol.twoSum(exp3, 6);
    
    return 0;
}