#include "bits/stdc++.h"
using namespace std;

class Solution{
public:
    int minSubArrayLen(int target, vector<int>& nums){
        int n=nums.size();
        int start=0, ans=INT_MAX, sum=0;
        
        for(int end=0;end<n;end++){
            sum+=nums[end];

            while(sum>= target){
                ans=min(ans, end-start+1);
                sum-=nums[start++];
            }
        }

        return ans == INT_MAX ? 0 : ans;
    }
};

int main(){
    vector<int> vec1={2,3,1,2,4,3};
    vector<int> vec2={1,4,4};
    vector<int> vec3={1,1,1,1,1,1,1,1};

    Solution sol;
    cout << sol.minSubArrayLen(7, vec1) << '\n';
    cout << sol.minSubArrayLen(4, vec2) << '\n';
    cout << sol.minSubArrayLen(11, vec3) << '\n';
    return 0;
}