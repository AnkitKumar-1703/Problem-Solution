class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v(2,-1);
        int index=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(index>=nums.size()){
            return(v);
        }
        if(nums[index]==target){
            v[0]=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
            int u=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
            v[1]=u-1;
        }
        return(v);

        
    }
};