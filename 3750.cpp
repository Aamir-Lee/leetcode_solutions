#include "bits/stdc++.h"
using namespace std;

class Solution{
public:
    int minimumFlips(int n){
        string s="";

        while(n){
            s.push_back(n&1+'0');
            n>>=1;
        }
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=s[s.size()-1-i])
                count++;
        }
        return count;
    }
};

int main(){
    Solution sol;
    cout << sol.minimumFlips(7) << '\n';
    cout << sol.minimumFlips(10);
    return 0;
}