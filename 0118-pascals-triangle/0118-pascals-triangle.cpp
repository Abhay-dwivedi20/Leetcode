class Solution {
    int nCrItem(int n , int r){
        long long ans = 1 ;
        for(int i = 0 ; i < r ; i++){
            ans = ans * (n-i);
            ans = ans / (i+1);
        }
        return ans;
    }

    vector<int> nCr(int n){
        vector<int> row;
        for(int i = 0 ; i<=n ; i++){
            row.push_back(nCrItem(n,i));
        }
        return row;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for(int i = 0 ; i<numRows ; i++){
            vector<int> row ;
            row =  nCr(i);
            ans.push_back(row);
        }
        return ans ; 
    }
};