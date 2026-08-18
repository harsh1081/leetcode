class Solution {
public:
    vector<int> rowel(int row){
        long long ans =1;
        vector<int>genrow;
        genrow.push_back(1);
        for(int i=1;i<row;i++){
            ans=ans*(row-i);
            ans=ans/i;
            genrow.push_back(ans);
        }
        return genrow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(rowel(i));
        }
        return ans;
        
    }
};