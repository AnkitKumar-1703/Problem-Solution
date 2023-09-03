class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        map<char,int> m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        for(int i=0;i<s.length();i++){
           
                if(i!=s.length()-1&&s[i]=='I'&&s[i+1]=='V'){
                    ans=ans+4;
                    i++;
                }
                else if(i!=s.length()-1&&s[i]=='I'&&s[i+1]=='X'){
                    ans=ans+9;
                    i++;
                }
                else if(i!=s.length()-1&&s[i]=='X'&&s[i+1]=='L'){
                    ans=ans+40;
                    i++;
                }
                else if(i!=s.length()-1&&s[i]=='X'&&s[i+1]=='C'){
                    ans=ans+90;
                    i++;
                }
                else if(i!=s.length()-1&&s[i]=='C'&&s[i+1]=='D'){
                    ans=ans+400;
                    i++;
                }
                else if(i!=s.length()-1&&s[i]=='C'&&s[i+1]=='M'){
                    ans=ans+900;
                    i++;
                }
                else{
                    ans=ans+m[s[i]];
                }
            
            
        }
        return ans;
        
    }
};