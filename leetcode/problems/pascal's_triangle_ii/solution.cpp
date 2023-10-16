class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>v;
        vector<int> temp;
        vector<int> temp1;
        temp.push_back(1);
        temp1.push_back(1);
        temp1.push_back(1);
        v.push_back(temp);
        v.push_back(temp1);
        for(int i=2;i<=rowIndex;i++){
            vector<int> x;
            for(int j=0;j<=i;j++){
                if(j==0||j==i){
                    x.push_back(1);
                }
                else{
                    x.push_back((v[i-1][j-1]+v[i-1][j]));
                }
            }
            v.push_back(x);
        }
        return(v[rowIndex]);

    }
};