class Solution {
public:
    bool isPalindrome(int x) {
        bool ans=true;
        if(x<0){
            ans=false;
        }
        string s=to_string(x);
        int n=s.size();
        int i=0,j=n-1;
        while(i<=j){
            if(s[i]!=s[j]){
                ans=false;
            }
            i++;
            j--;
        }
        return ans;
    }
};