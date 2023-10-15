class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans="";
        vector<pair<int,string>> v;
        int n=s.size();
        for(int i=0;i<n;i++){
            int count =0;
            if(s[i]=='1'){
                for(int j=i;j<n;j++){
                
                if(s[j]=='1'){
                    count++;
                }
                if(count==k){
                    string temp=s.substr(i,(j-i+1));
                    int size=temp.size();
                    v.push_back({size,temp});
                    break;
                }
                
            }
                
            }
            
        }
        if(v.size()==0){
            return(ans);
        }
        sort(v.begin(),v.end());
        for(auto x:v){
            cout<<x.first<<endl;
        }
        ans=v[0].second;
        return(ans);
    }
};