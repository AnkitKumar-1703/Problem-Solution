class Solution {
public:
    vector<int> lastVisitedIntegers(vector<string>& words) {
        stack <int> s;
        vector<int>copy;
         vector<int>copy1;
        vector <int> ans;
        int cons=0;
        for(auto x:words){
            
            if(x=="prev"){
                copy.clear();
                for(auto y:copy1){
                    copy.push_back(y);
                }
                reverse(copy.begin(),copy.end());
                cons++;
                if(cons>copy.size()){
                    ans.push_back(-1);
                }
                else{
                    ans.push_back(copy[cons-1]);
                }
            }
            else{
                int z=stoi(x);
                copy1.push_back(z);
                cons=0;
            }
        }
        return(ans);
    }
};