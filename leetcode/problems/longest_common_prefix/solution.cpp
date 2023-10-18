class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string temp=strs[0];
        string ans="";
        for(int i=0;i<temp.size();i++){
            bool flag=true;
            char c=temp[i];
            for(int j=0;j<strs.size();j++){
                if(strs[j][i]!=c){
                    flag=false;
                    break;
                }
            }
            if(flag){
                ans=ans+c;
            }
            else{
                break;
            }
        }
        return(ans);
    }
};