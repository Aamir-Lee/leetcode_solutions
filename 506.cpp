#include "bits/stdc++.h"
using namespace std;

class Solution{
public:
    int subarraySum(int k, vector<int>& nums){
        unordered_map<int, int> hashMap;
        hashMap[0]=1;
        int count=0, sum=0;

        for(int num:nums){
            sum+=num;

            if(hashMap.count(sum-k)){
                count+=hashMap[sum-k];
            }

            hashMap[sum]++;
            
        }
        return count;
    }
};

int main(){
    vector<int> vec1={1,1,1};
    vector<int> vec2={1,2,3};

    Solution sol;
    cout << sol.subarraySum(2, vec1) << '\n';
    cout << sol.subarraySum(3 , vec2) << '\n';
    return 0;
}