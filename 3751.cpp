#include "bits/stdc++.h"
using namespace std;

class Solution{
private:
    int findPeak(int num){
        vector<int> n;
        
        while(num){
            int lastDigit=num%10;
            n.push_back(lastDigit);
            num/=10;
        }
        int count=0;
        for(int i=1;i<n.size()-1;i++){
            if(n[i-1]<n[i] && n[i]>n[i+1]) count++;
            if(n[i-1]>n[i] && n[i]<n[i+1]) count++;
        }
        return count;
    }
public:
    int totalWaviness(int num1, int num2){
        int count=0;
        for(int i=num1;i<=num2;i++){
            count+=findPeak(i);
        }
        return count;
    }
};

int main(){
    Solution sol;
    cout << sol.totalWaviness(120, 130) << '\n';
    cout << sol.totalWaviness(198, 202) << '\n';
    cout << sol.totalWaviness(4848, 4848) << '\n';
    return 0;
}