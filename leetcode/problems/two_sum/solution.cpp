class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // sort(nums.begin(),nums.end());
        vector<int> ans;
        // int i=0,j=nums.size()-1;
        // cout<<j;
        // while(i<j){
        //     if(ans[i]+ans[j]==target){
        //         ans.push_back(i);
        //         ans.push_back(j);
        //         break;
        //     }
        //     else if(ans[i]+ans[j]>target){
        //         j--;
        //     }
        //     else{
        //         i++;
        //     }
        // }
       
        // return(ans);
        bool flag=false;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]==target){
                    ans.push_back(i);
                    ans.push_back(j);
                    flag=true;
                    break;
                    
                }

            }
            if(flag){
                break;
            }
        }
        return(ans);
            
        
    }
};