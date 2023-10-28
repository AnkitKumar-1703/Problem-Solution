class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans=0;
        vector<int>v;
        int n=nums.size();
        for(int i=0;i<n;i++){
            set<int> s;
            for(int j=i;j<n;j++){
                s.insert(nums[j]);
                v.push_back(s.size());
            }
        }
        for(auto x:v){
            ans=ans+(x*x);
        }
        return ans;
        
    }
};