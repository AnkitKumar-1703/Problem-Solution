class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> ans;
        int k=1,n=nums.size();
        ans.push_back(nums[0]);
        for(int i=1;i<n;i++){
            if(nums[i]!=nums[i-1]){
                ans.push_back(nums[i]);
                k++;
            }
        }
        for(int i=0;i<k;i++){
            nums[i]=ans[i];
        }
        return(k);
    }
};