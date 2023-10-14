// #include <bits/stdc++.h>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map <int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans=0;
        int max=-1;
        for(auto x:mp){
            if(x.second>max){
                ans=x.first;
                max=x.second;
            }
        }
        return(ans);
        
    }
};